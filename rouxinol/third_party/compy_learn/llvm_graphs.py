import os
import time
import resource
import networkx as nx

from rouxinol.third_party.compy_learn.extractors import clang_driver_scoped_options
from rouxinol.third_party.compy_learn.extractors.extractors import Visitor
from rouxinol.third_party.compy_learn.extractors.extractors import ClangDriver
from rouxinol.third_party.compy_learn.extractors.extractors import LLVMIRExtractor
from rouxinol.third_party.compy_learn.extractors.extractors import llvm
from rouxinol.third_party.compy_learn import common


def has_edge(G, edge1, edge2, attr):
    """Verify if a edge exists."""
    try:
        edges = G.edges(edge1, data=True)
        for e1, e2, att in edges:
            if e2 == edge2 and att['attr'] == attr:
                return True
        return False
    except Exception:
        return False


def visitor_is_compact(visitor):
    """Verify the visitor."""
    return (isinstance(visitor, LLVMCFGCompactVisitor)
            or isinstance(visitor, LLVMCFGCallCompactVisitor)
            or isinstance(visitor, LLVMCDFGCompactVisitor)
            or isinstance(visitor, LLVMCDFGCallCompactVisitor))


def visitor_is_compact_single(visitor):
    """Verify the visitor."""
    return (isinstance(visitor, LLVMCFGCallCompactSingleVisitor)
            or isinstance(visitor, LLVMCDFGCompactSingleVisitor)
            or isinstance(visitor, LLVMCDFGCallCompactSingleVisitor))


def add_missing_call_edges(visitor):
    """Add missing call edges.

    #include <stdio.h>

    int main() {
        int x = Fib(10);
        printf("Result: %d\n", x);
    }

    int Fib(int x) {...}
    """
    for instruction, call in visitor.calls.items():
        called_function = (
            visitor.functions[call]
            if call in visitor.functions
            else None
        )
        if called_function:
            if visitor_is_compact(visitor):
                visitor.G.add_edge(instruction.basicBlock, called_function.entryInstruction.basicBlock, attr="call")
                for exit in called_function.exitInstructions:
                    visitor.G.add_edge(exit.basicBlock, instruction.basicBlock, attr="call")
            elif visitor_is_compact_single(visitor):
                if not has_edge(visitor.G, instruction.basicBlock, called_function.entryInstruction.basicBlock, attr="call"):
                    visitor.G.add_edge(instruction.basicBlock, called_function.entryInstruction.basicBlock, attr="call")
                for exit in called_function.exitInstructions:
                    if not has_edge(visitor.G, exit.basicBlock, instruction.basicBlock, attr="call"):
                        visitor.G.add_edge(exit.basicBlock, instruction.basicBlock, attr="call")
            else:
                visitor.G.add_edge(instruction, called_function.entryInstruction, attr="call")
                for exit in called_function.exitInstructions:
                    visitor.G.add_edge(exit, instruction, attr="call")


#
# attr == opcode
#

class LLVMCFGVisitor(Visitor):
    def __init__(self):
        Visitor.__init__(self)
        self.edge_types = ["control"]
        self.G = nx.MultiDiGraph()

    def visit(self, v):
        if isinstance(v, llvm.graph.BasicBlockInfo):
            # CFG edges: Inner-BB.
            instr_prev = v.instructions[0]
            for instr in v.instructions[1:]:
                self.G.add_edge(instr_prev, instr, attr="control")
                instr_prev = instr

            # CFG edges: Inter-BB
            for succ in v.successors:
                self.G.add_edge(v.instructions[-1], succ.instructions[0], attr="control")

        if isinstance(v, llvm.graph.InstructionInfo):
            # Instruction nodes.
            self.G.add_node(v, attr=(v.opcode), type=(v.type), code=(v.code), label="inst")


class LLVMCFGCompactVisitor(Visitor):
    def __init__(self):
        Visitor.__init__(self)
        self.edge_types = ["control"]
        self.G = nx.MultiDiGraph()

    def visit(self, v):
        if isinstance(v, llvm.graph.BasicBlockInfo):
            # CFG nodes: Inner-BB.
            attr = ' '.join([insn.opcode for insn in v.instructions])
            type_ = ' '.join([insn.type for insn in v.instructions])
            code = ' '.join([insn.code for insn in v.instructions])
            self.G.add_node(v, attr=attr, type=type_, code=code, label="inst")

            # CFG edges: Inter-BB
            for succ in v.successors:
                self.G.add_edge(v, succ.instructions[0].basicBlock, attr="control")

