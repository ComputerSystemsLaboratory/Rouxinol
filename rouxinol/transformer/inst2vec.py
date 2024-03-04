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
import csv
import tarfile
import urllib.request
import pickle as pk

from absl import logging

from appdirs import user_data_dir

from rouxinol.environment import Environment
from rouxinol.transformer import Transformer
from rouxinol.third_party.inst2vec import llvm_ir_to_trainable


class Inst2Vec(Transformer):
    """Extract code representations.

    - Inst2Vec
    """

    def __init__(
        self
    ):
        super().__init__()

        app_dir = user_data_dir(appname="Rouxinol")
        self.vocabulary_dir = os.path.join(app_dir, "vocabulary")

        if not os.path.isdir(self.vocabulary_dir):
            os.makedirs(self.vocabulary_dir, exist_ok=True)

            archive_file = os.path.join(self.vocabulary_dir, "vocabulary.xz")
            url = "http://www.csl.uem.br/repository/rouxinol/inst2vec_vocab.xz"

            urllib.request.urlretrieve(
                                url,
                                archive_file
                            )

            with tarfile.open(archive_file, "r:xz") as f:
                f.extractall(self.vocabulary_dir)

            os.remove(archive_file)

    def from_src(
        self,
        src_filename,
        *args,
        **kwargs
    ):
        """Extact the IR2Vec representation.

        :param src_filename: The source file.

        :param flags: The compiler flags.

        :ir_directory: The out directory.

        :env: The environment.

        :mode: The representation type.

        :return: [2.34, ...].
        """

        """Parameters"""
        flags = kwargs["flags"] if "flags" in kwargs else ""
        ir_directory = kwargs["ir_directory"] if "ir_directory" in kwargs else ""
        inst2vec_dir = kwargs["inst2vec_dir"] if "inst2vec_dir" in kwargs else os.path.join("/tmp", "inst2vec")
        mode = kwargs["mode"] if "mode" in kwargs else "embeddings"

        """Compile the program."""
        if not "env" in kwargs:
            logging.error(
                        "Uninstantiated environment."
                    )
            sys.exit(1)

        ir_filename = kwargs["env"].src_to_ir(
                                        src_filename,
                                        flags,
                                        ir_directory=ir_directory
                                    )

        return self.from_ir(
                        ir_filename,
                        inst2vec_dir=inst2vec_dir,
                        mode=mode
                    )

    def from_ir(
        self,
        ir_filename,
        *args,
        **kwargs
    ):
        """Extact the IR2Vec representation.

        :param ir_filename: The LLVM IR file.

        :mode: The representation type.

        :return: [2.34, ...]
        """
        inst2vec_dir = kwargs["inst2vec_dir"] if "inst2vec_dir" in kwargs else os.path.join("/tmp", "inst2vec")
        mode = kwargs["mode"] if "mode" in kwargs else "embeddings"

        _, filename = os.path.split(ir_filename)

        _ = llvm_ir_to_trainable(
                    ir_filename,
                    inst2vec_dir,
                    self.vocabulary_dir
                )
        
        csv_filename = os.path.join(inst2vec_dir, filename.replace(".ll", ".csv"))
        with open(csv_filename, "r") as f:
            reader = csv.reader(f)
            emb = [int(row[0]) for row in reader]
        if mode == "embeddings":
            with open(os.path.join(self.vocabulary_dir, "emb.p"), "rb") as f:
                embeddings = pk.load(f)
            emb = [embeddings[idx].tolist() for idx in emb]

        os.remove(csv_filename)

        return emb

