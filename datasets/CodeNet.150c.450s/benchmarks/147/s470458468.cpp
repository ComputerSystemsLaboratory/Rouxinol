#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	vector<int> R(n, 0);
	int m = 1000;
	for (int x=1; x<m; x++) {
		for (int y=1; y<m; y++) {
			for (int z=1; z<m; z++) {
				int c = x*x + y*y + z*z + x*y + y*z + z*x;
				if (c>n) continue;
				R[c-1]++;
			}
		}
	}
	for (int i=0; i<n; i++) {
		cout << R[i] << endl;
	}
	return 0;
}