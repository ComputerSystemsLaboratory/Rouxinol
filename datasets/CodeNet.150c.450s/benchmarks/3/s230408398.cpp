#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	string s; cin >> s;
	int q; cin >> q;
	rep(i, q) {
		string t; cin >> t;
		if (t == "print") {
			int a, b; cin >> a >> b;
			cout << s.substr(a, b - a + 1) << endl;
		}
		if (t == "reverse") {
			int a, b; cin >> a >> b;
			reverse(s.begin() + a, s.begin() + b + 1);
		}
		if (t == "replace") {
			int a, b; string p; cin >> a >> b >> p;
			s.replace(a, b - a + 1, p);
		}
	}
}