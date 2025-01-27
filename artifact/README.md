# Compiler Construction 2025

Anderson Faustino da Silva, Jeronimo Castrillon, Fernando Magno Quintão Pereira, "**A Comparative Study on the Accuracy and the Speed of Static and Dynamic Program Classifiers**", Proceedings of the 34th ACM SIGPLAN International Conference on Compiler Construction (CC 2025), Association for Computing Machinery, New York, NY, USA, Mar 2025.

---
## **Prepare the Workflow**

1. Download and install Anaconda

2. Clone Rouxinol
```bash
git clone https://github.com/ComputerSystemsLaboratory/Rouxinol.git
```

3. Create a Rouxinol conda environment
```bash
cd Rouxinol
conda env create -f rouxinol.yml
```

4. Install the dependencies
```bash
./install.sh <CONDA DIRECTORY> <NUMBER OF WORKERS> 
```

5. Install Rouxinol
```bash
conda activate rouxinol
./pip build .
```

---
## **Reproduce the Results**

You need to set the following variables. *ROUXINOL'S DATA DIRECTORY* is the directory where the data (LLVM IR, executable, representations, and statistics) will be stored. *ROUXINOL DIRECTORY* is the installation directory of Rouxinol. *CONDA DIRECTORY* is the installation directory of Anaconda. *ROUXINOL_APP_DIR* is the directory that contains the benchmarks; it is an optional variable, and if it is not set, Rouxinol will use the default directory (see Rouxinol/rouxinol/dataset.py). Always use absolute path.

1. Activate Rouxinol conda environment
```bash
conda activate rouxinol
```

2. Generate the figures' data
```bash
cd Rouxinol/artifact
./data_generator.sh 
    --data <ROUXINOL'S DATA DIRECTORY>
    --rouxinol <ROUXINOL DIRECTORY> 
    --conda <CONDA DIRECTORY> 
    --app-dir <ROUXINOL_APP_DIR>
    --workers 4
```

3. Generate classification results for Game 0
```bash
cd Rouxinol/artifact
./data_classifier.sh 
    --data <ROUXINOL'S DATA DIRECTORY>
    --rouxinol <ROUXINOL DIRECTORY> 
    --dataset <ROUXINOL'S DATA DIRECTORY>/O0/stats/workload.yml
    --game 0
```

4. Generate classification results for Game 1
```bash
cd Rouxinol/artifact
./data_classifier.sh 
    --data <ROUXINOL'S DATA DIRECTORY>
    --rouxinol <ROUXINOL DIRECTORY> 
    --dataset <ROUXINOL'S DATA DIRECTORY>/O0/stats/workload.yml
    --game 1
```

5. Generate classification results for Game 2
```bash
cd Rouxinol/artifact
./data_classifier.sh 
    --data <ROUXINOL'S DATA DIRECTORY>
    --rouxinol <ROUXINOL DIRECTORY> 
    --dataset <ROUXINOL'S DATA DIRECTORY>/O0/stats/workload.yml
    --game 2
```

6. Edit plot_figures.sh
```bash
cd Rouxinol/artifact
vim plot_figures.sh
```

7. Plot the figures
```bash
cd Rouxinol/artifact
./plot_figures.sh
```
