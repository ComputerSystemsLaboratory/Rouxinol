#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	string s;
	while (cin >> s, s != "-") {
		int m; cin >> m;
		rep(i, m) {
			int h; cin >> h;
			s = s.substr(h) + s.substr(0, h);
		}
		cout << s << endl;
	}
}