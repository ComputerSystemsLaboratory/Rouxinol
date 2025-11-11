#!/bin/bash  

### ARGUMENTS

TOP_DIR=.
CONDA_DIRECTORY=$TOP_DIR/Anaconda
ROUXINOL_DIRECTORY=$TOP_DIR/Rouxinol
ROUXINOL_OUTPUT_DIRECTORY=$TOP_DIR/A1
ROUXINOL_APP_DIRECTORY=$TOP_DIR/rouxinol_data

DATASET="cses"

# Check if the a test  
if [ "$1" == "test" ]; then  
	PROBLEMS=2
	SAMPLES=10
	WORKERS=1
	ROUNDS=2
else  
	PROBLEMS=32
	SAMPLES=100
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
    --samples ${SAMPLES} \
    --representations "llvmHistogram,x86Histogram,cfggrindHybridHistogram,cfggrindDynamicHistogram,ir2vec,performanceCounterHistogram" \
    --flags "O0,O1,O2,O3,fla,sub,bcf,ollvm"

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

# Figure 7
python ${ROUXINOL_DIRECTORY}/artifacts/Rouxinol/plot_metric.py  \
	--plot_name figure7 \
	--representations ir2vec,llvmHistogram,x86Histogram,cfggrindHybridHistogram,cfggrindDynamicHistogram,performanceCounterHistogram \
	--metric ${METRIC} \
	--statistics_directory ${ROUXINOL_OUTPUT_DIRECTORY}/statistics \
	--train_test O0_O0,O1_O1,O2_O2,O3_O3

# Figure 8
python ${ROUXINOL_DIRECTORY}/artifacts/Rouxinol/plot_metric.py  \
	--plot_name figure8 \
	--representations ir2vec,llvmHistogram,x86Histogram,cfggrindHybridHistogram,cfggrindDynamicHistogram,performanceCounterHistogram \
	--metric ${METRIC} \
	--statistics_directory ${ROUXINOL_OUTPUT_DIRECTORY}/statistics \
	--train_test O0_bcf,O0_fla,O0_sub,O0_ollvm	

# Figure 9
python ${ROUXINOL_DIRECTORY}/artifacts/Rouxinol/plot_metric.py  \
	--plot_name figure9 \
	--representations ir2vec,llvmHistogram,x86Histogram,cfggrindHybridHistogram,cfggrindDynamicHistogram,performanceCounterHistogram \
	--metric ${METRIC} \
	--statistics_directory ${ROUXINOL_OUTPUT_DIRECTORY}/statistics \
	--train_test bcf_bcf,fla_fla,sub_sub,ollvm_ollvm		

# STEP 4 - Match
for rep in llvmHistogram x86Histogram cfggrindHybridHistogram cfggrindDynamicHistogram ir2vec performanceCounterHistogram; do

	python match_generator.py \
		-d ${ROUXINOL_OUTPUT_DIRECTORY}/O1 \
		-r $rep \
		-o ${ROUXINOL_OUTPUT_DIRECTORY}/match_O1/$rep

done

# STEP 5 - Match Figure
for rep in llvmHistogram x86Histogram cfggrindHybridHistogram cfggrindDynamicHistogram ir2vec performanceCounterHistogram; do

	python plot_violin_cumulative_match.py \
		-c 0,1,3,7,15 \
		-d ${ROUXINOL_OUTPUT_DIRECTORY}/match_O1/${rep} \
		-o ${ROUXINOL_OUTPUT_DIRECTORY}/statistics \
		-n match_O1_${rep}

done