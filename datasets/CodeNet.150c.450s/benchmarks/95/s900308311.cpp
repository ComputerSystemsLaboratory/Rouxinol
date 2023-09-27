#include "bits/stdc++.h"
using namespace std;

#define rep(i,a,b) for(int i=(a);i<(b);i++)

int main() {
	for (int n; cin >> n && n;) {
		vector<string> f(n);

		rep(i, 0, n)cin >> f[i];

		int cnt = 0;
		bool l = false, r = false;
		bool u = false;
		rep(i, 0, n) {
			if (f[i] == "lu")
				l = true;
			if (f[i] == "ld")
				l = false;
			if (f[i] == "ru")
				r = true;
			if (f[i] == "rd")
				r = false;
			if (!u && l && r) {
				cnt++;
				u = true;
			}
			else if (u && !l && !r) {
				cnt++;
				u = false;
			}
		}
		cout << cnt << endl;
	}
}
