#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

int main() {
	int n; 
	while (cin >> n, n) {
		map<char, char>mp;
		rep(i, n) {
			char c, d; cin >> c >> d;
			mp[c] = d;
		}
		int m; cin >> m;
		string s = "";
		rep(i, m) {
			char c; cin >> c;
			if (mp[c] == 0)s += c;
			else s += mp[c];
		}
		cout << s << endl;
	}
	return 0;
}