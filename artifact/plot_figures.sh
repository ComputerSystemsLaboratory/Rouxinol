#!/bin/bash  

# RDD == ROUXINOL_DATA_DIRECTORY
# RD == ROUXINOL_DIRECTORY

ROUXINOL_DIRECTORY=
ROUXINOL_DATA_DIRECTORY=

METRIC="acc"
SUFFIX="_0"


# Figure 4
python ${ROUXINOL_DIRECTORY}/artifact/plot_metric.py  \
	--plot_name figure4 \
	--representations llvmHistogram,x86Histogram,cfggrindDynamicHistogram,cfggrindHybridHistogram,ir2vec,programl \
	--metric ${METRIC} \
	--stats_directory ${ROUXINOL_DATA_DIRECTORY}/stats \
	--train_test O0_O0,O3_O3

# Figure 5
python ${ROUXINOL_DIRECTORY}/artifact/plot_metric.py  \
	--plot_name figure5 \
	--representations llvmHistogram,x86Histogram,cfggrindDynamicHistogram,cfggrindHybridHistogram \
	--metric ${METRIC} \
	--stats_directory ${ROUXINOL_DATA_DIRECTORY}/stats \
	--train_test O0_O0,O1_O1,O2_O2,O3_O3

# Figure 6
python ${ROUXINOL_DIRECTORY}/artifact/plot_metric.py  \
	--plot_name figure6 \
	--representations llvmHistogram,cfggrindDynamicHistogram,cfggrindHybridHistogram \
	--metric ${METRIC} \
	--stats_directory ${ROUXINOL_DATA_DIRECTORY}/stats \
	--train_test O0_bcf,O0_fla,O0_sub,O0_ollvm	

# Figure 7
python ${ROUXINOL_DIRECTORY}/artifact/plot_metric.py  \
	--plot_name figure7 \
	--representations llvmHistogram,cfggrindDynamicHistogram,cfggrindHybridHistogram \
	--metric ${METRIC} \
	--stats_directory ${ROUXINOL_DATA_DIRECTORY}/stats \
	--train_test bcf_bcf,fla_fla,sub_sub,ollvm_ollvm		

# Figure 8
python ${ROUXINOL_DIRECTORY}/artifact/plot_elapsed.py \
	--representations llvmHistogram,x86Histogram,cfggrindDynamicHistogram,cfggrindHybridHistogram \
	--suffix ${SUFFIX} \
	--data_directory ${ROUXINOL_DATA_DIRECTORY} \
	--flags O0,O1,O2,O3 \
	--plot_name figure8


