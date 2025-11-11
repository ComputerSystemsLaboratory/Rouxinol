#!/bin/bash  

# Initialize variables 
output_directory=""
rouxinol_directory=""
dataset=""

game=0
rounds=10
problems=100
samples=500
representations=""
test_ratio=0.2
is_cc2025_artifact=true

# Function to display usage  
usage() {
    echo "Rouxinol Artifact"
    echo "Copyright (C) 2025 Anderson Faustino da Silva"
    echo "" 
    echo "Usage: $0 --dataset <string> --out-dir <directory> --rouxinol <directory> "
    echo "                             --representations <R1,R2,...> [--problems <integer>] "
    echo "                             [--samples <integer>] [--test-ratio <float> ] [--rounds <integer>] "
    echo "                             [--game <integer>] [--shuffle] [--help]"  
    echo ""  
    echo "Commands:"
    echo "  -d, --dataset           Dataset name"
    echo "  -g, --game              Number of the game (Default=0)"
    echo "  -o, --out-dir           Path to the output directory"
    echo "  -p, --problems          Number of problems (Default=100)"  
    echo "  -r, --rounds            Number of rounds (Default=10)"    
    echo "  -R, --rouxinol          Path to the Rouxinol directory"
    echo "  -e, --representations   Coma-separared list of representations (e.g., llvmHistogram,ir2vec,...)"
    echo "  -s, --samples           Number of samples (Default=500)"    
    echo "  -S, --shuffle           Shuffle problems and samples (Default=false)"  
    echo "  -t, --test-ratio        Ratio of test samples"
    echo "  -h, --help              Help"       
    exit 1  
}  

# Check if no arguments are provided  
if [ $# -eq 0 ]; then  
    usage  
fi

# Parse command-line options using getopt  
OPTIONS=$(getopt -o o:R:d:p:s:r:e:g:S:t:h --long out-dir:,rouxinol:,representations:,dataset:,problems:,samples:,rounds:,game:,shuffle,test-ratio,help -- "$@")  
if [ $? -ne 0 ]; then  
    usage  
fi  

eval set -- "$OPTIONS"  

# Process options  
while true; do  
    case "$1" in  
        -o|--out-dir)  
            output_directory="$2"  
            shift 2  
            ;;
        -R|--rouxinol)  
            rouxinol_directory="$2"  
            shift 2  
            ;;
        -e|--representations)  
            representations="$2"  
            shift 2  
            ;;         
        -d|--dataset)  
            dataset="$2"  
            shift 2  
            ;;               
        -p|--problems)  
            if [[ "$2" =~ ^[0-9]+$ ]] && [ "$2" -gt 0 ]; then  
                problems="$2"  
            else  
                echo "Error: --problems must be an integer greater than 0."  
                exit 1  
            fi  
            shift 2  
            ;; 
        -s|--samples)  
            if [[ "$2" =~ ^[0-9]+$ ]] && [ "$2" -gt 0 ]; then  
                samples="$2"  
            else  
                echo "Error: --samples must be an integer greater than 0."  
                exit 1  
            fi  
            shift 2  
            ;; 
        -t|--test-ratio)
            if [[ "$2" =~ ^[0-9]+\.[0-9]+$ ]] && (( $(echo "$2 >= 0.1 && $2 <= 0.9" |bc -l) )); then  
                test_ratio="$2"  
            else  
                echo "Error: --test-ratio must be a float between 0.1 and 0.9."  
                exit 1  
            fi
            shift 2
            ;;
        -r|--rounds)  
            if [[ "$2" =~ ^[0-9]+$ ]] && [ "$2" -gt 0 ]; then  
                rounds="$2"  
            else  
                echo "Error: --rounds must be an integer greater than 0."  
                exit 1  
            fi  
            shift 2  
            ;;   
        -g|--game)  
            if [[ "$2" =~ ^[0-9]+$ ]]; then  
                game="$2"  
            else  
                echo "Error: --samples must be an integer."  
                exit 1  
            fi  
            shift 2  
            ;; 
        -S|--shuffle)  
            add_command=" --shuffle "
            shift
            ;;                                                
        -h|--help)  
            usage  
            ;;   
        --)  
            shift  
            break  
            ;;  
        *)  
            usage  
            ;;  
    esac  
