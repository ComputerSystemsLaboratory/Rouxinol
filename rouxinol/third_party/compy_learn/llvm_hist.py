import os
import time
import resource

from rouxinol.third_party.compy_learn.extractors import clang_driver_scoped_options
from rouxinol.third_party.compy_learn.extractors.extractors import Visitor
from rouxinol.third_party.compy_learn.extractors.extractors import ClangDriver
from rouxinol.third_party.compy_learn.extractors.extractors import LLVMIRExtractor
from rouxinol.third_party.compy_learn.extractors.extractors import llvm
from rouxinol.third_party.compy_learn import common


class LLVMHistogramVisitor(Visitor):
    def __init__(self):
        Visitor.__init__(self)
        self.D = {}

    def visit(self, v):
        if isinstance(v, llvm.hist.FunctionInfo):
            self.D[v.name] = v.instructions



class LLVMHistogramBuilder(common.RepresentationBuilder):
    def __init__(self, clang_driver=None):
        common.RepresentationBuilder.__init__(self)

        if clang_driver:
            self.__clang_driver = clang_driver
        else:
            self.__clang_driver = ClangDriver(
                ClangDriver.ProgrammingLanguage.LLVM,
                ClangDriver.OptimizationLevel.O0,
                [],
                ["-Wall"],
            )
        self.__extractor = LLVMIRExtractor(self.__clang_driver)
        self.__src_type = "IR"
    
    def get_src_type(
        self
    ):
        return self.__src_type

    def string_to_info(self, src, *args, **kwargs):
        additional_include_dir =  kwargs["additional_include_dir"] if "additional_include_dir" in kwargs else None
        filename = kwargs["filename"] if "filename" in kwargs else None    
        
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

        with clang_driver_scoped_options(self.__clang_driver, additional_include_dir=additional_include_dir, filename=filename):
            info = self.__extractor.HistFromString(src_bytes)

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

    def info_to_representation(self, info, visitor=LLVMHistogramVisitor):
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

        for _, insts in vis.D.items():
            for token, _ in insts.items():
                if token not in self._attrs:
                    self._attrs[token] = 0
                self._attrs[token] += 1

        rep = common.Dictionary(vis.D, self.get_attrs())

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

