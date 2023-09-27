#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(void) {
	queue<int> time;
	queue<string> name;
	int queAmount,qtime,limitTime;
	string qname;
	cin >> queAmount;
	cin >> limitTime;

	for (int i = 0; i < queAmount; i++) {
		cin >> qname;
		name.push(qname);
		cin >> qtime;
		time.push(qtime);
	}

	int totalTime = 0;
	while (!time.empty()) {
		qname = name.front(); name.pop();
		qtime = time.front(); time.pop();
		if (qtime - limitTime <= 0) {
			totalTime += qtime;
			cout << qname << " " << totalTime << endl;
		} else {
			totalTime += limitTime;
			name.push(qname);
			time.push(qtime - limitTime);
		}
	}
	return 0;
}