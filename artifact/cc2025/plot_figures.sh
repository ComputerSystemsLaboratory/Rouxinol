#!/bin/bash  

# RDD == ROUXINOL_DATA_DIRECTORY
# RD == ROUXINOL_DIRECTORY

ROUXINOL_DATA_DIRECTORY=
ROUXINOL_DIRECTORY=

# Figure 4
python ${ROUXINOL_DIRECTORY}/artifact/cc2025/plot_metric.py  \
	--num_files 10 \
	--plot_name figure4 \
	--prefix stats \
	--suffix C_500_32_500 \
	--representations llvmHistogram,x86Histogram,cfggrindHistogram,ir2vec,programl \
	--metric acc \
	--stats_directory ${ROUXINOL_DATA_DIRECTORY}/stats \
	--train_test O0_O0,O3_O3

# Figure 5
python ${ROUXINOL_DIRECTORY}/artifact/cc2025/plot_metric.py  \
	--num_files 10 \
	--plot_name figure5 \
	--prefix stats \
	--suffix C_500_100_500 \
	--representations llvmHistogram,x86Histogram,cfggrindHistogram_static,cfggrindHistogram \
	--metric acc \
	--stats_directory ${ROUXINOL_DATA_DIRECTORY}/stats \
	--train_test O0_O0,O1_O1,O2_O2,O3_O3

# Figure 6
python ${ROUXINOL_DIRECTORY}/artifact/cc2025/plot_metric.py  \
	--num_files 10 \
	--plot_name figure6 \
	--prefix stats \
	--suffix C_500_100_500 \
	--representations llvmHistogram,cfggrindHistogram_static,cfggrindHistogram \
	--metric acc \
	--stats_directory ${ROUXINOL_DATA_DIRECTORY}/stats \
	--train_test O0_bcf,O0_fla,O0_sub,O0_ollvm	

# Figure 7
python ${ROUXINOL_DIRECTORY}/artifact/cc2025/plot_metric.py  \
	--num_files 10 \
	--plot_name figure7 \
	--prefix stats \
	--suffix C_500_100_500 \
	--representations llvmHistogram,cfggrindHistogram_static,cfggrindHistogram \
	--metric acc \
	--stats_directory ${ROUXINOL_DATA_DIRECTORY}/stats \
	--train_test bcf_bcf,fla_fla,sub_sub,ollvm_ollvm		

# Figure 8
python ${ROUXINOL_DIRECTORY}/artifact/cc2025/plot_elapsed.py \
	--representations llvmHistogram,x86Histogram,cfggrindHistogram \
	--suffix C_500_0 \
	--data_directory ${ROUXINOL_DATA_DIRECTORY} \
	--flags O0,O1,O2,O3