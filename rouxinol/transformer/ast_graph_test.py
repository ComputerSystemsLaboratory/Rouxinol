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

from rouxinol.transformer import ASTDataCFGGraph
from rouxinol.transformer import ASTDataCFGTokenGraph
from rouxinol.transformer import ASTDataGraph
from rouxinol.transformer import ASTGraph

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

def test_ast_graph():
    transformer = ASTGraph()
    graph = transformer.from_src(filename)
    assert graph.get_node_list() == [0, 1, 2, 3, 4, 2, 5, 6, 6, 7, 8, 9, 10, 10, 8, 9, 10, 10, 9, 11, 12, 12, 4, 11, 5, 4, 10, 5, 4, 11, 5, 4, 10, 5, 0, 2, 13, 9, 12, 14, 4, 10, 5, 10]

def test_ast_data_graph():
    transformer = ASTDataGraph()
    graph = transformer.from_src(filename)
    assert graph.get_node_list() == [0, 1, 2, 3, 4, 2, 5, 6, 6, 7, 8, 9, 10, 10, 8, 9, 10, 10, 9, 11, 12, 12, 4, 11, 5, 13, 4, 10, 5, 4, 11, 5, 4, 10, 5, 0, 2, 14, 9, 12, 15, 4, 10, 5, 10]

def test_ast_data_cfg_graph():
    transformer = ASTDataCFGGraph()
    graph = transformer.from_src(filename)
    assert graph.get_node_list() == [0, 1, 2, 3, 3, 3, 3, 3, 4, 5, 6, 6, 7, 8, 9, 8, 9, 8, 3, 2, 10, 11, 11, 12, 13, 9, 13, 9, 4, 7, 10, 14, 4, 9, 10, 4, 7, 10, 4, 9, 10, 0, 2, 3, 3, 6, 15, 9, 8, 3, 16, 4, 9, 10]

def test_ast_data_cfg_token_graph():
    transformer = ASTDataCFGTokenGraph()
    graph = transformer.from_src(filename)
    assert graph.get_node_list() == [0, 1, 2, 3, 3, 3, 3, 3, 4, 5, 6, 6, 7, 8, 9, 8, 9, 8, 3, 10, 11, 12, 10, 13, 14, 15, 16, 2, 17, 12, 14, 18, 13, 19, 19, 20, 15, 21, 21, 21, 16, 22, 23, 24, 9, 25, 26, 25, 22, 23, 24, 9, 27, 26, 27, 28, 24, 26, 29, 4, 7, 12, 14, 18, 30, 11, 4, 9, 31, 18, 13, 27, 4, 7, 12, 14, 18, 11, 4, 9, 31, 18, 13, 32, 0, 2, 3, 3, 6, 33, 9, 8, 3, 10, 34, 12, 14, 15, 21, 16, 35, 10, 35, 36, 21, 4, 9, 12, 14, 18, 11, 37, 26, 25]
