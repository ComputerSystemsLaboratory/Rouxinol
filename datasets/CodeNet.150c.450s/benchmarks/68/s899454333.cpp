#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
#define EPS 1e-10
using namespace std;
typedef long long llong;
int main() {
	int n;
	while (cin >> n, n) {
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];
		sort(v.begin(), v.end());
		int a = 100000000;
		for (int i = 1; i < n; i++) {
			a = min(a, abs(v[i] - v[i - 1]));
		}
		cout << a << endl;
	}
	return 0;
}