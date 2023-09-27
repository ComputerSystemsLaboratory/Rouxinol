#include <bits/stdc++.h>

#define ALL(a) (a).begin(), (a).end()
#define ll long long

const ll INF = (ll)1e10;

using namespace std;

signed main(){
	int n; cin >> n;
	vector<ll> a(n,0);
	for(auto &e : a)cin >> e;
	vector<ll> dp(n,INF);
	for(auto e : a){
		auto lb = lower_bound(ALL(dp), e);
		*lb = e;
	}
	cout << distance(dp.begin(), lower_bound(ALL(dp),INF)) << endl;

	return 0;
}


