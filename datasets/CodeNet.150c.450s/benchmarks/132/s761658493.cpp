#include <bits/stdc++.h>

using namespace std;

int n, p;
int peb[55];

void solve() {
	int c = 0;
	int p_ = p;
	
	while (1) {
		if (p_ == 0) {
			p_ += peb[c];
			peb[c] = 0;
			c++;
		} else {
			peb[c]++;
			if (peb[c] == p) break;
			p_--;
			c++;
		}
		
		c %= n;
	}
	
	cout << c << endl;
}

int main() {
	while (1) {
		cin >> n >> p; if (n == 0 && p == 0) break;
		memset(peb, 0, sizeof(peb));
		solve();
	}
	
	return 0;
}