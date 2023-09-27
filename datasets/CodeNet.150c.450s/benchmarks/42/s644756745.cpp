#include <iostream>
#include <queue>
using namespace std;

int main () {
	queue<int> qptime;
	queue<string> qpname;
	queue<int> qfptime;
	queue<string> qfpname;
	int n, q, ptime, timer = 0;
	string pname;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		cin >> pname;
		qpname.push(pname);
		cin >> ptime;
		qptime.push(ptime);
	}
	while (!qpname.empty()) {
		for (int i = 0; i < qpname.size(); i++) {
			pname = qpname.front();
			qpname.pop();
			ptime = qptime.front();
			qptime.pop();
			ptime = ptime - q;
			if (ptime <= 0) {
				ptime = ptime + q + timer;
				qfpname.push(pname);
				qfptime.push(ptime);
				timer = ptime;
			}
			else {
				qpname.push(pname);
				qptime.push(ptime);
				timer += q;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		pname = qfpname.front();
		qfpname.pop();
		ptime = qfptime.front();
		qfptime.pop();
		cout << pname << ' ';
		cout << ptime << endl;
	}	
	return 0;
}