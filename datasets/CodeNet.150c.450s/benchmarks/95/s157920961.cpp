#include "bits/stdc++.h"
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	while (cin >> n, n) {
		int ans = 0;
		bool lf = false, rf = false;
		bool f = false;
		for (int i = 0; i < n;i++) {
			string F; cin >> F;
			if (F == "lu") lf = true;
			if (F == "ru") rf = true;
			if (F == "ld") lf = false;
			if (F == "rd") rf = false;

			if (lf == rf) {
				if (f != lf) {
					ans++;
					f = lf;
				}
			}
		}
		cout << ans << endl;
	}
}