#include "bits/stdc++.h"
using namespace std;
int main() {
	int n;
	while (cin>>n,n) {
		string s;
		bool up = 0;
		bool l = 0, r = 0;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			cin >> s;
			if (s == "lu") {
				if (r) {
					if (!up) ans++;
					up = 1;
				}
				l = 1;
			}
			else if (s == "ru") {
				if (l) {
					if (!up) ans++;
					up = 1;
				}
				r = 1;
			}
			else if (s == "ld") {
				if (!r) {
					if (up) ans++;
					up = 0;
				}
				l = 0;
			}
			else {
				if (!l) {
					if (up) ans++;
					up = 0;
				}
				r = 0;
			}
		}
		cout << ans << endl;
	}
}