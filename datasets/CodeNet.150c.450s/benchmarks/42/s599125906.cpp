#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;

struct process {
	string name;
	int time;
};

int main() {

	int n, q;
	scanf("%d %d", &n, &q);

	queue<process> Q;
	for (int i = 0; i < n; ++i) {
		process p;
		cin >> p.name >> p.time;
		Q.push(p);
	}

	int past = 0;
	while (!Q.empty()) {
		process p = Q.front();
		Q.pop();
		if (p.time <= q) {
			cout << p.name << " " << p.time + past << endl;
			past += p.time;
		} else {
			p.time -= q;
			Q.push(p);
			past += q;
		}
	}

	return 0;
}