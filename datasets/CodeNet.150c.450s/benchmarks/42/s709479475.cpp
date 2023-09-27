#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main() {
	int i, j, n, q, tmpt, time = 0;
	string tmpn;
	queue<pair<string, int>> Q;
	pair<string, int> tmpq;
	cin >> n >> q;
	for (i = 0; i < n; i++) {
		cin >> tmpn >> tmpt;
		Q.push(make_pair(tmpn, tmpt));
	}
	while (n > 0) {
		tmpq = Q.front();
		Q.pop();
		if (tmpq.second > q) {
			tmpq.second -= q;
			Q.push(tmpq);
			time += q;
		} else {
			time += tmpq.second;
			cout << tmpq.first << " " << time << endl;
			n--;
		}
	}
	return 0;
}