#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

typedef long long ll;

int a[100000] = {};

signed main() {
	int k;
	int n;
	
	while (true) {
		cin >> n >> k;
		if (n == 0 && k == 0) return 0;
			for (int i = 0; i < n; i++) {
				cin >> a[i];
			}

			int m = -9999999999;
			int tmp = 0;
			int cnt = 0;

			for (int i = 0; i < n; i++) {
				if (i < k) {
					tmp += a[i];
				}
				else {
					tmp -= a[i - k];
					tmp += a[i];
					m = max(m, tmp);
				}
			}

			cout << m << endl;
		
	}
	return 0;
}