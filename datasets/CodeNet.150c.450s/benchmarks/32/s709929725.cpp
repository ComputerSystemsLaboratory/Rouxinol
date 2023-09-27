#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)

int main() {
	int m, n_min, n_max;
	while (1) {
		cin >> m >> n_min >> n_max;
		if (m == 0) break;
		
		vector< int > p(m);
		for_(i,0,m) cin >> p[i];
		
		int ans = 0, max_diff = 0;
		for_(i,n_min,n_max+1) {
			int diff = p[i-1] - p[i];
			if (max_diff <= diff) {
				max_diff = diff;
				ans = i;
			}
		}
		cout << ans << endl;
	}
}