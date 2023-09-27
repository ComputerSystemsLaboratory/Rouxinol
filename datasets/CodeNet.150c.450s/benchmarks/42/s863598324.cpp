#include<queue>
#include<iostream>
#include<string>
using namespace std;
struct process { string name; int time; };
void Debug();
queue<process> Q;
int n, q;

int main() {
	int processed = 0,sumTime = 0;
	cin >> n >> q;
	process p[n];

	//input
	for (int i = 0; i < n; i++) {
		cin >> p[i].name >> p[i].time;
		Q.push(p[i]);
	}

	//process
	while (1) {
		process t = Q.front();
		Q.pop();
		t.time -= q;
		if (t.time <= 0) {
			processed++;
			sumTime += (q + t.time);
			cout << t.name << " " << sumTime << endl;

			if (processed == n)		break;
		}
		else{
			Q.push(t);
			sumTime += q;
			//cout << t.name << " " << t.time << " processing now " << endl; //Debug
		}

	}

	//Debug();
	


	return 0;
}

void Debug() {
	for (int i = 0; i < n; i++) {
		process t = Q.front();
		Q.pop();
		cout << t.name << " " << t.time << endl;
	}
}