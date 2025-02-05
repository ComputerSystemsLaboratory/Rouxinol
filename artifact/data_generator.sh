#!/bin/bash  

# Initialize variables 
output_directory=""
conda_directory="" 
rouxinol_directory=""  
rouxinol_app_directory=""

dataset="openjudge"

problems=100
workers=1
samples=500
entry=1
is_cc2025_artifact=true
do_not_extract_representation=false

# Function to display usage  
usage() {  
    echo "Usage: $0 --out-dir <directory> --rouxinol <directory> --conda <directory> [--app-dir <directory>] [--dataset <string>] [--problems <integer>] [--workers <integer>] [--samples <integer>] [--entry <integer>] [--no-repr] [--no-cc2025]"  
    echo "  --out-dir: Path to the output directory."
    echo "  --rouxinol: Path to the Rouxinol directory."  
    echo "  --conda: Path to the Conda directory."
    echo "  --app-dir: Path to the ROUXINOL_APP_DIR."
    echo "  --dataset: Dataset name. (Default is openjudge)"
    echo "  --problems: Number of problems (Default is 100)."  
    echo "  --workers: Number of workers (Default is 1)."  
    echo "  --samples: Number of samples (Default is 500)."  
    echo "  --entry: Number of CSES workload (Default is 1)."
    echo "  --no-repr: Do not extract representation (Default is false)."
    echo "  --no-cc2025: It is not the CC2025 artifact."
    exit 1  
}  

# Check if no arguments are provided  
if [ $# -eq 0 ]; then  
    usage  
fi

# Parse command-line options using getopt  
OPTIONS=$(getopt -o "" --long out-dir:,rouxinol:,conda:,app-dir:,dataset:,problems:,workers:,samples:,entry:,no-repr,no-cc2025 -- "$@")  
if [ $? -ne 0 ]; then  
    usage  
fi  

eval set -- "$OPTIONS"  

# Process options  
while true; do  
    case "$1" in  
        --out-dir)  
            output_directory="$2"  
            shift 2  
            ;; 
        --rouxinol)  
            rouxinol_directory="$2"  
            shift 2  
            ;;              
        --conda)  
            conda_directory="$2"  
            shift 2  
            ;;  
        --app-dir)  
            rouxinol_app_directory="$2"  
            shift 2  
            ;; 
        --dataset)  
            dataset="$2"  
            shift 2  
            ;;               
        --problems)  
            if [[ "$2" =~ ^[0-9]+$ ]] && [ "$2" -gt 0 ]; then  
                problems="$2"  
            else  
                echo "Error: --problems must be an integer greater than 0."  
                exit 1  
            fi  
            shift 2  
            ;;  
        --workers)  
            if [[ "$2" =~ ^[0-9]+$ ]] && [ "$2" -gt 0 ]; then  
                workers="$2"  
            else  
                echo "Error: --workers must be an integer greater than 0."  
                exit 1  
            fi  
            shift 2  
            ;;  
        --samples)  
            if [[ "$2" =~ ^[0-9]+$ ]] && [ "$2" -gt 0 ]; then  
                samples="$2"  
            else  
                echo "Error: --samples must be an integer greater than 0."  
                exit 1  
            fi  
            shift 2  
            ;;  
        --entry)  
            if [[ "$2" =~ ^[0-9]+$ ]] && [ "$2" -gt 0 ]; then  
                rounds="$2"  
            else  
                echo "Error: --rounds must be an integer greater than 0."  
                exit 1  
            fi  
            shift 2  
            ;;
        --no-repr)  
            do_not_extract_representation=true
            add_command=" --no_repr"
            shift
            ;; 
        --no-cc2025)  
            is_cc2025_artifact=false
            shift
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

# Check if dataset is set and if it is in the valid_datasets array
valid_datasets=("cses" "openjudge")  

if [ -z "${dataset}" ]; then  
    echo "Error: --dataset is not set."  
    exit 1  
else  
    # Initialize a flag to check if the dataset is valid  
    valid=false  

    # Loop through the valid_datasets array  
    for valid_dataset in "${valid_datasets[@]}"; do  
        if [ "${dataset}" == "${valid_dataset}" ]; then  
            valid=true  
            break  
        fi  
    done  

    # Check if the dataset is valid  
    if [ "${valid}" = false ]; then  
        echo "Error: '${dataset}' is not a valid dataset."  
        exit 1  
    fi  
fi