class LLVMCFGCallVisitor(Visitor):
    def __init__(self):
        Visitor.__init__(self)
        self.edge_types = ["control", "call"]
        self.G = nx.MultiDiGraph()
        self.functions = {}
        self.calls = {}

    def visit(self, v):
        if isinstance(v, llvm.graph.FunctionInfo):
            self.functions[v.name] = v

            # Function root node.
            self.G.add_node(v, attr="function")
            self.G.add_edge(v, v.entryInstruction, attr="call")

        if isinstance(v, llvm.graph.BasicBlockInfo):
            # CFG edges: Inner-BB.
            instr_prev = v.instructions[0]
            for instr in v.instructions[1:]:
                self.G.add_edge(instr_prev, instr, attr="control")
                instr_prev = instr

            # CFG edges: Inter-BB
            for succ in v.successors:
                self.G.add_edge(v.instructions[-1], succ.instructions[0], attr="control")

        if isinstance(v, llvm.graph.InstructionInfo):
            # Instruction nodes.
            self.G.add_node(v, attr=(v.opcode), type=(v.type), code=(v.code), label="inst")

            # Call edges.
            if v.opcode == "ret":
                self.G.add_edge(v, v.function, attr="call")
            if v.opcode == "call":
                called_function = (
                    self.functions[v.callTarget]
                    if v.callTarget in self.functions
                    else None
                )
                if called_function:
                    self.G.add_edge(v, called_function.entryInstruction, attr="call")
                    for exit in called_function.exitInstructions:
                        self.G.add_edge(exit, v, attr="call")
                else:
                    self.calls[v] = v.callTarget


class LLVMCFGCallCompactVisitor(Visitor):
    def __init__(self):
        Visitor.__init__(self)
        self.edge_types = ["control", "call"]
        self.G = nx.MultiDiGraph()
        self.functions = {}
        self.calls = {}

    def visit(self, v):
        if isinstance(v, llvm.graph.FunctionInfo):
            self.functions[v.name] = v

            # Function root node.
            self.G.add_node(v, attr="function")
            self.G.add_edge(v, v.entryInstruction.basicBlock, attr="call")

        if isinstance(v, llvm.graph.BasicBlockInfo):
            # CFG nodes: Inner-BB.
            attr = ' '.join([insn.opcode for insn in v.instructions])
            type_ = ' '.join([insn.type for insn in v.instructions])
            code = ' '.join([insn.code for insn in v.instructions])
            self.G.add_node(v, attr=attr, type=type_, code=code, label="inst")

            # CFG edges: Inter-BB
            for succ in v.successors:
                self.G.add_edge(v, succ.instructions[0].basicBlock, attr="control")

        if isinstance(v, llvm.graph.InstructionInfo):
            # Call edges.
            if v.opcode == "ret":
                self.G.add_edge(v.basicBlock, v.function, attr="call")
            if v.opcode == "call":
                called_function = (
                    self.functions[v.callTarget]
                    if v.callTarget in self.functions
                    else None
                )
                if called_function:
                    self.G.add_edge(v.basicBlock, called_function.entryInstruction.basicBlock, attr="call")
                    for exit in called_function.exitInstructions:
                        self.G.add_edge(exit.basicBlock, v.basicBlock, attr="call")
                else:
                    self.calls[v] = v.callTarget


