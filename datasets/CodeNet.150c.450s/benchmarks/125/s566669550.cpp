#include <bits/stdc++.h>
#define PI 3.14159265359
#define NIL (-1)
using namespace std;
const int64_t MOD = 1e9 + 7;

int n;
vector<vector<bool>> M(100, vector<bool>(100));
vector<int> C(100), d(100), f(100), nt(100);
int tt;

int next(int u) {
	for (int i = nt.at(u); i < n; i++) {
		nt.at(u) = i + 1;
		if (M.at(u).at(i)) return i;
	}
	return -1;
}

void dfs_visit(int r) {
	for (int i = 0; i < n; i++) nt.at(i) = 0;

	stack<int> S;
	S.push(r);
	C.at(r) = 1;
	d.at(r) = ++tt;

	while (!S.empty()) {
		int u = S.top();
		int v = next(u);

		if (v != -1) {
			if (C.at(v) == 0) {
				C.at(v) = 1;
				d.at(v) = ++tt;
				S.push(v);
			}
		}
		else {
			S.pop();
			C.at(u) = 2;
			f.at(u) = ++tt;
		}
	}
}

void dfs() {
	for (int i = 0; i < n; i++) {
		C.at(i) = 0;
		nt.at(i) = 0;
	}
	tt = 0;

	for (int i = 0; i < n; i++) {
		if (C.at(i) == 0) dfs_visit(i);
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << ' ' << d.at(i) << ' ' << f.at(i) << endl;
	}
}

int main() {
	int u, k, v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> v >> k;

		for (int j = 0; j < k; j++) {
			int x;
			cin >> x;
			M.at(v - 1).at(x - 1) = true;
		}
	}

	dfs();

	return 0;
}
