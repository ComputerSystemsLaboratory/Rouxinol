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
import time
import lief
import resource

from absl import logging

from capstone import *
from collections import Counter

from rouxinol.transformer import ClangDriver
from rouxinol.transformer import LLVMCFGVisitor
from rouxinol.transformer import LLVMGraphBuilder
from rouxinol.third_party.compy_learn import common


class X86AllSectionsVisitor():
    def __init__(
        self
    ):
        pass


class X86ExecutableSectionsVisitor():
    def __init__(
        self
    ):
        pass

class X86HistogramBuilder(common.RepresentationBuilder):
    """Extract histogram.
    """

    def __init__(
        self
    ):
        common.RepresentationBuilder.__init__(self)
        self.__src_type = "EXEC"
    
    def get_src_type(
        self
    ):
        return self.__src_type

    def _extract_instruction_histogram(
        self,
        executable_path, 
        executable_only=True
    ):  
        """  
        Extracts x86 instructions from an executable file and creates a histogram.  

        Args:  
            executable_path (str): The path to the executable file.  
            executable_only (bool): Flag to indicate from which sections to extract the histogram.  
                - True: Extract from executable sections only.  
                - False: Extract from all sections.  

        Returns:  
            dict: A dictionary containing the histogram of x86 instructions.  
        """  
        
        # Load the binary file using LIEF  
        binary = lief.parse(executable_path)  
        if not binary:  
            #raise ValueError("Failed to parse the executable. Ensure the file exists and is a valid executable.")  
            return None

        # Determine architecture  
        if binary.format == lief.EXE_FORMATS.ELF:  
            if binary.header.machine_type == lief.ELF.ARCH.x86_64:  
                cs_mode = CS_MODE_64  
            elif binary.header.machine_type == lief.ELF.ARCH.i386:  
                cs_mode = CS_MODE_32  
            else:  
                raise ValueError("Unsupported ELF architecture.")  
        elif binary.format == lief.EXE_FORMATS.PE:  
            if binary.header.machine == lief.PE.MACHINE_TYPES.AMD64:  
                cs_mode = CS_MODE_64  
            elif binary.header.machine == lief.PE.MACHINE_TYPES.I386:  
                cs_mode = CS_MODE_32  
            else:  
                raise ValueError("Unsupported PE architecture.")  
        elif binary.format == lief.EXE_FORMATS.MACHO:  
            if binary.header.cpu_type == lief.MachO.CPU_TYPES.X86_64:  
                cs_mode = CS_MODE_64  
            elif binary.header.cpu_type == lief.MachO.CPU_TYPES.I386:  
                cs_mode = CS_MODE_32  
            else:  
                raise ValueError("Unsupported Mach-O architecture.")  
        else:  
            raise ValueError("Unsupported executable format.")  

        # Initialize Capstone disassembler  
        md = Cs(CS_ARCH_X86, cs_mode)  
        md.detail = False  # We only need the instruction mnemonic  

        # Select sections to disassemble
        if executable_only:  
            if binary.format == lief.EXE_FORMATS.ELF:  
                sections = [s for s in binary.sections if s.has(lief.ELF.SECTION_FLAGS.EXECINSTR)]  
            elif binary.format == lief.EXE_FORMATS.PE:  
                sections = [s for s in binary.sections if s.characteristics & lief.PE.SECTION_CHARACTERISTICS.MEM_EXECUTE]  
            elif binary.format == lief.EXE_FORMATS.MACHO:  
                sections = [s for s in binary.sections if s.is_executable]  
        else:  
            sections = binary.sections  

        instructions = []  

        for section in sections:  
            # Ensure the section contains data to disassemble  
            if section.size > 0:  
                code = section.content  
                address = section.virtual_address  
                # Disassemble the code in the section  
                for insn in md.disasm(bytes(code), address):  
                    instructions.append(insn.mnemonic)  

        # Create a histogram of the instructions  
        histogram = dict(Counter(instructions))  

        return histogram

    def string_to_info(
        self,
        src,
        *args,
        **kwargs
    ):
        return src
 
    def info_to_representation(
        self,
        info,
        visitor=X86AllSectionsVisitor
    ):
        # Start timing
        runtime = {
            'elapsed_time': 0.0,
            'user_time': 0.0,
            'system_time': 0.0,
            'cpu_time': 0.0
        }

        # Start timing
        start_time = time.perf_counter()
        start_usage = resource.getrusage(resource.RUSAGE_CHILDREN)

        if visitor.__name__ == X86AllSectionsVisitor.__name__:
            executable_only = False
        elif visitor.__name__ == X86ExecutableSectionsVisitor.__name__:
            executable_only = True

        histogram = self._extract_instruction_histogram(
                            info,
                            executable_only
                    )
        
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
        
        return histogram