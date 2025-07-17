"""
SAMOS 2025 Artifact
Copyright (C) 2025 Anderson Faustino da Silva

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

from absl import app, flags, logging

from rouxinol.dataset import PRIM
from rouxinol.utility import create_timestamped_directory, get_next_filename

from rouxinol.transformer import LLVMHistogramBuilder, LLVMVisitor
from rouxinol.transformer import X86HistogramBuilder, X86AllSectionsVisitor
from rouxinol.transformer import IR2VecBuilder, IR2VecFlowAwareRepresentationVisitor


flags.DEFINE_string(
	'passes_filename', 
	default=None, 
	help='Passes filename (yaml dictionary)',
    short_name='p'
)

flags.DEFINE_string(
	'output_directory', 
	default=None, 
	help='Data directory (representation, stats, ...)',
    short_name='o'
)

flags.DEFINE_list(
	'benchmarks', 
	default=None, 
	help='Benchmarks',
    short_name='b'
)

flags.DEFINE_list(
	'tasklets', 
	default=[1, 2, 4, 8 , 16], 
	help='Tasklets',
    short_name='t'
)

flags.DEFINE_list(
	'dpus', 
	default=[1, 2, 4, 8 , 16], 
	help='DPUs',
    short_name='d'
)

flags.DEFINE_boolean(
	'force', 
	default=False, 
	help='Always compile',
    short_name='f'
)

flags.DEFINE_boolean(
	'timestamped', 
	default=False, 
	help='Create a timestamped directory (output_directory/date.time.dir)',
    short_name='s'
)

flags.DEFINE_enum(
	'representation', 
	default='llvmHistogram', 
	enum_values=['llvmHistogram', 'ir2vec'], 
	help='Representation to extract',
    short_name='r'
)

flags.mark_flag_as_required('benchmarks')
flags.mark_flag_as_required('passes_filename')
flags.mark_flag_as_required('output_directory')

FLAGS = flags.FLAGS


def main(argv):
	"""Source -> LLVM."""
	del argv

	# Verify UPMEM
	if not os.environ.get("UPMEM_HOME"):
		logging.error("UPMEM_HOME is not set.")
		sys.exit(1)

	# Verify sequences file
	if not os.path.isfile(FLAGS.passes_filename):
		logging.error("Sequences file does not exist.")
		sys.exit(1)

    # Dataset
	dataset = PRIM()

    # Data dir
	if FLAGS.timestamped:
		output_directory = create_timestamped_directory(FLAGS.output_directory)
	else:
		output_directory = FLAGS.output_directory

	# Statistics
	stats_directory = os.path.join(output_directory, "statistics")
	os.makedirs(stats_directory, exist_ok=True)

    # Passes
	with open(FLAGS.passes_filename, "r") as fin:
		passes = yl.safe_load(fin)

	# Builder and Visitor
	b_and_v = {
		"llvmHistogram": (LLVMHistogramBuilder, LLVMVisitor),
		"x86Histogram": (X86HistogramBuilder, X86AllSectionsVisitor),
		"ir2vec": (IR2VecBuilder, IR2VecFlowAwareRepresentationVisitor)
	}

	builder_class, visitor = b_and_v[FLAGS.representation]
	builder = builder_class()

	# Preprocess
	data, elapsed_comp, elapsed_repr = dataset.preprocess(
												builder=builder,
												visitor=visitor,
												benchmarks=FLAGS.benchmarks,
												passes=passes,
												tasklets=FLAGS.tasklets,
												dpus=FLAGS.dpus
										)

    # Store the representation
	for data_info in data:
		benchmark = data_info["info"]["benchmark"]
		cos = data_info["info"]["cos"]
		tasklets =  data_info["info"]["tasklets"]
		dpus = data_info["info"]["dpus"]
		embeddings = data_info["x"]

		os.makedirs(os.path.join(output_directory, benchmark, FLAGS.representation), exist_ok=True)
		with open(os.path.join(output_directory, benchmark, FLAGS.representation, f"cos_{cos}_tasklets_{tasklets}_dpus_{dpus}.yml"), "w") as fout:
			yl.dump(embeddings, fout)

	# Store the statistics
	comp_filename = get_next_filename(
		os.path.join(stats_directory, f"elapsed_c_{FLAGS.representation}"),
		"yml"
	)
	repr_filename = get_next_filename(
		os.path.join(stats_directory, f"elapsed_r_{FLAGS.representation}"),
		"yml"
	)

	with open(comp_filename, "w") as fout:
		yl.dump(elapsed_comp, fout)
	with open(repr_filename, "w") as fout:
		yl.dump(elapsed_repr, fout)


# Execute
if __name__ == "__main__":
	# app
	app.run(main)

