#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ll long long

using namespace std;

int main()
{
	ll n, m;
	while(cin >> n >> m, n > 0){
		ll ans=0;
		vector<pair<int, int>> pd;
		rep(i, n){
			int p, d;
			cin >> d >> p;
			pd.push_back(make_pair(p, d));
		}
		sort(pd.rbegin(), pd.rend());
		for(auto itr=pd.begin(); itr!=pd.end(); itr++){
			if (m >= itr->second){
				m -= itr->second;
			}else{
				ans += itr->first*(itr->second-m);
				m = 0;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
