#include <iostream>
#include <queue>

using namespace std;

struct process
{
	char name[11];
	int time;
};

void simulate(queue<process> processes, int n, int quantum)
{
	int elapsed_time = 0;
	while (!processes.empty())
	{
		process current_process = processes.front(); processes.pop();
		if (current_process.time - quantum <= 0) {
			elapsed_time += current_process.time;
			cout << current_process.name << ' ' << elapsed_time << '\n';
		}
		else {
			current_process.time -= quantum;
			elapsed_time += quantum;
			processes.push(current_process);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);

	int n, quantum;
	queue<process> processes;
	cin >> n >> quantum;
	for (int i = 0; i < n; i++) {
		process input;
		cin >> input.name >> input.time;
		processes.push(input);
	}

	simulate(processes, n, quantum);
	return 0;
}