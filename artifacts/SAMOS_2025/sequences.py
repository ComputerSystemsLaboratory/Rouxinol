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


flags.DEFINE_integer(
    'nof_sequences', 
    default=1000, 
    help='Number of sequences',
    short_name='n'
)

flags.DEFINE_integer(
    'minimum', 
    default=10, 
    help='Minimum length of the sequence',
    short_name='m'
)

flags.DEFINE_integer(
    'maximum', 
    default=100, 
    help='Maximum length of the sequence',
    short_name='M'
)

flags.DEFINE_integer(
    'factor', 
    default=1, 
    help='nof_sequences *= factor',
    short_name='f'
)

flags.DEFINE_boolean(
    'ssa', 
    default=False, 
    help='-mem2reg is the first pass',
    short_name='s'
)

flags.DEFINE_boolean(
    'shuffle', 
    default=False, 
    help='Shuffle the passes',
    short_name='S'
)

flags.DEFINE_boolean(
    'update', 
    default=False, 
    help='Update the sequence',
    short_name='u'
)

flags.DEFINE_boolean(
    'repetition', 
    default=False, 
    help='Enable repetition',
    short_name='r'
)

flags.DEFINE_boolean(
    'original', 
    default=False, 
    help='Preserve the original sequence',
    short_name='o'
)

flags.DEFINE_string(
    'passes_filename', 
    default=None, 
    help='Passes filename (yaml dictionary)',
    short_name='p'
)

flags.DEFINE_string(
    'level', 
    default='O3', 
    help='Compiler optimization level',
    short_name='l'
)

flags.mark_flag_as_required('passes_filename')

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