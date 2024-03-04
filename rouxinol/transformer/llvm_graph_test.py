"""
Rouxinol an infrastructure to explore code generation and machine learning models.
Copyright (C) 2023 Anderson Faustino da Silva

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <https://www.gnu.org/licenses/>.
"""

import os
import sys
import pytest
import yaml as yl

from absl import logging

from rouxinol.environment import LLVMEnvironment
from rouxinol.transformer import CFGGraph
from rouxinol.transformer import CFGCallGraph
from rouxinol.transformer import CFGCompactGraph
from rouxinol.transformer import CFGCallCompactGraph
from rouxinol.transformer import CDFGGraph
from rouxinol.transformer import CDFGCallGraph
from rouxinol.transformer import CDFGCompactGraph
from rouxinol.transformer import CDFGCallCompactGraph
from rouxinol.transformer import CDFGPlusGraph
from rouxinol.transformer import ProGraMLGraph

program_fib = """
int fib(int x) {
    switch(x) {
        case 0:
            return 0;
        case 1:
            return 1;
        default:
            return fib(x-1) + fib(x-2);
    }
}
int main(){
 int a = fib(10);
 return 0;
}
"""

filename = os.path.join("/tmp", "program_fib.c")
with open(filename, "w") as fout:
    fout.write(program_fib)

config = {
    "absolute_path": "/usr/bin",
    "compiler": {"c": "clang", "cxx": "clang++"},
    "optimizer": "opt"
}

env = LLVMEnvironment(config)

def test_cfg_graph():
    transformer = CFGGraph()
    graph = transformer.from_src(filename, env=env)
    assert graph.get_node_list() == [0, 0, 1, 2, 3, 2, 1, 1, 4, 2, 4, 5, 6, 2, 5, 6, 7, 1, 4, 8, 0, 0, 1, 6, 1, 8]

def test_cfg_call_graph():
    transformer = CFGCallGraph()
    graph = transformer.from_src(filename, env=env)
    assert graph.get_node_list() == [0, 1, 1, 2, 3, 4, 3, 2, 2, 5, 3, 5, 6, 7, 3, 6, 7, 8, 2, 5, 9, 0, 1, 1, 2, 7, 2, 9]

def test_cfg_compact_graph():
    transformer = CFGCompactGraph()
    graph = transformer.from_src(filename, env=env)
    assert graph.get_node_list() == [0, 1, 2, 2, 3, 4]

def test_cfg_call_compact_graph():
    transformer = CFGCallCompactGraph()
    graph = transformer.from_src(filename, env=env)
    assert graph.get_node_list() == [0, 1, 2, 3, 3, 4, 0, 5]

def test_cdfg_graph():
    transformer = CDFGGraph()
    graph = transformer.from_src(filename, env=env)
    assert graph.get_node_list() == [0, 1, 2, 1, 1, 2, 3, 2, 3, 1, 4, 4, 5, 6, 2, 6, 7, 7, 8, 6, 9, 1, 3, 1, 4, 4, 9]

def test_cdfg_call_graph():
    transformer = CDFGCallGraph()
    graph = transformer.from_src(filename, env=env)
    assert graph.get_node_list() == [0, 1, 2, 3, 4, 3, 3, 4, 5, 4, 5, 3, 1, 6, 7, 4, 7, 8, 8, 9, 7, 10, 0, 1, 3, 5, 3, 1, 10]

def test_cdfg_compact_graph():
    transformer = CDFGCompactGraph()
    graph = transformer.from_src(filename, env=env)
    assert graph.get_node_list() == [0, 1, 2, 2, 3, 4, 5]

def test_cdfg_call_compact_graph():
    transformer = CDFGCallCompactGraph()
    graph = transformer.from_src(filename, env=env)
    assert graph.get_node_list() == [0, 1, 2, 3, 3, 4, 5, 0, 6]

def test_cdfg_plus_graph():
    transformer = CDFGPlusGraph()
    graph = transformer.from_src(filename, env=env)
    assert graph.get_node_list() == [0, 1, 2, 3, 4, 3, 3, 4, 5, 4, 5, 3, 6, 1, 7, 6, 6, 6, 8, 6, 4, 8, 9, 9, 10, 8, 11, 0, 1, 3, 5, 3, 6, 1, 11]

def test_programl_graph():
    transformer = ProGraMLGraph()
    graph = transformer.from_src(filename, env=env)
    graph.get_node_list() == [0, 1, 2, 1, 3, 4, 5, 4, 3, 3, 2, 6, 6, 2, 2, 7, 4, 6, 7, 6, 8, 9, 4, 8, 9, 10, 3, 7, 6, 2, 11, 2, 12, 6, 2, 2, 2, 2, 2, 2, 6, 6, 2, 0, 1, 1, 3, 9, 3, 11, 6, 2, 2, 6]
