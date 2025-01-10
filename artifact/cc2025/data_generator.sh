#!/bin/bash  

# Initialize variables 
data_directory=""
conda_directory="" 
rouxinol_directory=""  
rouxinol_dataset_directory=""

dataset="openjudge"

problems=100
workers=1
samples=500
entry=1
do_not_extract_representation=false

# Function to display usage  
usage() {  
    echo "Usage: $0 --data <directory> --rouxinol <directory> --conda <directory> [--rdataset <directory>] [--dataset <string>] [--problems <integer>] [--workers <integer>] [--samples <integer>] [--entry <integer>] [--no-repr]"  
    echo "  --data: Path to the data directory."
    echo "  --rouxinol: Path to the Rouxinol directory."  
    echo "  --conda: Path to the Conda directory."
    echo "  --rdataset: Path to the Rouxinol Dataset directory."
    echo "  --dataset: Dataset name. (Default is openjudge)"
    echo "  --problems: Number of problems (Default is 100)."  
    echo "  --workers: Number of workers (Default is 1)."  
    echo "  --samples: Number of samples (Default is 500)."  
    echo "  --entry: Number of CSES workload (Default is 1)."
    echo "  --no-repr: Do not extract representation (Default is false)."
    exit 1  
}  

# Check if no arguments are provided  
if [ $# -eq 0 ]; then  
    usage  
fi

# Parse command-line options using getopt  
OPTIONS=$(getopt -o "" --long data:,rdataset:,dataset:,problems:,workers:,samples:,rouxinol:,conda:,entry:,no-repr -- "$@")  
if [ $? -ne 0 ]; then  
    usage  
fi  

eval set -- "$OPTIONS"  

# Process options  
while true; do  
    case "$1" in  
        --data)  
            data_directory="$2"  
            shift 2  
            ;;  
        --rdataset)  
            rouxinol_dataset_directory="$2"  
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
        --rouxinol)  
            rouxinol_directory="$2"  
            shift 2  
            ;;  
        --conda)  
            conda_directory="$2"  
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
dirs=("${data_directory}" "${rouxinol_directory}" "${conda_directory}")
for (( d=0; d<${#dirs[@]}; d++ )); do
    dir=${dirs[d]}
    case "${d}" in  
        0)  
            name="--data"
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

if [ -n "${rouxinol_dataset_directory}" ] && [ -d "${rouxinol_dataset_directory}" ]; then
        export ROUXINOL_APP_DIR=${rouxinol_dataset_directory}
fi

if [ "${do_not_extract_representation}" = false ]; then
    representations=("llvmHistogram" "x86Histogram" "cfggrindHistogram" "ir2vec")
else
    representations=("llvmHistogram")
fi

flags=("O0" "O1" "O2" "O3" "fla" "sub" "bcf" "ollvm")

for (( r=0; r<${#representations[@]}; r++ )); do 
    representation=${representations[r]}
    
    echo "Generating ${representation} ..."

    for (( f=0; f<${#flags[@]}; f++ )); do  
        flag=${flags[f]}

        # Set the variable x based on the current flag  
        case "${flag}" in  
            "O0")  
                compiler_flag="-O0"
                ;;  
            "O1")  
                compiler_flag="-O1"
                ;;  
            "O2")  
                compiler_flag="-O2"
                ;;  
            "O3")  
                compiler_flag="-O3"
                ;;  
            "fla")  
                compiler_flag="-mllvm -fla"
                ;;  
            "sub")  
                compiler_flag="-mllvm -sub"
                ;;
            "bcf")  
                compiler_flag="-mllvm -bcf"
                ;;  
            "ollvm")
                compiler_flag="-mllvm -fla -mllvm -sub -mllvm -bcfe"
                ;;  
            *)  
                compiler_flag=""
                ;;  
        esac  

        case "${dataset}" in  
            "cses")  
                if [ "${do_not_extract_representation}" = true ]; then
                    python ${rouxinol_directory}/examples/cses_exploration.py \
                        --compiler_dir=${conda_directory}/envs/rouxinol/bin \
                        --compiler_flags="${compiler_flag}" \
                        --representation=${representations[r]} \
                        --data_directory=${data_directory} \
                        --label_dir=${flags[f]} \
                        --problems=${problems} \
                        --samples=${samples} \
                        --workers=${workers} \
                        --notimestamped \
                        --entry=${entry} \
                        --do_not_classify \
                        --no_repr
                else
                    python ${rouxinol_directory}/examples/cses_exploration.py \
                        --compiler_dir=${conda_directory}/envs/rouxinol/bin \
                        --compiler_flags="${compiler_flag}" \
                        --representation=${representations[r]} \
                        --data_directory=${data_directory} \
                        --label_dir=${flags[f]} \
                        --problems=${problems} \
                        --samples=${samples} \
                        --workers=${workers} \
                        --notimestamped \
                        --entry=${entry} \
                        --do_not_classify
                fi        
                ;;
            "openjudge")
                if [ "$do_not_extract_representation" = true ]; then  
                    python ${rouxinol_directory}/examples/openjudge_exploration.py \
                        --compiler_dir=${conda_directory}/envs/rouxinol/bin \
                        --compiler_flags="${compiler_flag}" \
                        --representation=${representations[r]} \
                        --data_directory=${data_directory} \
                        --label_dir=${flags[f]} \
                        --problems=${problems} \
                        --samples=${samples} \
                        --workers=${workers} \
                        --notimestamped \
                        --do_not_classify \
                        --no_repr
                else 
                    python ${rouxinol_directory}/examples/openjudge_exploration.py \
                        --compiler_dir=${conda_directory}/envs/rouxinol/bin \
                        --compiler_flags="${compiler_flag}" \
                        --representation=${representations[r]} \
                        --data_directory=${data_directory} \
                        --label_dir=${flags[f]} \
                        --problems=${problems} \
                        --samples=${samples} \
                        --workers=${workers} \
                        --notimestamped \
                        --do_not_classify
                fi
                ;;
            *)
                ;;  
        esac 

    done  

done 



