import os

from rouxinol.third_party.compy_learn.extractors import clang_driver_scoped_options
from rouxinol.third_party.compy_learn.extractors.extractors import Visitor
from rouxinol.third_party.compy_learn.extractors.extractors import ClangDriver
from rouxinol.third_party.compy_learn.extractors.extractors import ClangExtractor
from rouxinol.third_party.compy_learn.extractors.extractors import clang
from rouxinol.third_party.compy_learn import common


class SyntaxSeqVisitor(Visitor):
    def __init__(self):
        Visitor.__init__(self)
        self.S = []

    def visit(self, v):
        if isinstance(v, clang.seq.TokenInfo):
            self.S.append(v.name)


class SyntaxTokenkindVisitor(Visitor):
    def __init__(self):
        Visitor.__init__(self)
        self.S = []

    def visit(self, v):
        if isinstance(v, clang.seq.TokenInfo):
            self.S.append(v.kind)


class SyntaxTokenkindVariableVisitor(Visitor):
    def __init__(self):
        Visitor.__init__(self)
        self.S = []

    def visit(self, v):
        if isinstance(v, clang.seq.TokenInfo):
            if v.kind == "raw_identifier" and "var" in v.name:
                self.S.append(v.name)
            elif (
                v.name in ["for", "while", "do", "if", "else", "return"]
                or v.name in ["fn_0"]
                or v.name.startswith("int")
                or v.name.startswith("float")
            ):
                self.S.append(v.name)
            else:
                self.S.append(v.kind)


class SyntaxSeqBuilder(common.RepresentationBuilder):
    def __init__(self, clang_driver=None):
        common.RepresentationBuilder.__init__(self)

        if clang_driver:
            self.__clang_driver = clang_driver
        else:
            self.__clang_driver = ClangDriver(
                ClangDriver.ProgrammingLanguage.C,
                ClangDriver.OptimizationLevel.O0,
                [],
                ["-Wall"],
            )
        self.__extractor = ClangExtractor(self.__clang_driver)
        self.__src_type = "SRC"
    
    def get_src_type(
        self
    ):
        return self.__src_type

    def string_to_info(self, src, *args, **kwargs):
        
        additional_include_dir =  kwargs["additional_include_dir"] if "additional_include_dir" in kwargs else None
        filename = kwargs["filename"] if "filename" in kwargs else None      
        header = kwargs["header"] if "header" in kwargs else None 

        # Start timing
        runtime = {
            'elapsed_time': 0.0,
            'user_time': 0.0,
            'system_time': 0.0,
            'cpu_time': 0.0
        }

        start_time = time.perf_counter()
        start_usage = resource.getrusage(resource.RUSAGE_CHILDREN)
        start = time.time()

        if not os.path.isfile(src):
            raise FileNotFoundError(f"The file '{src}' does not exist.") 

        with open(src, "rb") as fin:
            src_bytes = fin.read()

        if header:
            src_bytes = header + src_bytes

        with clang_driver_scoped_options(self.__clang_driver, additional_include_dir=additional_include_dir, filename=filename):
            info = self.__extractor.SeqFromString(src_bytes)

        # End timing
        end_time = time.perf_counter()
        end_usage = resource.getrusage(resource.RUSAGE_CHILDREN)

        # Calculate the time differences
        user_time = end_usage.ru_utime - start_usage.ru_utime
        system_time = end_usage.ru_stime - start_usage.ru_stime
        cpu_time = user_time + system_time
        
        # Update runtime info
        runtime['elapsed_time'] = end_time - start_time  # Wall-clock time
        runtime['user_time'] = user_time                # Time in user mode
        runtime['system_time'] = system_time            # Time in system mode
        runtime['cpu_time'] = cpu_time                  # Total CPU time

        self.update_runtime(runtime)

        return info

    def info_to_representation(self, info, visitor=SyntaxTokenkindVariableVisitor):
        # Start timing
        runtime = {
            'elapsed_time': 0.0,
            'user_time': 0.0,
            'system_time': 0.0,
            'cpu_time': 0.0
        }

        start_time = time.perf_counter()
        start_usage = resource.getrusage(resource.RUSAGE_CHILDREN)
        start = time.time()

        vis = visitor()
        info.accept(vis)

        for token in vis.S:
            if token not in self._attrs:
                self._attrs[token] = 0
            self._attrs[token] += 1

        rep = common.Sequence(vis.S, self.get_attrs())
        
        # End timing
        end_time = time.perf_counter()
        end_usage = resource.getrusage(resource.RUSAGE_CHILDREN)

        # Calculate the time differences
        user_time = end_usage.ru_utime - start_usage.ru_utime
        system_time = end_usage.ru_stime - start_usage.ru_stime
        cpu_time = user_time + system_time
        
        # Update runtime info
        runtime['elapsed_time'] = end_time - start_time  # Wall-clock time
        runtime['user_time'] = user_time                # Time in user mode
        runtime['system_time'] = system_time            # Time in system mode
        runtime['cpu_time'] = cpu_time                  # Total CPU time

        self.update_runtime(runtime)
        
        return rep