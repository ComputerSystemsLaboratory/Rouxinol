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
from rouxinol.transformer import CFGgrindCFGGraph
from rouxinol.transformer import CFGgrindCFGCallGraph
from rouxinol.transformer import CFGgrindCFGCompactGraph
from rouxinol.transformer import CFGgrindCFGCallCompactGraph


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
    transformer = CFGgrindCFGGraph()
    graph = transformer.from_src(filename, env=env)
    assert graph.get_node_list() == [0, 1, 2, 3, 4, 3, 3, 5, 3, 6, 7, 8, 8, 3, 3, 4, 6, 7, 8, 3, 9, 3, 8, 3, 4, 3, 10, 3, 9, 11, 12, 4, 3, 3, 10, 0, 1, 2, 3, 4, 7, 3, 10, 13, 3, 3, 9, 11, 12]

def test_cfg_call_graph():
    transformer = CFGgrindCFGCallGraph()
    graph = transformer.from_src(filename, env=env)
    assert graph.get_node_list() == [0, 1, 2, 3, 4, 3, 3, 5, 3, 6, 7, 8, 8, 3, 3, 4, 6, 7, 8, 3, 9, 3, 8, 3, 4, 3, 10, 3, 9, 11, 12, 4, 3, 3, 10, 0, 1, 2, 3, 4, 7, 3, 10, 13, 3, 3, 9, 11, 12]

def test_cfg_compact_graph():
    transformer = CFGgrindCFGCompactGraph()
    graph = transformer.from_src(filename, env=env)
    assert graph.get_node_list() == [0, 1, 2, 3, 4, 5, 3, 6, 7, 8, 9, 0, 1, 10, 11]

def test_cfg_call_compact_graph():
    transformer = CFGgrindCFGCallCompactGraph()
    graph = transformer.from_src(filename, env=env)
    assert graph.get_node_list() == [0, 1, 2, 3, 4, 5, 3, 6, 7, 8, 9, 0, 1, 10, 11]

