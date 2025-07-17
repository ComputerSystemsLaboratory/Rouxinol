#!/bin/bash  

# Function to extract/calculate dpu kernel time
calculate_dpu_kernel_time() {  
    local UPMEM_LOG=$1  # First parameter is the log file  
    local dpu_kernel_time=0  
    local reduction_time=0  
    local scan_time=0  
    local add_time=0
    local step2_time=0
    local step3_time=0

    while IFS= read -r line; do  
        case "$line" in  
            *"DPU Kernel Reduction Time:"*)  
                reduction_time=$(echo "${line}" | grep -oP '[\d.]+')  
                ;;  
            *"DPU Kernel Scan Time:"*)  
                scan_time=$(echo "${line}" | grep -oP '[\d.]+')  
                ;;  
            *"DPU Kernel Add Time:"*)  
                add_time=$(echo "${line}" | grep -oP '[\d.]+')  
                ;;  
            *"Step Two DPU Kernel Time:"*)  
                step2_time=$(echo "${line}" | grep -oP '[\d.]+')  
                ;;  
            *"Step Three DPU Kernel Time:"*)  
                step3_time=$(echo "${line}" | grep -oP '[\d.]+')  
                ;;  
            *"DPU Kernel Time:"*)  
                dpu_kernel_time=$(echo "${line}" | grep -oP '[\d.]+')  
                ;;           
        esac  
    done < "${UPMEM_LOG}"  

    # If DPU Kernel Time is not directly present, calculate it from components  
    if (( $(echo "${dpu_kernel_time} == 0" | bc -l) )); then  
        dpu_kernel_time=$(echo "${reduction_time} + ${scan_time} + ${add_time} + ${step2_time} + ${step3_time}" | bc -l)  
    fi  

    echo "${dpu_kernel_time}"  # Return the dpu_kernel_time  
}

# Function to display usage  
usage() {  
    echo "SAMOS 2025 Artifact"
    echo "Copyright (C) 2025 Anderson Faustino da Silva"
    echo ""
    echo "Usage: $0 -p STR -b LIST -d LIST -t INT -l DIR -P DIR -T LIST -u LIST [-f] [-h]"  
    echo ""  
    echo "Commands:"
    echo "  -p, --passes             Filename containing optimization sequences, one per line" 
    echo "  -b, --benchmark          Coma-separared list of benchmarks (e.g., BS,GEMV,HST-L)"    
    echo "  -d, --dpus               Comma-separated list of DPUs (e.g., 1,2,4,8)"      
    echo "  -f, --force              Generate the x86Histogram even if it exits (default=False)"   
    echo "  -t, --timeout            Time limit on how long a command is allowed to run (seconds)"      
    echo "  -l, --log                Log files directory (use absolute path)" 
    echo "  -P, --package            Package (benchmark) directory"       
    echo "  -T, --tasklets           Comma-separated list of tasklets (e.g., 1,2,4,8)"  
    echo "  -u, --upmem              UPMEM SDK directory (use absolute path)" 
    echo "  -h, --help               Help"     
    exit 1  
} 

# Initialize variables 
log_directory=""  
upmem_directory=""
package_directory=""
benchmarks=""  
num_tasklets=""  
num_dpus=""  
passes_file=""
force=0  
timeout_value=0

# Parse command-line arguments using getopt  
OPTIONS=$(getopt -o P:b:T:d:t:p:l:u:fh --long package:,benchmarks:,tasklets:,dpus:,timeout:,passes:,log:,upmem:,force,help -- "$@")  
if [ $? -ne 0 ]; then  
    usage  
fi  

eval set -- "$OPTIONS"  

# Extract options  
while true; do  
    case "$1" in  
        -P|--package)  
            package_directory="$2"  
            shift 2  
            ;;    
        -b|--benchmarks)  
            benchmarks="$2"  
            shift 2  
            ;;             
        -T|--tasklets)  
            num_tasklets="$2"  
            shift 2  
            ;;  
        -d|--dpus)  
            num_dpus="$2"  
            shift 2  
            ;;  
        -t|--timeout)  
            timeout_value="$2"  
            shift 2  
            ;;              
        -p|--passes)  
            passes_file="$2"  
            shift 2  
            ;;   
        -l|--log)  
            log_directory="$2"  
            shift 2  
            ;;  
        -u|--upmem)  
            upmem_directory="$2"  
            shift 2  
            ;; 
        -f|--force)  
            force=1  
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
            echo "Invalid option: $1"  
            usage  
            ;;  
    esac  
