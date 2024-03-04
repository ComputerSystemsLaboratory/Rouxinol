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
from rouxinol.transformer import LLVMInstCount
from rouxinol.transformer import CFGgrindStaticInstCount
from rouxinol.transformer import CFGgrindDynamicInstCount


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

def test_llvm_inst_count():
    transformer = LLVMInstCount()
    histogram = transformer.from_src(filename, env=env)
    assert histogram["alloca"] == 4

def test_cfggrind_static_inst_count():
    transformer = CFGgrindStaticInstCount()
    histogram = transformer.from_src(filename, env=env)
    assert histogram["mov"] == 33

def test_cfggrind_dynamic_inst_count():
    transformer = CFGgrindDynamicInstCount()
    histogram = transformer.from_src(filename, env=env)
    assert histogram["mov"] == 1664

