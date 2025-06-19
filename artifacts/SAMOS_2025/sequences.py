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

import sys
import yaml as yl

from absl import app, flags

from rouxinol.utility import create_random_sequences_v2


flags.DEFINE_integer("nof_sequences", 1000, "Nnumber of sequences")
flags.DEFINE_integer("minimum", 10, "Minimum length of the sequence")
flags.DEFINE_integer("maximum", 100, "Maximum length of the sequence")
flags.DEFINE_integer("factor", 1, "nof_sequences *= factor")

flags.DEFINE_boolean("ssa", False, "-mem2reg is the first pass")
flags.DEFINE_boolean("shuffle", False, "Shuffle the passes")
flags.DEFINE_boolean("update", False, "Update the sequence")
flags.DEFINE_boolean("repetition", False, "Enable repetition")
flags.DEFINE_boolean("original", False, "Preserve the original sequence")

flags.DEFINE_string("passes_filename", None, "Passes filename (yaml dictionary)")
flags.DEFINE_string("level", "O3", "Compiler optimization level")

flags.mark_flag_as_required("passes_filename")

FLAGS = flags.FLAGS


def main(argv):
    """Source -> LLVM."""
    del argv

    with open(FLAGS.passes_filename, "r") as fin:
        data = yl.safe_load(fin)

    passes = data[FLAGS.level]

    sequences = create_random_sequences_v2(
                    FLAGS.nof_sequences,
                    FLAGS.minimum,
                    FLAGS.maximum,
                    FLAGS.factor,
                    FLAGS.ssa,
                    FLAGS.shuffle,
                    FLAGS.update,
                    FLAGS.repetition,
                    FLAGS.original,
                    passes
                )

    sequences[len(sequences)] = "-O0"
    sequences[len(sequences)] = "-O1"
    sequences[len(sequences)] = "-O2"
    sequences[len(sequences)] = "-O3"

    with open("sequences.yml", "w") as fout:
        yl.dump(sequences, fout)

    with open("sequences.txt", "w") as fout:
        for _, seq in sequences.items():
            fout.write(" ".join(seq) + "\n")


# Execute
if __name__ == "__main__":
    # app
    app.run(main)