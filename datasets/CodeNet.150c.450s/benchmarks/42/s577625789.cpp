#include <iostream>
#include <sstream>
#include <map>
#include <queue>

using namespace std;


int main() {
	ios::sync_with_stdio(false);

	string s;
	int n,q;

	cin >> n >> q;

	queue<pair<string, int>> processes;
	queue<pair<string, int>> answers;
	string name;
	int time;

	for (int i = 0; i < n; i++) {
		cin >> name >> time;
		processes.push(make_pair(name, time));
	}

	pair<string, int> process;
	int period = 0;

	while (!processes.empty()) {
		process = processes.front();
		processes.pop();

		//completed
		if (process.second <= q) {
			period += process.second;
			answers.push(make_pair(process.first, period));
		}
		else {//interrupted 
			period += q;
			process.second -= q;
			processes.push(process);
		}
	}

	while (!answers.empty()) {
		process = answers.front();
		answers.pop();

		cout << process.first << " " << process.second << endl;
	}

	return 0;
}