#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <unordered_map>
#include <map>
#include <set>
#include <algorithm>
#include <queue>
#include <stack>
#include <functional>
#include <bitset>
#include <assert.h>
#include <unordered_map>
#include <fstream>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef pair<ll,ll> P;
typedef pair<int,int> pii;
typedef vector<P> vpl;
typedef tuple<ll,ll,ll> tapu;
#define rep(i,n) for(int i=0; i<(n); i++)
#define REP(i,a,b) for(int i=(a); i<(b); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int inf = 1<<30;
const ll linf = 1LL<<62;
const int MAX = 510000;
ll dy[8] = {1,-1,0,0,1,-1,1,-1};
ll dx[8] = {0,0,1,-1,1,-1,-1,1};
const double pi = acos(-1);
const double eps = 1e-7;
template<typename T1,typename T2> inline bool chmin(T1 &a,T2 b){
	if(a>b){
		a = b; return true;
	}
	else return false;
}
template<typename T1,typename T2> inline bool chmax(T1 &a,T2 b){
	if(a<b){
		a = b; return true;
	}
	else return false;
}
template<typename T> inline void print(T &a){
    rep(i,a.size()) cout << a[i] << " ";
    cout << "\n";
}
template<typename T1,typename T2> inline void print2(T1 a, T2 b){cout << a << " " << b << "\n";}
template<typename T1,typename T2,typename T3> inline void print3(T1 a, T2 b, T3 c){
	cout << a << " " << b << " " << c << "\n";
}
const int mod = 1e9 + 7;
//const int mod = 998244353;

vector<ll> dijkstra(ll s, vector<vpl> &G, ll n){
	vl d(n,linf);
	d[s] = 0;
	priority_queue<P,vector<P>,greater<P>> pq;
	pq.emplace(0,s);
	while(!pq.empty()){
		auto p = pq.top(); pq.pop();
		ll u = p.second;
		if(d[u] < p.first) continue;
		for(auto v : G[u]){
			if(d[v.first] > d[u] + v.second){
				d[v.first] = d[u] + v.second;
				pq.emplace(d[v.first], v.first);
			}
		}
	}
	return d;
}

int main(){
	ll n,m,s; cin >> n >> m >> s;
	vector<vpl> G(n);
	rep(i,m){
		ll u,v,d; cin >> u >> v >> d;
		G[u].emplace_back(v,d);
	}
	auto dist = dijkstra(s,G,n);
	for(auto v : dist){
		if(v != linf) cout << v << "\n";
		else cout << "INF" << "\n";
	}
}
