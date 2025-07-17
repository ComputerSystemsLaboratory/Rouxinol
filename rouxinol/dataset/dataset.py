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

import urllib.request
import tarfile
import zipfile

from git import Repo

from appdirs import user_data_dir


class Dataset(object):
    def __init__(
        self
    ):
        self.name = self.__class__.__name__

        if 'ROUXINOL_APP_DIR' in os.environ:
            app_dir = os.environ['ROUXINOL_APP_DIR']
        else:
            app_dir = user_data_dir(appname="Rouxinol")

        self.dataset_dir = os.path.join(app_dir, self.name)
        os.makedirs(self.dataset_dir, exist_ok=True)

        self.content_dir = os.path.join(self.dataset_dir, "content")

    def get_content_dir(
        self
    ):
        return self.content_dir

    def download_http_and_extract(
            self,
            url,
            archive_type="tar.xz",
            force=False
    ):
        archive_file = os.path.join(self.dataset_dir, "content." + archive_type)

        #if not os.path.isfile(archive_file):
        if force or not os.path.isdir(os.path.join(self.dataset_dir, "content")):
            urllib.request.urlretrieve(url, archive_file)

        if not os.path.isdir(self.content_dir):
            os.makedirs(self.content_dir, exist_ok=True)
            if archive_type == "zip":
                with zipfile.ZipFile(archive_file, "r") as f:
                    f.extractall(self.content_dir)
            elif archive_type == "tar.bz2":
                with tarfile.open(archive_file, "r:bz2") as f:
                    f.extractall(self.content_dir)
            elif archive_type == "tar.xz":
                with tarfile.open(archive_file, "r:xz") as f:
                    f.extractall(self.content_dir)                    
            else:
                raise Exception

            os.remove(archive_file)

        return self.content_dir

    def clone_git(
        self,
        uri
    ):
        if not os.path.isdir(self.content_dir):
            Repo.clone_from(uri, self.content_dir)

        return self.content_dir

    def select_problems_and_samples(
        self,
        *args,
        **kwargs
    ):
        raise NotImplementedError

    def preprocess(
        self,
        *args,
        **kwargs
    ):
        raise NotImplementedError

