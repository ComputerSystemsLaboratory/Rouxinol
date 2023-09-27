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
#define mod 200003
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//(a+b-1)/b
//priority_queue<ll, vector<ll>, greater<ll>> q;
using pl = pair<ll,ll>;
using vvb=vector<vector<bool>>;
using vb= vector<bool>;
ll f(ll a,ll b,ll p){
	if(b==0) return 1;
	if(b%2==0){
		ll t=f(a,b/2,p);
		return t*t%p;
	}
	return a*(f(a,b-1,p))%p;
} 

//__builtin_popcount()
signed main(){
	ll n,m; cin>>n>>m;
	vl g[n];
	rep(i,0,m){
		ll a,b; cin>>a>>b;
		--a; --b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	vl ans(n+10);
	queue<ll> q;
	q.push(0);
	vector<bool> seen(n);
	seen[0]=1;
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