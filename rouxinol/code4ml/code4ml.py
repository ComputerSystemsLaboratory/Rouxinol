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
import tarfile
import urllib.request

from git import Repo

from appdirs import user_data_dir


class Code4ML(object):
    def __init__(
        self,
        url
    ):
        self.name = self.__class__.__name__
        self.url = url

        app_dir = user_data_dir(appname="Rouxinol")
        self.code4ml_dir = os.path.join(app_dir, "code4ml")

        os.makedirs(self.code4ml_dir, exist_ok=True)
        self.content_dir = os.path.join(self.code4ml_dir, self.name)

    def download_http_and_extract(
        self
    ):
        if not os.path.isdir(self.content_dir):
            archive_file = os.path.join(self.code4ml_dir, "code4ml.xz")

            urllib.request.urlretrieve(
                                self.url,
                                archive_file
                            )

            with tarfile.open(archive_file, "r:xz") as f:
                f.extractall(self.code4ml_dir)

            os.remove(archive_file)

        return self.content_dir

    def clone_git(
        self
    ):
        if not os.path.isdir(self.code4ml_dir):
            Repo.clone_from(self.url, self.content_dir)

        return self.content_dir

    def preprocess(
        self,
        *args,
        **kwargs
    ):
        raise NotImplementedError


