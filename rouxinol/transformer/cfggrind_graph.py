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


def opcode(
        code
    ):
    idx = code.find(" ")
    return code[:idx]


def call_name(
        code
    ):
    idx1 = code.find("<")
    idx2 = code.find(">")
    return code[idx1+1:idx2]


class CFGgrindCFGVisitor():
    def __init__(
        self
    ):
        self.edge_types = ["cfg"]
        self.G = nx.MultiDiGraph()

    def build(
            self,
            cfg_dict,
            map_dict
        ):
        for function_name, function_data in cfg_dict.items():
            self.G.add_node(f"ep_{function_name}", attr="entry_point")
            self.G.add_node(f"xp_{function_name}", attr="exit_point")
            self.G.add_edge(f"ep_{function_name}", function_data[0][0], attr="cfg")

            for node, node_size, instructions, succs in function_data:
                code = map_dict[node]
                attr = opcode(map_dict[node])
                addr = node

                self.G.add_node(node, attr=attr, code=code)
                previous_node = node

                for idx in range(len(instructions)-1):
                    code = map_dict[addr + instructions[idx]]
                    attr = opcode(map_dict[addr + instructions[idx]])
                    addr += instructions[idx]

                    self.G.add_node(addr, attr=attr, code=code)
                    self.G.add_edge(previous_node, addr, attr="cfg")

                    previous_node = addr

                for succ in succs:
                    if succ == 11111:
                        self.G.add_edge(previous_node, f"xp_{function_name}", attr="cfg")
                    else:
                        self.G.add_edge(previous_node, succ, attr="cfg")


class CFGgrindCFGCallVisitor():
    def __init__(
        self
    ):
        self.edge_types = ["cfg", "call"]
        self.G = nx.MultiDiGraph()
        self.calls = {}

    def build(
            self,
            cfg_dict,
            map_dict
        ):
        for function_name, function_data in cfg_dict.items():
            self.G.add_node(f"ep_{function_name}", attr="entry_point")
            self.G.add_node(f"xp_{function_name}", attr="exit_point")
            self.G.add_edge(f"ep_{function_name}", function_data[0][0], attr="cfg")

            self.calls[f"{function_name}"] = (f"ep_{function_name}", f"xp_{function_name}")

            for node, node_size, instructions, succs in function_data:
                code = map_dict[node]
                attr = opcode(map_dict[node])
                addr = node

                self.G.add_node(node, attr=attr, code=code)
                previous_node = node

                for idx in range(len(instructions)-1):
                    code = map_dict[addr + instructions[idx]]
                    attr = opcode(map_dict[addr + instructions[idx]])
                    addr += instructions[idx]

                    self.G.add_node(addr, attr=attr, code=code)
                    self.G.add_edge(previous_node, addr, attr="cfg")

                    previous_node = addr

                for succ in succs:
                    if succ == 11111:
                        self.G.add_edge(previous_node, f"xp_{function_name}", attr="cfg")
                    else:
                        self.G.add_edge(previous_node, succ, attr="cfg")

                if attr == "callq":
                    callq_name = call_name(code)
                    if not callq_name in self.calls:
                        continue
                    self.G.add_edge(addr, self.calls[callq_name][0], attr="call")
                    self.G.add_edge(self.calls[callq_name][1], addr, attr="call")


class CFGgrindCFGCompactVisitor():
    def __init__(
        self
    ):
        self.edge_types = ["cfg"]
        self.G = nx.MultiDiGraph()

    def build(
            self,
            cfg_dict,
            map_dict
        ):
        for function_name, function_data in cfg_dict.items():
            self.G.add_node(f"ep_{function_name}", attr="entry_point")
            self.G.add_node(f"xp_{function_name}", attr="exit_point")
            self.G.add_edge(f"ep_{function_name}", function_data[0][0], attr="cfg")

            for node, node_size, instructions, succs in function_data:
                code = map_dict[node]
                attr = opcode(map_dict[node])
                addr = node

                for idx in range(len(instructions)-1):
                    code += " " + map_dict[addr + instructions[idx]]
                    attr += " " + opcode(map_dict[addr + instructions[idx]])
                    addr += instructions[idx]

                self.G.add_node(node, attr=attr, code=code)

                for succ in succs:
                    if succ == 11111:
                        self.G.add_edge(node, f"xp_{function_name}", attr="cfg")
                    else:
                        self.G.add_edge(node, succ, attr="cfg")


