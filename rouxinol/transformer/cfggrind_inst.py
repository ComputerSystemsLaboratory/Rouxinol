"""
Copyright 2023 Anderson Faustino da Silva.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
"""

import os
import json
import shutil
import subprocess
import networkx as nx

from absl import logging

from rouxinol.transformer.cfggrind import CFGgrind
from rouxinol.third_party.compy_learn import common


class CFGgrindStaticInstVisitor():
    def __init__(
        self
    ):
        pass


class CFGgrindDynamicInstVisitor():
    def __init__(
        self
    ):
        pass


class CFGgrindInstBuilder(common.RepresentationBuilder):
    """Invoke CFGgrind to extract histograms.
    """

    def __init__(
        self
    ):
        common.RepresentationBuilder.__init__(self)

    def string_to_info(
        self,
        exec_filename,
        input_data,
        function_only,
        timeout
    ):
        cfggrind = CFGgrind(
                        exec_filename,
                        input_data,
                        function_only,
                        timeout
                    )
        cfggrind.asmmap()
        cfggrind.cfg()
        self.static, self.dynamic = cfggrind.histogram()

    def info_to_representation(
        self,
        visitor=CFGgrindStaticInstVisitor
    ):
        vis = visitor()

        if not (self.static and self.dynamic):
            return None

        if isinstance(vis, CFGgrindStaticInstVisitor):
            data = self.static
        elif isinstance(vis, CFGgrindDynamicInstVisitor):
            data = self.dynamic

        for op, val in data.items():
            if op not in self._tokens:
                self._tokens[op] = 0
            self._tokens[op] = val

        return data
