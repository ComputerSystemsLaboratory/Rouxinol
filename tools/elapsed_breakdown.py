import os  
import yaml  
import matplotlib.pyplot as plt  
import numpy as np  
from absl import app, flags  

# Define command-line flags  
FLAGS = flags.FLAGS  
flags.DEFINE_string('directory', '', 'Directory containing YAML files.')  
flags.DEFINE_list('representations', [], 'List of long representation names indicating representations to process.')  
flags.DEFINE_string('benchmark', '', 'Benchmark to process.')  
flags.DEFINE_string('output', 'output', 'Base name for the output file (will append format).')  
flags.DEFINE_string('file_type', 'pdf', 'Type of the figure to save; accepts formats like png, pdf, jpg, etc.')  

# Colors for the components of the bar  
colors = ['#1f77b4', '#ff7f0e', '#2ca02c']  # Colors for IR, Exec, Rep  

# Mapping of short representation names to long names  
short_names = {  
    'cfggrindDynamicHistogram': 'D-x86',  
    'cfggrindHybridHistogram': 'H-x86',  
    'ir2vec': 'I2V',  
    'llvmHistogram': 'S-LLVM',  
    'x86Histogram': 'S-x86',  
    'performanceCounterHistogram': 'PCounter'  
}  

def load_yaml_files(directory, representations, benchmark):  
    """Load relevant YAML data from the specified directory."""  
    elapsed_times = {  
        'ir': [],  
        'exec': [],  
    }  
    
    # Load time_exec.yml  
    with open(os.path.join(directory, 'time_exec.yml')) as f:  
        data = yaml.safe_load(f)  
        for package in data:  
            if benchmark in data[package]:  
                elapsed_times['exec'].append(data[package][benchmark]['elapsed_time'])  

    # Load time_ir.yml  
    with open(os.path.join(directory, 'time_ir.yml')) as f:  
        data = yaml.safe_load(f)  
        for package in data:  
            if benchmark in data[package]:  
                elapsed_times['ir'].append(data[package][benchmark]['elapsed_time'])  

    # Load time_rep_<representation>.yml files using long names  
    for rep in representations:  
        file_name = f'time_rep_{rep}.yml'  
        try:  
            with open(os.path.join(directory, file_name)) as f:  
                data = yaml.safe_load(f)  
                for package in data:  
                    if benchmark in data[package]:  
                        elapsed_times.setdefault(rep, []).append(data[package][benchmark]['elapsed_time'])  
                        break  
        except FileNotFoundError:  
            print(f"Warning: {file_name} not found. Skipping this representation.")  

    return elapsed_times  

def create_bar_plot(elapsed_times, representations, benchmark, log_y=False):  
    """Create a bar plot using the elapsed time data as percentages."""  
    num_representations = len(representations)  
    
    # Prepare array to hold percentage values  
    percentages = np.zeros((num_representations, 3))  # 3 components: IR, Exec, Rep  

    # Compute total elapsed time for each representation to calculate percentages  
    for i, rep in enumerate(representations):  
        ir_time = elapsed_times['ir'][0] if elapsed_times['ir'] else 0  
        exec_time = elapsed_times['exec'][0] if elapsed_times['exec'] else 0  
        rep_time = elapsed_times.get(rep, [0])[0]  
        
        total_time = ir_time + exec_time + rep_time  
        if total_time > 0:  
            percentages[i, 0] = ir_time / total_time * 100  
            percentages[i, 1] = exec_time / total_time * 100  
            percentages[i, 2] = rep_time / total_time * 100  

    bar_width = 0.5  
    bar_indices = np.arange(num_representations)  

    # Prepare the bars with proper stacking  
    fig, ax = plt.subplots()  

    # Bars for each component (stacked percentage bars)  
    ax.bar(bar_indices, percentages[:, 0], width=bar_width, color=colors[0], label='IR', zorder=2)  
    ax.bar(bar_indices, percentages[:, 1], width=bar_width, bottom=percentages[:, 0], color=colors[1], label='Execution', zorder=2)  
    ax.bar(bar_indices, percentages[:, 2], width=bar_width, bottom=percentages[:, 0] + percentages[:, 1], color=colors[2], label='Representation', zorder=2)  

    # Labeling  
    ax.set_xlabel('Representations')  
    ax.set_ylabel('Percentage of Elapsed Time (%)')  
    ax.set_xticks(bar_indices)  
    ax.set_xticklabels([short_names[rep] for rep in representations], rotation=90, ha='center')  
    ax.legend()  

    # Save the figure  
    output_file = f"{FLAGS.output}.{FLAGS.file_type}"  
    plt.tight_layout()  
    plt.savefig(output_file, format=FLAGS.file_type)  
    plt.close()  
    print(f"Bar plot saved as: {output_file}")  

def main(argv):  
    del argv  # Unused  
    elapsed_times = load_yaml_files(FLAGS.directory, FLAGS.representations, FLAGS.benchmark)  
    create_bar_plot(elapsed_times, FLAGS.representations, FLAGS.benchmark)  # Pass the log_y parameter  

if __name__ == '__main__':  
    app.run(main)