class LLVMCFGCallCompactSingleVisitor(Visitor):
    """Do not duplicate edges."""
    def __init__(self):
        Visitor.__init__(self)
        self.edge_types = ["control", "call"]
        self.G = nx.MultiDiGraph()
        self.functions = {}
        self.calls = {}

    def visit(self, v):
        if isinstance(v, llvm.graph.FunctionInfo):
            self.functions[v.name] = v

            # Function root node.
            self.G.add_node(v, attr="function")
            self.G.add_edge(v, v.entryInstruction.basicBlock, attr="call")

        if isinstance(v, llvm.graph.BasicBlockInfo):
            # CFG nodes: Inner-BB.
            attr = ' '.join([insn.opcode for insn in v.instructions])
            type_ = ' '.join([insn.type for insn in v.instructions])
            code = ' '.join([insn.code for insn in v.instructions])
            self.G.add_node(v, attr=attr, type=type_, code=code, label="inst")

            # CFG edges: Inter-BB
            for succ in v.successors:
                self.G.add_edge(v, succ.instructions[0].basicBlock, attr="control")

        if isinstance(v, llvm.graph.InstructionInfo):
            # Call edges.
            if v.opcode == "ret":
                self.G.add_edge(v.basicBlock, v.function, attr="call")
            if v.opcode == "call":
                called_function = (
                    self.functions[v.callTarget]
                    if v.callTarget in self.functions
                    else None
                )
                if called_function:
                    if not has_edge(self.G, v.basicBlock, called_function.entryInstruction.basicBlock, "call"):
                        self.G.add_edge(v.basicBlock, called_function.entryInstruction.basicBlock, attr="call")
                    for exit in called_function.exitInstructions:
                        if not has_edge(self.G, exit.basicBlock, v.basicBlock, "call"):
                            self.G.add_edge(exit.basicBlock, v.basicBlock, attr="call")
                else:
                    self.calls[v] = v.callTarget


class LLVMCDFGVisitor(Visitor):
    def __init__(self):
        Visitor.__init__(self)
        self.edge_types = ["control", "data", "mem"]
        self.G = nx.MultiDiGraph()

    def visit(self, v):
        if isinstance(v, llvm.graph.FunctionInfo):
            # Function arg nodes.
            for arg in v.args:
                self.G.add_node(arg, attr=(arg.type), label="data")

            # Memory accesses edges.
            for memacc in v.memoryAccesses:
                if memacc.inst:
                    for dep in memacc.dependencies:
                        if dep.inst:
                            self.G.add_edge(dep.inst, memacc.inst, attr="mem")

        if isinstance(v, llvm.graph.BasicBlockInfo):
            # CFG edges: Inner-BB.
            instr_prev = v.instructions[0]
            for instr in v.instructions[1:]:
                self.G.add_edge(instr_prev, instr, attr="control")
                instr_prev = instr

            # CFG edges: Inter-BB
            for succ in v.successors:
                self.G.add_edge(v.instructions[-1], succ.instructions[0], attr="control")

        if isinstance(v, llvm.graph.InstructionInfo):
            # Instruction nodes.
            self.G.add_node(v, attr=(v.opcode), type=(v.type), code=(v.code), label="inst")

            # Operands.
            for operand in v.operands:
                if isinstance(operand, llvm.graph.ArgInfo) or isinstance(
                    operand, llvm.graph.InstructionInfo
                ):
                    self.G.add_edge(operand, v, attr="data")

class LLVMCDFGCompactVisitor(Visitor):
    def __init__(self):
        Visitor.__init__(self)
        self.edge_types = ["control", "data", "mem"]
        self.G = nx.MultiDiGraph()

    def visit(self, v):
        if isinstance(v, llvm.graph.FunctionInfo):
            # Function arg nodes.
            for arg in v.args:
                self.G.add_node(arg, attr=(arg.type), label="data")

            # Memory accesses edges.
            for memacc in v.memoryAccesses:
                if memacc.inst:
                    for dep in memacc.dependencies:
                        if dep.inst:
                            self.G.add_edge(dep.inst.basicBlock, memacc.inst.basicBlock, attr="mem")

        if isinstance(v, llvm.graph.BasicBlockInfo):
            # CFG nodes: Inner-BB.
            attr = ' '.join([insn.opcode for insn in v.instructions])
            type_ = ' '.join([insn.type for insn in v.instructions])
            code = ' '.join([insn.code for insn in v.instructions])
            self.G.add_node(v, attr=attr, type=type_, code=code, label="inst")

            # CFG edges: Inter-BB
            for succ in v.successors:
                self.G.add_edge(v, succ.instructions[0].basicBlock, attr="control")

        if isinstance(v, llvm.graph.InstructionInfo):
            # Operands.
            for operand in v.operands:
                if isinstance(operand, llvm.graph.ArgInfo):
                    self.G.add_edge(operand, v.basicBlock, attr="data")
                if isinstance(operand, llvm.graph.InstructionInfo):
                    self.G.add_edge(operand.basicBlock, v.basicBlock, attr="data")


