#include <iostream>
#include <string>
#include <queue>

using namespace std;

class Process {
public:
	string name;
	int time;
};

int main() {
	int n, quantum, elapsed = 0;
	Process temp;
	queue<Process> que;

	cin >> n >> quantum;
	for (int i = 0; i < n; i++) {
		cin >> temp.name >> temp.time;
		que.push(temp);
	}

	while (!que.empty()) {
		temp = que.front();
		if (temp.time - quantum <= 0) {
			cout << temp.name << " " << temp.time + elapsed << endl;
			elapsed += temp.time;
		}
		else {
			temp.time -= quantum;
			que.push(temp);
			elapsed += quantum;
		}
		que.pop();
	}

	return 0;
}