#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("unroll-loops") 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#define int long long
#define fr(i,a,b) for(int i = a ; i <= b ; ++i)
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define fst first
#define snd second
using namespace __gnu_pbds;
using ordered_set =
 tree<int, null_type,less<int>,
 rb_tree_tag,tree_order_statistics_node_update>;
//find_by_order(k):returns iterator to kth element starting from 0
//order_of_key(k):returns count of elements strictly smaller than k
typedef long long ll;typedef pair<int, int> pii;
typedef vector<int> vi;typedef long double ld;
template<class T>
using min_heap = priority_queue<T,vector<T>,greater<T>>; 
template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);}
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));}
template<class T> void re(T& x) { cin >> x; }
template<typename T> 
void remdup(vector<T>& v) {												
	sort(all(v)); v.erase(unique(all(v)), v.end());
}
template<typename T> void re(vector<T> &v) {trav(i,v) cin >> i;}
template<class H, class... T> void re(H& h, T&... t) { re(h); re(t...); }
void unsyncIO() { ios_base::sync_with_stdio(0); cin.tie(0); }
#ifdef np
#include "/home/wjex/cp/pr.h"
#else
#define trace(...)
#endif

#define MOD 1000000007  


const int N = 2e5+5;
vi g[N+1];
void solve(){
	int n ,  m; 
	re(n,m);
	rep(i,0,m){
		int a ,b ;
		re(a,b);
		a--;
		b--;
		g[a].pb(b);
		g[b].pb(a);
	}
	vi vis(n,-1);
	queue<int>q;
	q.push(0);
	vis[0]=0;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		trav(i,g[u]){
			if(vis[i] >= 0 ) continue;
			vis[i] = u ;
			q.push(i);
		}
	}
	trace(vis);
	bool done = 0 ;
	rep(i,0,n){
		if(vis[i] < 0) done =1 ;
	}
	if(done){
		cout << "No\n";
		return; 
	}
	cout << "Yes\n";
	fr(i,1,n-1){
		cout << vis[i]+1 << endl;
	}
	
}

signed main() {
	unsyncIO();
	int tt =1 ;
	//cin >> tt;
	rep(i,0,tt) solve();













#ifdef np
	cout <<endl<<endl<< "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
