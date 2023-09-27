#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;

ll T, n, a[205], res;
string s;
vector<ll> vt;
int main() {
	ll i, t;
	cin >> T;
	while(T--) {
		cin >> n;
		for(i=0; i<n; i++) cin >> a[i];
		cin >> s;
		res = 0;
		vt.clear();
		for(i=n-1; i>=0; i--) {
			if(s[i]=='0') {
				t = a[i];
				for(auto x:vt) t = min(t, t^x);
				if(t) vt.push_back(t);
			} else {
				t = a[i];
				for(auto x:vt) t = min(t, t^x);
				if(t) {res=1; break;}
			}
		}
		cout << res << endl;
	}
	return 0;
}