class LLVMCDFGCompactSingleVisitor(Visitor):
    """Do not duplicate edges."""
    def __init__(self):
        Visitor.__init__(self)
        self.edge_types = ["control", "data", "mem"]
        self.G = nx.MultiDiGraph()

    def visit(self, v):
        if isinstance(v, llvm.graph.FunctionInfo):
            # Function arg nodes.
            for arg in v.args:
                self.G.add_node(arg, attr=(arg.type), label="data")

            # Memory accesses edges.
            for memacc in v.memoryAccesses:
                if memacc.inst:
                    for dep in memacc.dependencies:
                        if dep.inst:
                            if not has_edge(self.G, dep.inst.basicBlock, memacc.inst.basicBlock, "mem"):
                                self.G.add_edge(dep.inst.basicBlock, memacc.inst.basicBlock, attr="mem")

        if isinstance(v, llvm.graph.BasicBlockInfo):
            # CFG nodes: Inner-BB.
            attr = ' '.join([insn.opcode for insn in v.instructions])
            type_ = ' '.join([insn.type for insn in v.instructions])
            code = ' '.join([insn.code for insn in v.instructions])
            self.G.add_node(v, attr=attr, type=type_, code=code, label="inst")

            # CFG edges: Inter-BB
            for succ in v.successors:
                self.G.add_edge(v, succ.instructions[0].basicBlock, attr="control")

        if isinstance(v, llvm.graph.InstructionInfo):
            # Operands.
            for operand in v.operands:
                if isinstance(operand, llvm.graph.ArgInfo):
                    if not has_edge(self.G, operand, v.basicBlock, "data"):
                        self.G.add_edge(operand, v.basicBlock, attr="data")
                if isinstance(operand, llvm.graph.InstructionInfo):
                    if not has_edge(self.G, operand.basicBlock, v.basicBlock, "data"):
                        self.G.add_edge(operand.basicBlock, v.basicBlock, attr="data")


class LLVMCDFGCallVisitor(Visitor):
    def __init__(self):
        Visitor.__init__(self)
        self.edge_types = ["control", "data", "mem", "call"]
        self.G = nx.MultiDiGraph()
        self.functions = {}
        self.calls = {}

    def visit(self, v):
        if isinstance(v, llvm.graph.FunctionInfo):
            self.functions[v.name] = v

            # Function root node.
            self.G.add_node(v, attr="function")
            self.G.add_edge(v, v.entryInstruction, attr="call")

            # Function arg nodes.
            for arg in v.args:
                self.G.add_node(arg, attr=(arg.type), label="data")

            # Memory accesses edges.
            for memacc in v.memoryAccesses:
                if memacc.inst:
                    for dep in memacc.dependencies:
                        if dep.inst:
                            self.G.add_edge(dep.inst, memacc.inst, attr="mem")

        if isinstance(v, llvm.graph.BasicBlockInfo):
            # CFG edges: Inner-BB.
            instr_prev = v.instructions[0]
            for instr in v.instructions[1:]:
                self.G.add_edge(instr_prev, instr, attr="control")
                instr_prev = instr

            # CFG edges: Inter-BB
            for succ in v.successors:
                self.G.add_edge(v.instructions[-1], succ.instructions[0], attr="control")

        if isinstance(v, llvm.graph.InstructionInfo):
            # Instruction nodes.
            self.G.add_node(v, attr=(v.opcode), type=(v.type), code=(v.code), label="inst")

            # Call edges.
            if v.opcode == "ret":
                self.G.add_edge(v, v.function, attr="call")
            if v.opcode == "call":
                called_function = (
                    self.functions[v.callTarget]
                    if v.callTarget in self.functions
                    else None
                )
                if called_function:
                    self.G.add_edge(v, called_function.entryInstruction, attr="call")
                    for exit in called_function.exitInstructions:
                        self.G.add_edge(exit, v, attr="call")
                else:
                    self.calls[v] = v.callTarget

            # Operands.
            for operand in v.operands:
                if isinstance(operand, llvm.graph.ArgInfo) or isinstance(
                    operand, llvm.graph.InstructionInfo
                ):
                    self.G.add_edge(operand, v, attr="data")


