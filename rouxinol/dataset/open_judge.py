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
import glob as gl

from absl import logging
from random import shuffle

from rouxinol.dataset import Dataset
from rouxinol.utility import multiple_file_types

class OpenJudge(Dataset):
    def __init__(
        self,
    ):
        super().__init__("http://www.csl.uem.br/repository/code4ml/OpenJudge.xz")

        self.download_http_and_extract()

    def _verify_problem(
        self,
        problem,
        languages
    ):
        """Verify whether a problem has the number of samples.

        :param problem: The number of the problem.

        :param languages: The languages and their number of samples. A dictionay {"C": 500, ...}.

        :return: The samples.
        """
        languages_dict = {
            "C": "*.c",
            "C++": "*.cpp"
        }
        samples_dir = os.path.join(self.content_dir, problem)
        data = {language: multiple_file_types(os.path.join(samples_dir, "sample"), languages_dict[language]) for language in languages}
        validate = [1 for language, samples in data.items() if len(samples) >= languages[language]]

        if sum(validate) == len(languages.keys()):
            languages_samples = []
            for language, samples in data.items():
                shuffle(samples)
                languages_samples.extend(samples[:languages[language]])
            return languages_samples
        else:
            return None

    def select_problems_and_samples(
        self,
        num_problems,
        languages
    ):
        """Select the problems and their samples.

        :param num_problems: The number of problems.

        :param languages: The languages and their number of samples. A list of tuples [("C", 500), ...].

        :return: The problems and the samples.
        """
        data = {}

        problems = gl.glob(f"{self.content_dir}/p*")
        shuffle(problems)

        for problem in problems:
            samples = self._verify_problem(
                                problem,
                                languages
                            )
            if samples:
                data[problem] = samples

            if len(data) == num_problems:
                break

        if len(data) < num_problems:
            return None

        return data


