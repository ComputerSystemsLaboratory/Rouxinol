#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false
 
typedef long long ll;
typedef pair<int, int> ii;

int main() {
	
	ll n, m;
	while(cin >> n >> m, n){
		vector<ll> h(n);
		vector<ll> w(m);
		map<ll, ll> mp_h, mp_w;
		rep(i, n){
			cin >> h[i];
			mp_h[h[i]]++;
		}
		rep(i, m){
			cin >> w[i];
			mp_w[w[i]]++;
		}
		
		rep(i, n){
			ll tmp = h[i];
			for(int j = i + 1; j < n; j++){
				tmp += h[j];
				mp_h[tmp]++;
			}
		}
		
		rep(i, m){
			ll tmp = w[i];
			for(int j = i + 1; j < m; j++){
				tmp += w[j];
				mp_w[tmp]++;
			}
		}
		
		ll ans = 0;
		for(auto it : mp_h){
			ans += (it.second * mp_w[it.first]);
		}
		cout << ans << endl;
	}
	
	return 0;
}