done   

# Validate representations
IFS=',' read -r -a representation_array <<< "${representations}"
valid_representations=("programl" "llvmHistogram" "x86Histogram" "cfggrindHybridHistogram" "cfggrindDynamicHistogram"  "performanceCounterHistogram" "ir2vec" "inst2vecEmbeddings" "inst2vecPreprocessed")

for repr in "${representation_array[@]}"; do
    if [[ ! " ${valid_representations[@]} " =~ " ${repr} " ]]; then
        echo "Error: Invalid benchmark ${repr}. Allowed values are: ${valid_representations[*]}"
        exit 1
    fi
done

# Check if dataset is set and if it is valid
if [ -z "${dataset}" ]; then  
    echo "Error: --dataset is not set."  
    exit 1  
fi
if [ ! -f "${dataset}" ]; then  
    echo "Error: '${dataset}' not found."  
    exit 1  
fi

# Check if directories exist  
dirs=("${output_directory}" "${rouxinol_directory}")
for (( d=0; d<${#dirs[@]}; d++ )); do
    dir=${dirs[d]}
    case "${d}" in  
        0)  
            name="--out-dir"
            ;;
        1)  
            name="--rouxinol"  
            ;;
    esac
    if [ -z "${dir}" ]; then  
        echo "Error: '${name}' is required."  
        exit 1  
    fi
    if [ ! -d "${dir}" ]; then  
        echo "Error: Directory '${name}' does not exist."  
        exit 1  
    fi  
done 

export PYTHONPATH=${rouxinol_directory}

case "${game}" in  
    0)  
        train=("O0" "O1" "O2" "O3")
        test=("O0" "O1" "O2" "O3")        
        ;;  
    1)  
        train=("O0")
        test=("fla" "sub" "bcf" "ollvm")  
        ;;  
    2)  
        train=("fla" "sub" "bcf" "ollvm")
        test=("fla" "sub" "bcf" "ollvm")  
        ;;
    *)  
        echo "Invalid game '${game}'."  
        exit 1  
        ;;  
esac

for (( r=0; r<${rounds}; r++ )); do 

    echo -e "\nRound ${r} ..."

    for (( re=0; re<${#representation_array[@]}; re++ )); do 
        representation=${representation_array[re]}
        
        echo -e "\tClassify ${representation} ..."

        for (( tr=0; tr<${#train[@]}; tr++ )); do  
            train_label=${train[tr]}

            for (( te=0; te<${#test[@]}; te++ )); do  
                test_label=${test[te]}

                if { [ "${game}" -eq 0 ] || [ "${game}" -eq 2 ]; } && [ "${train_label}" != "${test_label}" ]; then 
                    continue  
                fi 

                if [ "${representation}" == "programl" ]; then
                    python ${rouxinol_directory}/examples/exploration_ggnn.py \
                        --output_directory=${output_directory} \
                        --dataset_name=${dataset} \
                        --train=${train_label} \
                        --test=${test_label} \
                        --problems=${n_problems} \
                        --samples=${samples} \
                        --test_ratio=${test_ratio} \
                        ${add_command}
                else
                    python ${rouxinol_directory}/examples/classification_preprocessed.py \
                        --output_directory=${output_directory} \
                        --dataset_name=${dataset} \
                        --train=${train_label} \
                        --test=${test_label} \
                        --problems=${n_problems} \
                        --samples=${samples} \
                        --test_ratio=${test_ratio} \
                        --representation=${representation} \
                        ${add_command}
                fi

            done

        done  

    done 

done


