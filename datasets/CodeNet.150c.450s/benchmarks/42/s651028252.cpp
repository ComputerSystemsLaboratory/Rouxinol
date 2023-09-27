#include <iostream>
#include <queue>
using namespace std;

class Process {
	int time;
	string name;
public:
	Process(int t, char* n) {
		time = t;
		name = n;
	}
	int take(int n) {
		time -= n;
		if (time > 0) return -1; //?¶???±?????????
		else return time + n;
	}
	string getname() { return name; }
};

int main() {
	int quontam, num, now = 0;
	queue<Process> processes;

	scanf("%d %d", &num, &quontam);

	for (int i = 0; num > i; i++) {
		char str[11];
		int time;
		scanf("%s %d", str, &time);
		processes.push(Process(time, str));
	}
	while (!processes.empty()) {
		int taken = processes.front().take(quontam);
		if (taken == -1) {
			now += quontam;
			processes.push(processes.front());
		}
		else {
			now += taken;
			printf("%s %d\n", processes.front().getname().c_str(), now);
		}
		processes.pop();
	}
	return 0;
}