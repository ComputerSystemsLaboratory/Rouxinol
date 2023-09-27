#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
#define EPS 1e-10
using namespace std;
typedef long long llong;
int main() {
	int n;
	int dx[] = { -1,0,1,0 };
	int dy[] = { 0,-1,0,1 };
	while (cin >> n, n) {
		vector<int>x(n, 0), y(n, 0);
		for (int i = 1; i < n; i++) {
			int where, tmp;
			cin >> where >> tmp;
			x[i] = x[where] + dx[tmp];
			y[i] = y[where] + dy[tmp];
				
		}
		sort(x.begin(), x.end());
		sort(y.begin(), y.end());
		cout << x[n - 1] - x[0] + 1 << " " << y[n - 1] - y[0] + 1 << endl;
	}
	return 0;
}