class LLVMCDFGCallCompactVisitor(Visitor):
    def __init__(self):
        Visitor.__init__(self)
        self.edge_types = ["control", "data", "mem", "call"]
        self.G = nx.MultiDiGraph()
        self.functions = {}
        self.calls = {}

    def visit(self, v):
        if isinstance(v, llvm.graph.FunctionInfo):
            self.functions[v.name] = v

            # Function root node.
            self.G.add_node(v, attr="function")
            self.G.add_edge(v, v.entryInstruction.basicBlock, attr="call")

            # Function arg nodes.
            for arg in v.args:
                self.G.add_node(arg, attr=(arg.type), label="data")

            # Memory accesses edges.
            for memacc in v.memoryAccesses:
                if memacc.inst:
                    for dep in memacc.dependencies:
                        if dep.inst:
                            self.G.add_edge(dep.inst.basicBlock, memacc.inst.basicBlock, attr="mem")

        if isinstance(v, llvm.graph.BasicBlockInfo):
            # CFG nodes: Inner-BB.
            attr = ' '.join([insn.opcode for insn in v.instructions])
            type_ = ' '.join([insn.type for insn in v.instructions])
            code = ' '.join([insn.code for insn in v.instructions])
            self.G.add_node(v, attr=attr, type=type_, code=code, label="inst")

            # CFG edges: Inter-BB
            for succ in v.successors:
                self.G.add_edge(v, succ.instructions[0].basicBlock, attr="control")

        if isinstance(v, llvm.graph.InstructionInfo):
            # Call edges.
            if v.opcode == "ret":
                self.G.add_edge(v.basicBlock, v.function, attr="call")
            if v.opcode == "call":
                called_function = (
                    self.functions[v.callTarget]
                    if v.callTarget in self.functions
                    else None
                )
                if called_function:
                    self.G.add_edge(v.basicBlock, called_function.entryInstruction.basicBlock, attr="call")
                    for exit in called_function.exitInstructions:
                        self.G.add_edge(exit.basicBlock, v.basicBlock, attr="call")
                else:
                    self.calls[v] = v.callTarget

            # Operands.
            for operand in v.operands:
                if isinstance(operand, llvm.graph.ArgInfo):
                    self.G.add_edge(operand, v.basicBlock, attr="data")
                if isinstance(operand, llvm.graph.InstructionInfo):
                    self.G.add_edge(operand.basicBlock, v.basicBlock, attr="data")


class LLVMCDFGCallCompactSingleVisitor(Visitor):
    """Do not duplicate edges."""
    def __init__(self):
        Visitor.__init__(self)
        self.edge_types = ["control", "data", "mem", "call"]
        self.G = nx.MultiDiGraph()
        self.functions = {}
        self.calls = {}

    def visit(self, v):
        if isinstance(v, llvm.graph.FunctionInfo):
            self.functions[v.name] = v

            # Function root node.
            self.G.add_node(v, attr="function")
            self.G.add_edge(v, v.entryInstruction.basicBlock, attr="call")

            # Function arg nodes.
            for arg in v.args:
                self.G.add_node(arg, attr=(arg.type), label="data")

            # Memory accesses edges.
            for memacc in v.memoryAccesses:
                if memacc.inst:
                    for dep in memacc.dependencies:
                        if dep.inst:
                            if not has_edge(self.G, dep.inst.basicBlock, memacc.inst.basicBlock, "mem"):
                                self.G.add_edge(dep.inst.basicBlock, memacc.inst.basicBlock, attr="mem")

        if isinstance(v, llvm.graph.BasicBlockInfo):
            # CFG nodes: Inner-BB.
            attr = ' '.join([insn.opcode for insn in v.instructions])
            type_ = ' '.join([insn.type for insn in v.instructions])
            code = ' '.join([insn.code for insn in v.instructions])
            self.G.add_node(v, attr=attr, type=type_, code=code, label="inst")

            # CFG edges: Inter-BB
            for succ in v.successors:
                self.G.add_edge(v, succ.instructions[0].basicBlock, attr="control")

        if isinstance(v, llvm.graph.InstructionInfo):
            # Call edges.
            if v.opcode == "ret":
                self.G.add_edge(v.basicBlock, v.function, attr="call")
            if v.opcode == "call":
                called_function = (
                    self.functions[v.callTarget]
                    if v.callTarget in self.functions
                    else None
                )
                if called_function:
                    if not has_edge(self.G, v.basicBlock, called_function.entryInstruction.basicBlock, "call"):
                        self.G.add_edge(v.basicBlock, called_function.entryInstruction.basicBlock, attr="call")
                    for exit in called_function.exitInstructions:
                        if not has_edge(self.G, exit.basicBlock, v.basicBlock, "call"):
                            self.G.add_edge(exit.basicBlock, v.basicBlock, attr="call")
                else:
                    self.calls[v] = v.callTarget

            # Operands.
            for operand in v.operands:
                if isinstance(operand, llvm.graph.ArgInfo):
                     if not has_edge(self.G, operand, v.basicBlock, "data"):
                         self.G.add_edge(operand, v.basicBlock, attr="data")
                if isinstance(operand, llvm.graph.InstructionInfo):
                    if not has_edge(self.G, operand.basicBlock, v.basicBlock, "data"):
                        self.G.add_edge(operand.basicBlock, v.basicBlock, attr="data")