class CFGgrindCFGCallCompactVisitor():
    def __init__(
        self
    ):
        self.edge_types = ["cfg", "call"]
        self.G = nx.MultiDiGraph()
        self.calls = {}

    def build(
            self,
            cfg_dict,
            map_dict
        ):
        for function_name, function_data in cfg_dict.items():
            self.G.add_node(f"ep_{function_name}", attr="entry_point")
            self.G.add_node(f"xp_{function_name}", attr="exit_point")
            self.G.add_edge(f"ep_{function_name}", function_data[0][0], attr="cfg")
            self.calls[f"{function_name}"] = (f"ep_{function_name}", f"xp_{function_name}")

            for node, node_size, instructions, succs in function_data:
                code = map_dict[node]
                attr = opcode(map_dict[node])
                addr = node

                for idx in range(len(instructions)-1):
                    code += " " + map_dict[addr + instructions[idx]]
                    attr += " " + opcode(map_dict[addr + instructions[idx]])
                    addr += instructions[idx]

                self.G.add_node(node, attr=attr, code=code)

                for succ in succs:
                    if succ == 11111:
                        self.G.add_edge(node, f"xp_{function_name}", attr="cfg")
                    else:
                        self.G.add_edge(node, succ, attr="cfg")

                if attr.endswith("callq"):
                    callq_name = call_name(code)
                    if not callq_name in self.calls:
                        continue
                    self.G.add_edge(node, self.calls[callq_name][0], attr="call")
                    self.G.add_edge(self.calls[callq_name][1], node, attr="call")


class CFGgrindGraphBuilder(common.RepresentationBuilder):
    """Invoke CFGgrind to extract graphs.
    """

    def __init__(
        self
    ):
        common.RepresentationBuilder.__init__(self)

    def _is_cfg_data(
            self,
            exec_filename,
            data
        ):
        substring = f"{exec_filename}::"
        if not (("[cfg" in data) and (substring in data)):
            return False

        idx = data.find(substring)
        next_char = data[idx + len(substring)] 
        if next_char in ["(", "_"]:
            return False

        return True

    def _cfg_data_to_tuple(
            self,
            data
        ):
        clean_data = data[1:-2]
        clean_data = clean_data.replace("[", "initial ")
        clean_data = clean_data.replace("]", " final")
        items = clean_data.split(" ")

        node = int(items[2], 16)
        node_size = int(items[3])
        instructions = [int(items[i]) for i in range(items.index("initial")+1, items.index("final"))]

        initial = -1
        for i in range(len(items)-1, 0, -1):
            if items[i] == "initial":
                initial = i
                break

        succs = []
        for i in range(initial+1, len(items)-1):
            idx = items[i].find(":")
            succ = 11111 if items[i][:idx] == "exit" else int(items[i][:idx], 16)
            succs.append(succ)
        return (node, node_size, instructions, succs)

    def _cfg_to_dict(
            self,
            exec_filename,
            cfg_filename
        ):
        cfg_dict = {}
        with open(cfg_filename, "r") as f:
            cfg_data = f.readlines()

        num_line = 3
        max_num_line = len(cfg_data)
        create_tuple =False
        while True:
            if self._is_cfg_data(exec_filename, cfg_data[num_line]):
                idx_i = cfg_data[num_line].find("::")
                idx_j = cfg_data[num_line].find("(")
                function_name = cfg_data[num_line][idx_i+2:idx_j]
                cfg_dict[function_name] = []
                while True:
                    num_line += 1

                    if num_line == max_num_line:
                        break

                    if not "[node" in cfg_data[num_line]:
                        break

                    cfg_dict[function_name].append(self._cfg_data_to_tuple(cfg_data[num_line]))

            num_line += 1
            if num_line == max_num_line:
                break

        return cfg_dict

    def _map_to_dict(
            self,
            map_filename
        ):
        map_dict = {}
        with open(map_filename, "r") as f:
            map_data = f.readlines()

        for data in map_data:
            items = data.replace("\n", "").split(":")
            map_dict[int(items[0], 16)] = items[2]
        return map_dict

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

    def info_to_representation(
        self,
        visitor=CFGgrindCFGCallVisitor
    ):
        cfg_dict = self._cfg_to_dict(
                        self.cfggrind.exec_filename,
                        self.cfggrind.cfg_filename
                    )
        map_dict = self._map_to_dict(
                        self.cfggrind.map_filename
                    )
        vis = visitor()
        vis.build(
                cfg_dict,
                map_dict
            )

        for (n, data) in vis.G.nodes(data=True):
            attr = data["attr"]
            if attr not in self._tokens:
                self._tokens[attr] = 0
            self._tokens[attr] += 1

        return common.Graph(vis.G, self.get_tokens(), vis.edge_types)
