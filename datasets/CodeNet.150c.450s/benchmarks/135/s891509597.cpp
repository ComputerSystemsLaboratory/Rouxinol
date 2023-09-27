#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, s, n) for(int i = s; i < n; ++i)
#define rep(i, n)		 REP(i, 0, n)
#define SORT(c)			 sort((c).begin(), (c).end())
#define IINF	INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false
 
typedef long long				ll;
typedef pair <int, int> ii;
 
/*
struct point{
	ll x;
	ll y;
	point(){x = 0;y = 0;}
	point(ll x, ll y):x(x), y(y){}
};
*/

int main() {

	int w, h;
	while(cin >> w >> h, w, h){
		vector<ll> tate(w), yoko(h);
		map<ll, ii> mp;
		rep(i, w) {
			cin >> tate[i];
			mp[tate[i]].first++;
		}
		rep(i, h) {
			cin >> yoko[i];
			mp[yoko[i]].second++;
		}
		rep(i, w){
			ll tmp = tate[i];
			REP(j, i+1, w){
				tmp += tate[j];
				mp[tmp].first++;
			}
		}
		rep(i, h){
			ll tmp = yoko[i];
			REP(j, i+1, h){
				tmp += yoko[j];
				mp[tmp].second++;
			}
		}
		
		/*
		for(auto it = mp.begin(); it != mp.end(); ++it){
			cout << it-> first << "\t" << it->second.first << "\t" << it->second.second << endl;
		}
		cout << endl;
		*/
		
		ll ans = 0;
		for(auto it = mp.begin(); it != mp.end(); ++it){
			ans += (it->second.first * it->second.second);
		}
		
		cout << ans << endl;
	}

	return 0;
}