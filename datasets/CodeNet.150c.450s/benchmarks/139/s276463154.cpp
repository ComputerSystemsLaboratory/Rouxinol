#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
#define all(x) x.begin(),x.end()
#define rep(i,j,n) for (int i = j; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
#define n_p(v) next_permutation(v.begin(),v.end())
#define to_ll(b) stoll(b)
#define MOD 1000000007
//name[i][j]-> vvl name(i,vl(j))
//map<int,int>mp

signed main(){
	ll n,m; cin>>n>>m;
	vvl g(n,vl(0));
	vl ans(n);
	vector<bool> seen(n);
	rep(i,0,m){
		ll a,b; cin>>a>>b;
		--a; --b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	queue<ll> q;
	q.push(0);
	while(!q.empty()){
		ll k=q.front(); q.pop();
		for(ll c:g[k]){
			if(seen[c])continue;
			seen[c]=true;
			ans[c]=k;
			q.push(c);
		}
	}
	cout<<"Yes"<<endl;
	rep(i,1,n)cout<<ans[i]+1<<endl;
	
	
	return 0;
}