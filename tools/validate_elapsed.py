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
import yaml as yl
import numpy as np

from absl import app, flags

from rouxinol.dataset import BenchTest
from rouxinol.environment import LLVMEnvironment
from rouxinol.utility import create_timestamped_directory, get_next_filename

from rouxinol.transformer import LLVMHistogramBuilder, LLVMVisitor
from rouxinol.transformer import X86HistogramBuilder, X86AllSectionsVisitor
from rouxinol.transformer import CFGgrindHistogramBuilder, CFGgrindVisitor, CFGgrindHybridVisitor, CFGgrindDynamicVisitor
from rouxinol.transformer import Inst2VecBuilder, Inst2VecVisitor, Inst2VecPreprocessedVisitor, Inst2VecEmbeddingsVisitor
from rouxinol.transformer import IR2VecBuilder, IR2VecFlowAwareRepresentationVisitor
from rouxinol.transformer import LLVMGraphBuilder, LLVMProGraMLVisitor
from rouxinol.transformer import PerformanceCounterHistogramBuilder, PerformanceCounterVisitor


flags.DEFINE_string("compiler_dir", "", "Compiler directory (absolute path)")
flags.DEFINE_string("c_compiler", "clang", "C Compiler")
flags.DEFINE_string("cxx_compiler", "clang++", "C++ Compiler")
flags.DEFINE_string("optimizer", "opt", "Optimizer")
flags.DEFINE_string("c_flags", "-w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE", "C Flags")
flags.DEFINE_string("cxx_flags", "-w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17", "C++ Flags")
flags.DEFINE_string("output_directory", None, "Data directory (ir, representation, exec, stats, ...)")

flags.DEFINE_integer("timeout", 600, "Timeout in seconds")

flags.DEFINE_boolean("force", False, "Use previous data")
flags.DEFINE_boolean("timestamped", False, "Create a timestamped directory (output_directory/date.time.dir)")

flags.DEFINE_list("events", ["branch-load-misses", "L1-icache-load-misses", "iTLB-loads", "branch-loads", "branch-instructions", "branch-misses", "faults", "dTLB-stores", "cycles", "dTLB-loads", "instructions", "dTLB-load-misses", "cache-references", "LLC-stores", "LLC-store-misses", "L1-dcache-stores", "iTLB-load-misses", "LLC-loads", "L1-dcache-loads", "L1-dcache-load-misses", "dTLB-store-misses", "LLC-load-misses", "cache-misses"], "Perf events.")  

flags.mark_flag_as_required("output_directory")

FLAGS = flags.FLAGS


def process_string(file_path):  
	"""  
	Extracts and returns the components XXX, KKK, VVV, and EXT from the given file path.  

	:param file_path: str, The input string in the format /.../XXX_KKK_VVV.EXT  
	:return: dict, A dictionary with keys 'benchmark', 'problem', 'sample', and 'extension'.  
	"""  
	# Extract the file name from the full path  
	file_name = os.path.basename(file_path)  

	# Split the file name into the part before and after the dot  
	name_part, ext = os.path.splitext(file_name)  

	# Split `name_part` by underscores to extract XXX, KKK, and VVV  
	try:  
	    benchmark, problem, sample = name_part.split('_')  
	except ValueError:  
	    raise ValueError("The file name does not follow the required format 'XXX_KKK_VVV.EXT'")  

	# Remove the leading dot from the extension  
	extension = ext[1:]  

	return benchmark, problem, sample, extension  


def main(argv):
	"""Source -> LLVM."""
	del argv

	# Dataset
	dataset = BenchTest()

	# Data dir
	if FLAGS.timestamped:
		output_directory = create_timestamped_directory(FLAGS.output_directory)
	else:
		output_directory = FLAGS.output_directory

	stats_directory = os.path.join(output_directory, "statistics")
	os.makedirs(stats_directory, exist_ok=True)

	# Prepare compiler arguments
	compiler_config = {
		"compiler_dir": FLAGS.compiler_dir,
		"c_compiler": FLAGS.c_compiler,
		"cxx_compiler": FLAGS.cxx_compiler,
		"optimizer": FLAGS.optimizer,
		"c_flags": FLAGS.c_flags,
		"cxx_flags": FLAGS.cxx_flags
	}

	# Builder and Visitor
	b_and_v = {
		"llvmHistogram": (LLVMHistogramBuilder, LLVMVisitor),
		"x86Histogram": (X86HistogramBuilder, X86AllSectionsVisitor),
		"cfggrindHybridHistogram": (CFGgrindHistogramBuilder, CFGgrindHybridVisitor),
		"cfggrindDynamicHistogram": (CFGgrindHistogramBuilder, CFGgrindDynamicVisitor),
		"ir2vec": (IR2VecBuilder, IR2VecFlowAwareRepresentationVisitor),
		"performanceCounterHistogram": (PerformanceCounterHistogramBuilder, PerformanceCounterVisitor)
	}

	# Preprocess
	samples, elapsed_ir, elapsed_exec = dataset.preprocess(
											compiler_config=compiler_config,
											timeout=FLAGS.timeout,
											output_directory=output_directory,
											force=FLAGS.force
	)

    # Store time
	filename = os.path.join(stats_directory, "time_ir.yml")
	with open(os.path.join(stats_directory, filename), "w") as fout:
		yl.dump(elapsed_ir, fout)

	filename = os.path.join(stats_directory, "time_exec.yml")
	with open(os.path.join(stats_directory, filename), "w") as fout:
		yl.dump(elapsed_exec, fout)

	# Extract representations
	for rep_name, (builder_class, visitor) in b_and_v.items():
		builder = builder_class()

		elapsed_rep = {}

		for problem, solutions in samples.items():
				
			os.makedirs(os.path.join(FLAGS.output_directory, problem, rep_name), exist_ok=True)

			for solution in solutions:

				benchmark, problem, sample, extension = process_string(solution)
			
				if not benchmark in elapsed_rep:
					elapsed_rep[benchmark] = {}

				if benchmark == "OpenJudge":
					workload = f"{benchmark}_{problem}_input.txt"
					stdin_filename = os.path.join(dataset.get_content_dir(), benchmark, workload)
				elif benchmark == "CSES":
					workload = f"{benchmark}_{problem}_entry1.txt"
					stdin_filename = os.path.join(dataset.get_content_dir(), benchmark, workload)
				else:
					stdin_filename = ""

				if rep_name == "llvmHistogram":
					in_filename = os.path.join(FLAGS.output_directory, benchmark, "exec", f"{benchmark}_{problem}_{sample}.ll")
				else:
					in_filename = os.path.join(FLAGS.output_directory, benchmark, "ir", f"{benchmark}_{problem}_{sample}")

				info = builder.string_to_info(
					in_filename,
					stdin_filename=stdin_filename,
					timeout=FLAGS.timeout,
					events=FLAGS.events
				)

				embeddings = builder.info_to_representation(
					info,
					visitor=visitor
				)

				with open(os.path.join(FLAGS.output_directory, benchmark, rep_name, f"{benchmark}_{problem}_{sample}.yml"), "w") as fout:
					yl.dump(embeddings, fout)

				elapsed_rep[benchmark][f"{benchmark}_{problem}_{sample}"] = builder.get_runtime()

		filename = os.path.join(stats_directory, f"time_rep_{rep_name}.yml")
		with open(os.path.join(stats_directory, filename), "w") as fout:
			yl.dump(elapsed_rep, fout)


# Execute
if __name__ == "__main__":
    # app
    app.run(main)

