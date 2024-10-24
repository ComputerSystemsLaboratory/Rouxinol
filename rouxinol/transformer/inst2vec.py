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
limitations under the License.f
"""

import os
import time
import time
import resource
import tarfile
import urllib.request
import numpy as np
import pickle as pk

from absl import logging

from appdirs import user_data_dir

from rouxinol.third_party.ncc import llvm_ir_to_trainable

from rouxinol.third_party.compy import common


class Inst2VecPreprocessedVisitor():
    def __init__(
        self
    ):
        pass


class Inst2VecEmbeddingsVisitor():
    def __init__(
        self
    ):
        pass

class Inst2VecBuilder(common.RepresentationBuilder):
    """Extract code representations.

    - Inst2Vec
    """

    def __init__(
        self
    ):
        common.RepresentationBuilder.__init__(self)
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

        self.csv_filename = None

    def string_to_info(
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

        _, filename = os.path.split(ir_filename)

        _ = llvm_ir_to_trainable(
                    ir_filename,
                    inst2vec_dir,
                    self.vocabulary_dir
                )
        
        self.csv_filename = os.path.join(inst2vec_dir, filename.replace(".ll", ".csv"))

    def info_to_representation(
        self,
        visitor=Inst2VecEmbeddingsVisitor
    ):
        with open(self.csv_filename, "r") as f:
            reader = csv.reader(f)
            emb = [int(row[0]) for row in reader]
    
        if isinstance(visitor, EmbeddingsVisitor):
            with open(os.path.join(self.vocabulary_dir, "emb.p"), "rb") as f:
                embeddings = pk.load(f)
            emb = [embeddings[idx].tolist() for idx in emb]

        os.remove(self.csv_filename)

        return np.array(emb)