class LLVMCDFGPlusVisitor(Visitor):
    def __init__(self):
        Visitor.__init__(self)
        self.edge_types = ["control", "data", "mem", "call", "bb"]
        self.G = nx.MultiDiGraph()
        self.functions = {}
        self.calls = {}

    def visit(self, v):
        if isinstance(v, llvm.graph.FunctionInfo):
            self.functions[v.name] = v

            # Function root node.
            self.G.add_node(v, attr="function")
            self.G.add_edge(v, v.entryInstruction, attr="control")

            # Function arg nodes.
            for arg in v.args:
                self.G.add_node(arg, attr=(arg.type), label="data")
                self.G.add_edge(v, arg, attr="data")

            # Memory accesses
            for memacc in v.memoryAccesses:
                if memacc.inst:
                    for dep in memacc.dependencies:
                        if dep.inst:
                            self.G.add_edge(dep.inst, memacc.inst, attr="mem")

        if isinstance(v, llvm.graph.BasicBlockInfo):
            # BB nodes
            self.G.add_node(v, attr="bb", label="bb")
            for instr in v.instructions:
                self.G.add_edge(instr, v, attr="bb")
            for succ in v.successors:
                self.G.add_edge(v, succ, attr="bb")

            # CFG edges: Inner-BB.
            instr_prev = v.instructions[0]
            for instr in v.instructions[1:]:
                self.G.add_edge(instr_prev, instr, attr="control")
                instr_prev = instr

            # CFG edges: Inter-BB
            for succ in v.successors:
                self.G.add_edge(v.instructions[-1], succ.instructions[0], attr="control")

        if isinstance(v, llvm.graph.InstructionInfo):
            # Instruction nodes.
            self.G.add_node(v, attr=(v.opcode), type=(v.type), code=(v.code), label="inst")

            # Call edges.
            if v.opcode == "ret":
                self.G.add_edge(v, v.function, attr="call")

            if v.opcode == "call":
                called_function = (
                    self.functions[v.callTarget]
                    if v.callTarget in self.functions
                    else None
                )
                if called_function:
                    self.G.add_edge(v, called_function.entryInstruction, attr="call")
                    for exit in called_function.exitInstructions:
                        self.G.add_edge(exit, v, attr="call")
                else:
                    self.calls[v] = v.callTarget

            # Operands.
            for operand in v.operands:
                if isinstance(operand, llvm.graph.ArgInfo) or isinstance(
                    operand, llvm.graph.InstructionInfo
                ):
                    self.G.add_edge(operand, v, attr="data")