# Check if directories exist  
dirs=("${output_directory}" "${rouxinol_directory}" "${conda_directory}")
for (( d=0; d<${#dirs[@]}; d++ )); do
    dir=${dirs[d]}
    case "${d}" in  
        0)  
            name="--out-dir"
            ;;
        1)  
            name="--rouxinol"  
            ;;  
        2)  
            name="--conda"  
            ;;
    esac
    if [ -z "${dir}" ]; then  
        echo "Error: '${name}' is required."  
        exit 1  
    fi
    if [ ${d} -eq 0 ]; then
        continue
    fi     
    if [ ! -d "${dir}" ]; then  
        echo "Error: Directory '${name}' does not exist."  
        exit 1  
    fi  
done 

export VALGRIND_LIB=${conda_directory}/envs/rouxinol/libexec/valgrind
export PYTHONPATH=${rouxinol_directory}

if [ -n "${rouxinol_app_directory}" ] && [ -d "${rouxinol_app_directory}" ]; then
        export ROUXINOL_APP_DIR=${rouxinol_app_directory}
fi

if [ "${do_not_extract_representation}" = false ]; then
    if [ "${is_cc2025_artifact}" = true ]; then
        representations=("llvmHistogram" "x86Histogram" "cfggrindHybridHistogram" "cfggrindDynamicHistogram" "ir2vec" "inst2vecEmbeddings")
    else 
        representations=("llvmHistogram" "x86Histogram" "cfggrindHybridHistogram" "cfggrindDynamicHistogram" "performanceCounterHistogram" "ir2vec" "inst2vecEmbeddings" "inst2vecPreprocessed")
    fi
else
    representations=("llvmHistogram")
fi

flags=("O0" "O1" "O2" "O3" "fla" "sub" "bcf" "ollvm")

for (( r=0; r<${#representations[@]}; r++ )); do 
    representation=${representations[r]}
    
    echo -e "\nProcessing ${representation} ..."

    for (( f=0; f<${#flags[@]}; f++ )); do  
        flag=${flags[f]}

        echo -e "\t${flag} ..."

        # Set the variable x based on the current flag  
        case "${flag}" in  
            "O0")  
                c_flags="-O0 -w -g -ggdb -fno-stack-protector -no-pie"
                cxx_flags="-O0 -w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17"
                ;;  
            "O1") 
                c_flags="-O1 -w -g -ggdb -fno-stack-protector -no-pie"
                cxx_flags="-O1 -w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17"
                ;;  
            "O2")  
                c_flags="-O2 -w -g -ggdb -fno-stack-protector -no-pie"
                cxx_flags="-O2 -w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17"
                ;;  
            "O3")  
                c_flags="-O3 -w -g -ggdb -fno-stack-protector -no-pie"
                cxx_flags="-O3 -w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17"
                ;;  
            "fla")  
                c_flags="-mllvm -fla -w -g -ggdb -fno-stack-protector -no-pie"
                cxx_flags="-mllvm -fla -w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17"
                ;;  
            "sub")  
                c_flags="-mllvm -sub -w -g -ggdb -fno-stack-protector -no-pie"
                cxx_flags="-mllvm -sub -w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17"
                ;;
            "bcf")  
                c_flags="-mllvm -bcf -w -g -ggdb -fno-stack-protector -no-pie"
                cxx_flags="-mllvm -bcf -w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17"
                ;;  
            "ollvm")
                c_flags="-mllvm -fla -mllvm -sub -mllvm -bcf -w -g -ggdb -fno-stack-protector -no-pie"
                cxx_flags="-mllvm -fla -mllvm -sub -mllvm -bcf -w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17"
                ;;  
            *)  
                c_flags=""
                cxx_flags=""
                ;;  
        esac  

        case "${dataset}" in  
            "cses")
                python ${rouxinol_directory}/examples/cses_representation_extractor.py \
                    --compiler_dir=${conda_directory}/envs/rouxinol/bin \
                    --cxx_flags="${cxx_flags}" \
                    --representation=${representations[r]} \
                    --output_directory="${output_directory}/${flag}" \
                    --problems=${problems} \
                    --samples=${samples} \
                    --notimestamped \
                    --entry=${entry} \
                    ${add_command}
                ;;
            "openjudge")
                python ${rouxinol_directory}/examples/openjudge_representation_extractor.py \
                    --compiler_dir=${conda_directory}/envs/rouxinol/bin \
                    --c_flags="${c_flags}" \
                    --cxx_flags="${cxx_flags}" \
                    --representation=${representations[r]} \
                    --output_directory="${output_directory}/${flag}" \
                    --problems=${problems} \
                    --samples=${samples} \
                    --notimestamped \
                    ${add_command}
                ;;
            *)
                ;;  
        esac 

    done  

done 



