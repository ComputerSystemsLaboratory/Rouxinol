#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using pl = pair<ll,ll>;
using pi = pair<int,int>;
#define all(x) x.begin(),x.end()
#define rep(i,j,n) for (long long i = j; i < (long long)(n); i++)
#define _GLIBCXX_DEBUG
const ll MOD = 1000000007;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//(a+b-1)/b
//priority_queue<ll, vector<ll>, greater<ll>> q;

signed main(){
	//cout << fixed << setprecision(10);
    int n; cin >> n;
	ll now = 0;
	map<int,int> mp;
	rep(i,0,n){
		int a; cin >> a;
		now += a;
		mp[a]++;
	}
	int q; cin >> q;
	while(q--){
		int b,c; cin >> b >> c;
		now += (c - b) * mp[b];
		mp[c] += mp[b];
		mp[b] = 0;
		cout << now << endl;
	}

	return 0;
}