class LLVMProGraMLVisitor(Visitor):
    def __init__(self):
        Visitor.__init__(self)
        self.edge_types = ["control", "data", "call"]
        self.G = nx.MultiDiGraph()
        self.functions = {}
        self.calls = {}

    def visit(self, v):
        if isinstance(v, llvm.graph.FunctionInfo):
            self.functions[v.name] = v

            # Function node.
            self.G.add_node(v, attr="function")
            self.G.add_edge(v, v.entryInstruction, attr="call")

            # Function arg nodes.
            for arg in v.args:
                self.G.add_node(arg, attr=(arg.type), label="var")

        if isinstance(v, llvm.graph.BasicBlockInfo):
            # CFG edges: Inner-BB.
            instr_prev = v.instructions[0]
            for instr in v.instructions[1:]:
                self.G.add_edge(instr_prev, instr, attr="control")
                instr_prev = instr

            # CFG edges: Inter-BB
            for succ in v.successors:
                self.G.add_edge(v.instructions[-1], succ.instructions[0], attr="control")

        if isinstance(v, llvm.graph.InstructionInfo):
            # Instruction nodes.
            self.G.add_node(v, attr=(v.opcode), type=(v.type), code=(v.code), label="inst")

            # Call edges.
            if v.opcode == "ret":
                self.G.add_edge(v, v.function, attr="call")
            if v.opcode == "call":
                called_function = (
                    self.functions[v.callTarget]
                    if v.callTarget in self.functions
                    else None
                )
                if called_function:
                    self.G.add_edge(v, called_function.entryInstruction, attr="call")
                    for exit in called_function.exitInstructions:
                        self.G.add_edge(exit, v, attr="call")
                else:
                    self.calls[v] = v.callTarget

            # Operands.
            """
            for operand in v.operands:
                if isinstance(operand, llvm.graph.ArgInfo) or isinstance(operand, llvm.graph.ConstantInfo):
                    self.G.add_node(operand, attr=(operand.type), label="data")
                    self.G.add_edge(operand, v, attr="data")
                elif isinstance(operand, llvm.graph.InstructionInfo):
                    self.G.add_node((v, operand), attr=(operand.type), label="data")
                    self.G.add_edge(operand, (v, operand), attr="data")
                    self.G.add_edge((v, operand), v, attr="data")
            """
            # Operands.
            for operand in v.operands:
                if isinstance(operand, llvm.graph.ArgInfo) or isinstance(operand, llvm.graph.ConstantInfo):
                    if isinstance(operand, llvm.graph.ConstantInfo): # and operand.value:
                        self.G.add_node(operand, attr=(operand.type), value=(operand.value), label="const")
                    else:
                        self.G.add_node(operand, attr=(operand.type), label="var")
                    self.G.add_edge(operand, v, attr="data")
                elif isinstance(operand, llvm.graph.InstructionInfo):
                    self.G.add_node((v, operand), attr=(operand.type), label="var")
                    self.G.add_edge(operand, (v, operand), attr="data")
                    self.G.add_edge((v, operand), v, attr="data")


class LLVMGraphBuilder(common.RepresentationBuilder):
    def __init__(self, clang_driver=None):
        common.RepresentationBuilder.__init__(self)

        if clang_driver:
            self.__clang_driver = clang_driver
        else:
            self.__clang_driver = ClangDriver(
                ClangDriver.ProgrammingLanguage.LLVM,
                ClangDriver.OptimizationLevel.O0,
                [],
                [],
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
            info = self.__extractor.GraphFromString(src_bytes)
       
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

    def info_to_representation(self, info, visitor=LLVMCDFGVisitor):
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

        if 'calls' in vis.__dict__:
            add_missing_call_edges(vis)

        for (n, data) in vis.G.nodes(data=True):
            attr = data["attr"]
            if attr not in self._attrs:
                self._attrs[attr] = 0
            self._attrs[attr] += 1

        for (n, data) in vis.G.nodes(data=True):
            if not "type" in data:
                continue
            attr = data["type"]
            if attr not in self._types:
                self._types[attr] = 0
            self._types[attr] += 1

        for (n, data) in vis.G.nodes(data=True):
            if not "code" in data:
                continue
            attr = data["code"]
            if attr not in self._codes:
                self._codes[attr] = 0
            self._codes[attr] += 1

        for (n, data) in vis.G.nodes(data=True):
            if not "label" in data:
                continue
            attr = data["label"]
            if attr not in self._labels:
                self._labels[attr] = 0
            self._labels[attr] += 1

        rep = common.Graph(vis.G, self.get_attrs(), vis.edge_types, self.get_labels(), self.get_types(), self.get_codes())
        
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
