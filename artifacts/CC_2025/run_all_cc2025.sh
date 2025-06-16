#!/bin/bash  

### ARGUMENTS

CONDA_DIRECTORY=/net/media/scratch/anderson/anaconda3
ROUXINOL_DIRECTORY=/net/home/anfa418f/Workspace/Rouxinol
ROUXINOL_OUTPUT_DIRECTORY=/net/home/anfa418f/Workspace/test
ROUXINOL_APP_DIRECTORY=/net/media/scratch/anderson/rouxinol.data

DATASET="openjudge"

# Check if the a test  
if [ "$1" == "test" ]; then  
	PROBLEMS=2
	SAMPLES=10
	WORKERS=1
	ROUNDS=2
else  
    PROBLEMS=100
	SAMPLES=500
	WORKERS=4
	ROUNDS=10
fi

WORKLOAD="workload.yml"
GAMES=3

METRIC="acc"
SUFFIX="_0"

### STEP 1 - Data generation

./data_generator.sh \
    --out-dir ${ROUXINOL_OUTPUT_DIRECTORY} \
    --rouxinol ${ROUXINOL_DIRECTORY} \
    --conda ${CONDA_DIRECTORY} \
    --app-dir ${ROUXINOL_APP_DIRECTORY} \
    --dataset ${DATASET} \
    --problems ${PROBLEMS} \
    --samples ${SAMPLES}

### STEP 2 -  Classification

for (( g=0; g<${GAMES}; g++ )); do 

	./data_classifier.sh \
	    --out-dir ${ROUXINOL_OUTPUT_DIRECTORY} \
	    --dataset ${ROUXINOL_OUTPUT_DIRECTORY}/O0/statistics/workload.yml \
	    --rouxinol ${ROUXINOL_DIRECTORY} \
	    --rounds ${ROUNDS} \
	    --game ${g}

done

### STEP 3 - Plot the figures

METRIC="acc"
SUFFIX="_0"

# Figure 4
python ${ROUXINOL_DIRECTORY}/artifact/plot_metric.py  \
	--plot_name figure4 \
	--representations llvmHistogram,x86Histogram,cfggrindDynamicHistogram,cfggrindHybridHistogram,ir2vec,programl \
	--metric ${METRIC} \
	--statistics_directory ${ROUXINOL_OUTPUT_DIRECTORY}/statistics \
	--train_test O0_O0,O3_O3

# Figure 5
python ${ROUXINOL_DIRECTORY}/artifact/plot_metric.py  \
	--plot_name figure5 \
	--representations llvmHistogram,x86Histogram,cfggrindDynamicHistogram,cfggrindHybridHistogram \
	--metric ${METRIC} \
	--statistics_directory ${ROUXINOL_OUTPUT_DIRECTORY}/statistics \
	--train_test O0_O0,O1_O1,O2_O2,O3_O3

# Figure 6
python ${ROUXINOL_DIRECTORY}/artifact/plot_metric.py  \
	--plot_name figure6 \
	--representations llvmHistogram,cfggrindDynamicHistogram,cfggrindHybridHistogram \
	--metric ${METRIC} \
	--statistics_directory ${ROUXINOL_OUTPUT_DIRECTORY}/statistics \
	--train_test O0_bcf,O0_fla,O0_sub,O0_ollvm	

# Figure 7
python ${ROUXINOL_DIRECTORY}/artifact/plot_metric.py  \
	--plot_name figure7 \
	--representations llvmHistogram,cfggrindDynamicHistogram,cfggrindHybridHistogram \
	--metric ${METRIC} \
	--statistics_directory ${ROUXINOL_OUTPUT_DIRECTORY}/statistics \
	--train_test bcf_bcf,fla_fla,sub_sub,ollvm_ollvm		

# Figure 8
python ${ROUXINOL_DIRECTORY}/artifact/plot_elapsed.py \
	--representations llvmHistogram,x86Histogram,cfggrindDynamicHistogram,cfggrindHybridHistogram \
	--suffix ${SUFFIX} \
	--output_directory ${ROUXINOL_OUTPUT_DIRECTORY} \
	--flags O0,O1,O2,O3 \
	--plot_name figure8
