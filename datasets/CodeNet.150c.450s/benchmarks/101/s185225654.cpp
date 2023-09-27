
#include<iostream>
#include<queue>

using namespace std;

const int MAX = 100000;

int parent(int table[], int child) {
	queue<int> q;

	while (table[child] != -1) {
		q.push(child);
		child = table[child];
	}
	while (!q.empty()) {
		table[q.front()] = child;
		q.pop();
	}
	return child;
}

int main() {
	int n, m, q;
	int table[MAX];

	cin >> n >> m;

	for (int i = 0; i < n; i++)table[i] = -1;
	for (int i = 0; i < m; i++) {
		int s, t;
		cin >> s >> t;
		
		int ps = parent(table, s);
		int pt = parent(table, t);
		if (ps != pt) {
			table[ps] = pt;
		}
	}

	cin >> q;

	for (int i = 0; i < q; i++) {
		int s, t;
		cin >> s >> t;

		int ps = parent(table, s);
		int pt = parent(table, t);

		if (ps == pt) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	return 0;
}