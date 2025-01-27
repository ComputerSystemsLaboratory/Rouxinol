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

from .utils import (
    output_filename,
    run_command_unix,
    multiple_file_types,
    create_timestamped_directory,
    none_output,
    get_next_filename,
    create_string,
    split_data,
    split_dataset,
    split_train_test_data,
    transform_data_with_dict,
    transform_data_with_list,
    transform_split_data_with_dict,
    transform_split_data_with_list,
    transform_train_test_data_with_dict,
    transform_train_test_data_with_list,
    transform_2d_to_1d_embeddings
)

from .sequence import (
    update,
    sanitize,
    mem2reg_first,
    index_pass_to_list,
    index_pass_to_string,
    remove_passes,
    name_pass_to_string,
    string_to_name_pass,
    fix_index,
    get_the_best,
    get_all_best,
    filter_sequences,
    get_the_smallest,
    exist,
    create_random_sequence,
    create_random_sequences,
    split
)

