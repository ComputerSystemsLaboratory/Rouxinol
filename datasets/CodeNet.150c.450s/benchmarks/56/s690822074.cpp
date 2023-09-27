#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <math.h>

using namespace std;

typedef long long ll;

int main() {
	int n; cin >> n;
	if (n) {
		int m; cin >> m;
		int M = m;
		ll sum = m;
		for (int i = 1; i < n; ++i) {
			int v; cin >> v;
			m = min(m, v);
			sum += v;
			M = max(M, v);
		}
		cout << m << " " << M << " " << sum << endl;
	}
	else {
		cout << 1000000 << " " << (-1000000) << " " << 0 << endl;
	}
}