done  

# Check if all required arguments are provided  
if [[ -z "${package_directory}" || -z "${benchmarks}" || -z "${num_tasklets}" || -z "${num_dpus}" || -z "${passes_file}" || -z "${log_directory}" || -z "${upmem_directory}" ]]; then  
    usage  
fi  

# Check if the package directory exists
if [[ ! -d "${package_directory}" ]]; then  
    echo "Error: Package directory ${package_directory} does not exist."   
    exit 1  
fi 

# Check if the passes file exists and is not empty  
if [[ ! -f "${passes_file}" || ! -s "${passes_file}" ]]; then  
    echo "Error: Passes file ${passes_file} does not exist or is empty."   
    exit 1  
fi   

# Check if the upmem directory exists
if [[ ! -d "${upmem_directory}" ]]; then  
    echo "Error: UPMEM directory ${upmem_directory} does not exist."   
    exit 1  
fi  

if [[ ! -f "${upmem_directory}/upmem_env.sh" ]]; then  
    echo "Error: UPMEM env ${upmem_directory}/upmem_env.sh does not exist."   
    exit 1  
fi

# Validate package
valid_packages=("prim-benchmarks" "prim-cinnammon" "pim-ml")  
if [[ ! " ${valid_packages[@]} " =~ " ${package} " ]]; then  
    echo "Error: Invalid benchmark $package. Allowed values are: ${valid_packages[*]}"  
    exit 1 
fi  

# Validate timeout
if ! [[ "$timeout_value" =~ ^[0-9]+$ ]] || [[ "$timeout_value" -le 0 ]]; then  
    echo "Error: Iinvalid timeout: $timeout_value"  
    exit 1
fi  

# Validate benchmark  
IFS=',' read -r -a benchmarks_array <<< "${benchmarks}"  
valid_benchmarks=("BFS" "BS" "GEMV" "HST-L" "HST-S" "LiRnQ" "LiRQ" "LoRnQ" "LoRQ" "MLP" "NW" "RED" "SCAN-RSS" "SCAN-SSA" "SEL" "SpMV" "TRNS" "TS" "UNI" "VA")  

for bm in "${benchmarks_array[@]}"; do  
    if [[ ! " ${valid_benchmarks[@]} " =~ " ${bm} " ]]; then  
        echo "Error: Invalid benchmark ${bm}. Allowed values are: ${valid_benchmarks[*]}"  
        exit 1 
    fi
    if [[ ! -d "${package_directory}/${bm}" ]]; then  
        echo "Error: Benchmark directory ${package_directory}/${bm} does not exist."   
        exit 1  
    fi 
done 

# Create log directory if it doesn't exist  
mkdir -p "${log_directory}"  

# Initiate UPMEM environment
source "${upmem_directory}/upmem_env.sh"

# Get the absolute path of the script directory  
current_dir="${PWD}" 

# Convert comma-separated lists into arrays  
IFS=',' read -r -a tasklet_array <<< "${num_tasklets}"  
IFS=',' read -r -a dpu_array <<< "${num_dpus}"

# Read passes from the file into an array, skipping comments and blank lines  
mapfile -t passes_array < <(grep -v '^\s*#' "${passes_file}" | grep -v '^\s*$')  

