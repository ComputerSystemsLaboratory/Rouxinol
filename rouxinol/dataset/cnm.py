"""
Rouxinol an infrastructure to explore code generation and machine learning models.
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
import time

from tqdm import tqdm

from rouxinol.dataset import Dataset


class CNM(Dataset):
    def __init__(
        self,
    ):
        super().__init__()

    def preprocess(
        self,
        **kwargs
    ):
        # kwargs
        builder = kwargs["builder"]
        visitor = kwargs["visitor"]

        benchmarks = kwargs["benchmarks"]
        passes = kwargs["passes"]

        tasklets = kwargs["tasklets"]
        dpus = kwargs["dpus"]

        # Representations
        data = []

        # Stats
        elapsed_compilation = {}
        elapsed_generate_representation = {}

        #for samples_class, samples_programs in samples.items():
        for bench_idx, benchmark in tqdm(enumerate(benchmarks), desc=f"Processing benchmarks"):
            elapsed_compilation[benchmark] = {}
            elapsed_generate_representation[benchmark] = {}

            for cos_idx, cos in tqdm(passes.items(), desc=f"Processing compiler optimization sequences", leave=False): 
                elapsed_compilation[benchmark][cos_idx] = {}
                elapsed_generate_representation[benchmark][cos_idx] = {}

                for tasklet in tqdm(tasklets, desc=f"Processing tasklets", leave=False): 
                    elapsed_compilation[benchmark][cos_idx][int(tasklet)] = {}
                    elapsed_generate_representation[benchmark][cos_idx][int(tasklet)] = {}

                    for dpu in tqdm(dpus, desc=f"Processing DPUs", leave=False):                     
                        src_type = builder.get_src_type()

                        # Compile
                        bench_path=os.path.join(self.get_content_dir(), benchmark)
                        if not os.path.isdir(bench_path):
                            logging.error(f"Benchmark does not exist ({bench_path}).")
                            sys.exit(1)

                        cos_list = " ".join(cos)                            
                        command = f"ddir=$PWD ; cd {bench_path} ; make clean ; make NR_TASKLETS={tasklet} NR_DPUS={dpu} PASSES=\"{cos_list}\" ; cd $ddir"

                        start_time_comp = time.perf_counter()
                        os.system(command)
                        end_time_comp = time.perf_counter()

                        if not os.path.isfile(os.path.join(bench_path, "bin", "dpu_code")):
                            continue

                        src_types = {
                            "SRC" : os.path.join(bench_path, "bin", "dpu_code_p.c"),
                            "IR": os.path.join(bench_path, "bin", "dpu_code_opt.ll"),
                            "EXEC": os.path.join(bench_path, "bin", "dpu_code")
                        }
                        in_filename = src_types[src_type]

                        start_time_repr = time.perf_counter()
                        
                        info = builder.string_to_info(
                                            in_filename
                                )
                        
                        embeddings = builder.info_to_representation(
                                                info,
                                                visitor=visitor
                                    )

                        end_time_repr = time.perf_counter()

                        command = f"ddir=$PWD ; cd {bench_path} ; make clean ; cd $ddir"
                        os.system(command)

                        if embeddings is None:
                            continue

                        elapsed_compilation[benchmark][cos_idx][int(tasklet)][int(dpu)] = end_time_comp - start_time_comp
                        elapsed_generate_representation[benchmark][cos_idx][int(tasklet)][int(dpu)] = end_time_repr - start_time_repr

                        data.append({
                            "x": embeddings,
                            "info": {"benchmark": benchmark, "cos": cos_idx, "tasklets": tasklet, "dpus": dpu}}
                        )

        return data, elapsed_compilation, elapsed_generate_representation
