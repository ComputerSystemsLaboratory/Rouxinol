import os
import time
import resource

from rouxinol.third_party.compy_learn.extractors import clang_driver_scoped_options
from rouxinol.third_party.compy_learn.extractors.extractors import Visitor
from rouxinol.third_party.compy_learn.extractors.extractors import ClangDriver
from rouxinol.third_party.compy_learn.extractors.extractors import LLVMIRExtractor
from rouxinol.third_party.compy_learn.extractors.extractors import llvm
from rouxinol.third_party.compy_learn import common


def merge_after_element_on_condition(elements, element_conditions):
    """
    Ex.: If merged on conditions ['a'], ['a', 'b', 'c', 'a', 'e'] becomes ['ab', 'c', 'ae']
    """
    for i in range(len(elements) - 2, -1, -1):
        if elements[i] in element_conditions:
            elements[i] = elements[i] + elements.pop(i + 1)

    return elements


def filer_elements(elements, element_filter):
    """
    Ex.: If filtered on elements [' '], ['a', ' ', 'c'] becomes ['a', 'c']
    """
    return [element for element in elements if element not in element_filter]


def strip_elements(elements, element_filters):
    """
    Ex.: If stripped on elments [' '], ['a', ' b', 'c'] becomes ['a', 'b', 'c']
    """
    ret = []
    for element in elements:
        for element_filter in element_filters:
            element = element.strip(element_filter)
        ret.append(element)

    return ret


def strip_function_name(elements):
    for i in range(len(elements) - 1):
        if elements[i] == "@":
            elements[i + 1] = "fn_0"

    return elements


def transform_elements(elements):
    elements = merge_after_element_on_condition(elements, ["%", "i"])
    elements = strip_elements(elements, ["\n", " "])
    elements = filer_elements(elements, ["", " ", "local_unnamed_addr"])

    return elements


class LLVMSeqVisitor(Visitor):
    def __init__(self):
        Visitor.__init__(self)
        self.S = []

    def visit(self, v):
        if isinstance(v, llvm.seq.FunctionInfo):
            self.S += strip_function_name(transform_elements(v.signature))

        if isinstance(v, llvm.seq.BasicBlockInfo):
            self.S += [v.name + ":"]

        if isinstance(v, llvm.seq.InstructionInfo):
            self.S += transform_elements(v.tokens)

class LLVMHistogramVisitor(Visitor):
    def __init__(self):
        Visitor.__init__(self)
        self.S = []

    def visit(self, v):
        if isinstance(v, llvm.seq.FunctionInfo):
            self.S += strip_function_name(transform_elements(v.signature))

        if isinstance(v, llvm.seq.BasicBlockInfo):
            self.S += [v.name + ":"]

        if isinstance(v, llvm.seq.InstructionInfo):
            self.S += transform_elements(v.tokens)

class LLVMMilepostVisitor(Visitor):
    def __init__(self):
        Visitor.__init__(self)
        self.S = []

    def visit(self, v):
        if isinstance(v, llvm.seq.FunctionInfo):
            self.S += strip_function_name(transform_elements(v.signature))

        if isinstance(v, llvm.seq.BasicBlockInfo):
            self.S += [v.name + ":"]

        if isinstance(v, llvm.seq.InstructionInfo):
            self.S += transform_elements(v.tokens)

class LLVMSeqBuilder(common.RepresentationBuilder):
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

    def info_to_representation(self, info, visitor=LLVMSeqVisitor):
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
            if token not in self._tokens:
                self._tokens[token] = 0
            self._tokens[token] += 1

        rep = common.Sequence(vis.S, self.get_tokens())

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

