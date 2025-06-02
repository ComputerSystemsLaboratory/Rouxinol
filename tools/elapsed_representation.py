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
flags.DEFINE_boolean('log_y', False, 'Use logarithmic scale for Y-axis.')  # New flag for log scale  

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
    """Create a bar plot using the elapsed time data."""  
    num_representations = len(representations)  
    
    bar_width = 0.25  
    bar_indices = np.arange(num_representations)  

    # Collect data for the bars from elapsed_times  
    ir_times = [elapsed_times['ir'][0] if elapsed_times['ir'] else 0] * num_representations  
    exec_times = [elapsed_times['exec'][0] if elapsed_times['exec'] else 0] * num_representations  
    rep_times = [elapsed_times.get(rep, [0])[0] for rep in representations]  

    # Prepare the bars with proper stacking  
    fig, ax = plt.subplots()  

    # Bars for each component  
    ax.bar(bar_indices, ir_times, width=bar_width, color=colors[0], label='IR', zorder=2)  
    ax.bar(bar_indices, exec_times, width=bar_width, bottom=ir_times, color=colors[1], label='Execution', zorder=2)  
    ax.bar(bar_indices, rep_times, width=bar_width, bottom=np.array(ir_times) + np.array(exec_times), color=colors[2], label='Representation', zorder=2)  

    # Labeling  
    ax.set_xlabel('Representations')  
    ax.set_ylabel('Elapsed Time (s)')  
    ax.set_xticks(bar_indices)  
    
    # Set the appropriate short names for each representation on the x-axis   
    ax.set_xticklabels([short_names[rep] for rep in representations], rotation=90, ha='center')  
    ax.legend()  

    # Apply log scale if the parameter is set  
    if log_y:  
        ax.set_yscale('log')  

    # Save the figure  
    output_file = f"{FLAGS.output}.{FLAGS.file_type}"  
    plt.tight_layout()  
    plt.savefig(output_file, format=FLAGS.file_type)  
    plt.close()  
    print(f"Bar plot saved as: {output_file}")  

def main(argv):  
    del argv  # Unused  
    elapsed_times = load_yaml_files(FLAGS.directory, FLAGS.representations, FLAGS.benchmark)  
    create_bar_plot(elapsed_times, FLAGS.representations, FLAGS.benchmark, FLAGS.log_y)  # Pass the new parameter  

if __name__ == '__main__':  
    app.run(main)
