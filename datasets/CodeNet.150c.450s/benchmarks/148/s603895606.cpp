#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0;i<(ll)n;++i)
using P = pair<ll,ll>;

int main() {
	ll n;cin >> n;
	vector<string> s = {"AC","WA","TLE","RE"};
	vector<ll> ans(4);
	rep(i,n){
		string t;cin >> t;
		rep(j,4) if( t == s.at(j) ){
			ans.at(j)++;
			break;
		}
	}
	rep(i,4){
		cout << s.at(i) << " x " << ans.at(i) << endl;
	}
	return 0;
}
