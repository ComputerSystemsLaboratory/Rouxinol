#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define REP(i,n) for(ll (i) = (0);(i) < (n);++i)
#define REV(i,n) for(ll (i) = (n) - 1;(i) >= 0;--i)
#define PB push_back

typedef long long ll;

void solve() {
	ll n;cin >> n;
	vector<ll> v(n);REP(i, n)cin >> v[i];
	string str;cin >> str;

	vector<ll> mp;
	REV(i, n){
		REP(j, mp.size())v[i] = min(v[i], v[i] ^ mp[j]);
		if(v[i] == 0)continue;
		if(str[i] == '1'){
			cout << 1 << endl;
			return;
		}
		mp.PB(v[i]);
	}
	cout << 0 << endl;
}

int main(){
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);

	ll t;cin >> t;
	REP(i, t)solve();

	return 0;
}
