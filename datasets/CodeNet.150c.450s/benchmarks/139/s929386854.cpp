#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
#define all(x) x.begin(),x.end()
#define rep(i,j,n) for (long long i = j; i < (long long)(n); i++)
#define _GLIBCXX_DEBUG
#define MOD 1000000007
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//(a+b-1)/b
using pl = pair<ll,ll>;
signed main(){
	ll n,m; cin>>n>>m;
	vvl g(n,vl(0));
	rep(i,0,m){
		ll a,b; cin>>a>>b;
		--a; --b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	vl ans(n);
	vector<bool> seen(n);
	seen[0]=1;
	queue<ll> q;
	q.push(0);
	while(!q.empty()){
		ll k=q.front(); q.pop();
		for(auto c:g[k]){
			if(seen[c])continue;
			seen[c]=1;
			ans[c]=k;
			q.push(c);
		}
	}
	cout<<"Yes"<<endl;
	rep(i,1,n)cout<<ans[i]+1<<endl;

	return 0;
}