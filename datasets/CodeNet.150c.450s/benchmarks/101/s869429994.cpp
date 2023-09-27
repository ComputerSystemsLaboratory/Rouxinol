#include <iostream>
#include <vector>
using namespace std;

int n, m, q;
int dp[100000];
vector<int> v[100000];

void f(int p, int idx) {
	if (dp[p] < 0) {
		dp[p] = idx;
		for (int i = 0; i < v[p].size(); i++) {
			f(v[p][i], idx);
		}
	}
}

void f2() {
	int idx = 0;
	for (int i = 0; i < n; i++) {
		if (dp[i] < 0) {
			f(i, idx++);
		}
	}
}


int main(){
	int s, t;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> s >> t;
		v[s].push_back(t);
		v[t].push_back(s);
	}
	cin >> q;
	fill(dp, dp + n, -1);
	f2();
	for (int I = 0; I < q; I++) {
		cin >> s >> t;
		if (dp[s] == dp[t]) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}

	return 0;
}