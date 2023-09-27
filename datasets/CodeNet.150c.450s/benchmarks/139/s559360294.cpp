#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<n; i++)
#define rep2(i, n) for(int i=2; i<=n; i++)

int main() {
	int N, M;
	cin >> N >> M;
	vector<vector<int>> vv(N+1);
	int a=0, b=0, c=0, x, y, z;
	rep(i, M) {
		cin >> x >> y;
		vv.at(x).push_back(y);
		vv.at(y).push_back(x);
	}
	vector<int> v(N+1);
	rep(i, N+1) {
		v.at(i) = 0;
	}
	queue<int> Q;
	Q.push(1);
	while (!Q.empty()) {
		z = Q.front();
		Q.pop();
		rep(i, vv.at(z).size()) {
			a = vv.at(z).at(i);
			if (v.at(a) == 0) {
				v.at(a) = z;
				Q.push(a);
			}
		}
	}
	cout << "Yes" << '\n';
	rep2(i, N) {
		cout << v.at(i) << '\n';
	}
}
