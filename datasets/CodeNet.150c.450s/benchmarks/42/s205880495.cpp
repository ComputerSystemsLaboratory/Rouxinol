#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)

struct ps {
	string name;
	int time;
};

int main() {
	int n,q,t=0;
	queue<ps> qe;
	cin >> n >> q;
	rep(i,n) {
		ps p;
		cin >> p.name >> p.time;
		qe.push(p);
	}

	while(!qe.empty()) {
		ps p = qe.front();
		qe.pop();
		if (p.time > q) {
			p.time -= q;
			t += q;
			qe.push(p);
		} else {
			t += p.time;
			cout << p.name << " " << t << endl;
		}
	}

	return 0;
}