//雪花飄飄北風嘯嘯
//天地一片蒼茫

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/rope>
using namespace std;
using namespace __gnu_pbds;
using namespace __gnu_cxx;
#define ll long long
#define ii pair<ll,ll>
#define iii pair<ii,ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << " is " << x << endl;

#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()

ll MAX(ll a){return a;}
ll MIN(ll a){return a;}
template<typename... Args>
ll MAX(ll a,Args... args){return max(a,MAX(args...));}
template<typename... Args>
ll MIN(ll a,Args... args){return min(a,MIN(args...));}

#define indexed_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>

mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

int n;
ll c[26];
ll d[400][26];

vector<int> curr;

ll calc(){
	ll last[26];
	
	memset(last,-1,sizeof(last));
	
	ll res=0;
	rep(x,0,n){
		res+=d[x][curr[x]];
		last[curr[x]]=x;
		
		rep(y,0,26) res-=c[y]*(x-last[y]);
		
		cout<<res<<endl;
	}
	
	return res;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	rep(x,0,26) cin>>c[x];
	
	rep(x,0,n){
		rep(y,0,26) cin>>d[x][y];
	}
	
	
	rep(x,0,n){
		int t;
		cin>>t;
		curr.push_back(t-1);
	}
	
	calc();
}
