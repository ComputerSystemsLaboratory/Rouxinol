#include <bits/stdc++.h>

using namespace std;

int n, m;
int t[110], h[110];
int tsum, hsum;

void solve() {
	int minSum = (int)1e9;
	int tg = -1, hg = -1;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (tsum - t[i] + h[j] == hsum - h[j] + t[i]) {
				if (minSum > t[i] + h[j]) {
					minSum = t[i] + h[j];
					tg = t[i];
					hg = h[j];
				}
			}
		}
	}
	
	if (tg == -1) cout << -1 << endl;
	else {
		cout << tg << " " << hg << endl;
	}
}

int main() {
	while (1) {
		cin >> n >> m; if (n == 0 && m == 0) break;
		
		tsum = hsum = 0;
		for (int i = 0; i < n; i++) {
			cin >> t[i];
			tsum += t[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> h[i];
			hsum += h[i];
		}
		
		solve();
	}	
	
	return 0;
}