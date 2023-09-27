#include <bits/stdc++.h>
using namespace std;
#define dhoom ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  
typedef long long ll;
typedef pair<ll,ll> pll;
const ll inf = 99999999999;
const int nax = 2e6 + 7;
int n , m;
vector< pair< ll , pair< ll , ll > >  > edges;
int main(){
	dhoom;
	int v , e , s;
	cin >> v >> e >> s;
	for(int i = 0 ; i < e ; i++){
			int u , x , w;
			cin >> u >> x >> w;
			edges.push_back({u , {x, w}});
	}
	ll dis[v];
	for(int i = 0 ; i < v ; i++)
		dis[i] = inf;
	dis[s] = 0;
	for(int i = 0 ; i < v - 1; i++){
		for(int j = 0 ; j < e ; j++){
			ll x = edges[j].first;
			ll y = edges[j].second.first;
			ll wt = edges[j].second.second;
			if(dis[x] < inf)
				dis[y] = min(dis[y] , dis[x] + wt);
		}
	}
	for(int j = 0 ; j < e ; j++){
		ll x = edges[j].first;
		ll y = edges[j].second.first;
		ll wt = edges[j].second.second;
		if(dis[x]!= inf && dis[x] + wt < dis[y])
			return cout << "NEGATIVE CYCLE\n",0;
	}
	for(int i = 0 ; i < v ;i++){
		if(dis[i] == inf)
				cout << "INF" << endl;
	    else 
				cout << dis[i] << endl;
		
	}
    return 0;
}