# Check if the array is empty  
if [ ${#passes_array[@]} -eq 0 ]; then  
    echo "There are no compiler optimization sequences. Exiting."  
    exit 1  
fi    

# Log the start of the process  
for bm in "${benchmarks_array[@]}"; do

    # Create benchmark dir
    mkdir -p "${log_directory}/${bm}"
    
    # Remove previous log
    rm -f ${bm}.out

    # Start
    echo "" | tee -a "${log_directory}/${bm}/log.out" &> /dev/null
    echo "================================================================================" | tee -a "${log_directory}/${bm}/log.out" &> /dev/null
    echo "Starting benchmark process for ${bm} at $(date)" | tee -a "${log_directory}/${bm}/log.out" &> /dev/null   
    echo "================================================================================" | tee -a "${log_directory}/${bm}/log.out" &> /dev/null
 
    # Check if the parameters file exists and is not empty  
    parameters_file="${package_directory}/${bm}/param.txt"
    if [[ ! -f "{$parameters_file}" || ! -s "{$parameters_file}" ]]; then 
        echo "Error: Parameters file ${parameters_file} does not exist or is empty."   
        continue  
    fi     

    # Read the parameters from the file into an array, skipping comments and blank lines
    mapfile -t data_param_array < <(grep -v '^\s*#' "${parameters_file}" | grep -v '^\s*$')  

    # Iterate over tasklets
    for T in "${tasklet_array[@]}"; do  
        
        # Iterate over DPUS
        for D in "${dpu_array[@]}"; do  
            
            # Check if T < D  
            if [ "$T" -lt "$D" ]; then  
                # Skip this iteration  
                continue  
            fi  

            # Iterate over each pass  
            for P_index in "${!passes_array[@]}"; do  
                P="${passes_array[$P_index]}"  

                # Compile and link if log does not exist or is invalid  
                echo "Running: make NR_TASKLETS=${T} NR_DPUS=${D} PASSES=${P}" | tee -a "${log_directory}/${bm}/log.out" &> /dev/null
                cd ${package_directory}/${bm}
                make clean
                make NR_TASKLETS=${T} NR_DPUS=${D} PASSES="${P}"

                # Check if compilation OK
                if [[ ! -f "bin/host_code" ]] || [[ ! -f "bin/dpu_code" ]]; then   
                    continue
                fi

                for PP_index in "${!data_param_array[@]}"; do 
                    PP="${data_param_array[$PP_index]}"

                    # Check if UPMEM_LOG exists and is valid before running compile and link 
                    UPMEM_LOG="${log_directory}/${bm}/cos_${P_index}_tasklets_${T}_dpus_${D}_param_${PP_index}.log"  
                    if [[ ${force} -eq 0 ]] && [[ -f "${UPMEM_LOG}" ]]; then 
                        dpu_kernel_time=$(calculate_dpu_kernel_time "${UPMEM_LOG}")  
                        # Validate dpu_kernel_time  
                        if (( $(echo "${dpu_kernel_time} > 0" | bc -l) )); then  
                            echo "DPU Kernel Time is valid: ${dpu_kernel_time} ms. Skipping ..." | tee -a "${log_directory}/${bm}/log.out" &> /dev/null
                            continue
                        fi
                    fi

                    # Run the benchmark  
                    echo "Running: ${package_directory}/${bm} and logging to ${UPMEM_LOG}" | tee -a "${log_directory}/${bm}/log.out" &> /dev/null  
                    timeout ${timeout_value} ${package_directory}/${bm}/bin/host_code $PP &> "${UPMEM_LOG}"
                    if [[ $? -eq 124 ]]; then  
                        echo "host_code did not terminate within the timeout period. Removing log ..." | tee -a "${log_directory}/${bm}/log.out" &> /dev/null 
                    fi

                    if [[ -f "${UPMEM_LOG}" ]]; then 
                        dpu_kernel_time=$(calculate_dpu_kernel_time "${UPMEM_LOG}")  
                        # Validate dpu_kernel_time  
                        if (( $(echo "${dpu_kernel_time} > 0" | bc -l) )); then  
                            echo "DPU Kernel Time is valid: ${dpu_kernel_time} ms." | tee -a "${log_directory}/${bm}/log.out" &> /dev/null
                            echo "UPMEM output saved to ${UPMEM_LOG}" | tee -a "${log_directory}/${bm}/log.out" &> /dev/null
                            continue
                        else
                            echo "DPU Kernel Time is invalid. Removing log ..." | tee -a "${log_directory}/${bm}/log.out" &> /dev/null
                            rm -f "${UPMEM_LOG}"
                        fi
                    fi
                done

                make clean
                
                echo "" | tee -a "${log_directory}/${bm}/log.out" &> /dev/null

            done
  
        done  
    done  

    # Log the end of the process
    echo "================================================================================" | tee -a "${log_directory}/${bm}/log.out" &> /dev/null  
    echo "Benchmark process for ${bm} completed at $(date)" | tee -a "${log_directory}/${bm}/log.out" &> /dev/null  
    echo "================================================================================" | tee -a "${log_directory}/${bm}/log.out" &> /dev/null
done

cd "${current_dir}"