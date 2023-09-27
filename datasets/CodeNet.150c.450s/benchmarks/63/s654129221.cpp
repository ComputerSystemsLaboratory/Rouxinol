/*

Single Source Shortest Path I(https://onlinejudge.u-aizu.ac.jp/problems/GRL_1_A)

*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <cmath>
#include <complex>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cassert>
#include <iomanip>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define Repr(e, b, i) for(int i = e; i >= b; i--)
#define rep(n, i) Rep(0, n-1, i)
#define repr(n, i) Repr(n-1, 0, i)
#define all(v) (v).begin(), (v).end()
#define pb(v) push_back(v)
#define uniq(v) (v).erase(unique(all(v)),(v).end())
#define bitcnt(x) __builtin_popcount(x)
#define fst first
#define snd second
#define Pqaz(T) priority_queue<T,vector<T>,greater<T>>
#define Pqza(T) priority_queue<T>
#define put(x) cout << x;
#define putsp(x) cout << x << ' ';
#define putln(x) cout << x << endl;
#define ENJYU std::ios::sync_with_stdio(false);std::cin.tie(0);

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<int, int> intP;
typedef complex<double> comp;
typedef vector <int> vec;
typedef vector <ll> vecll;
typedef vector <double> vecd;
typedef vector <vec> mat;
typedef vector <vecll> matll;
typedef vector <vecll> matd;

//vector の中身を出力
template <class T>ostream &operator<<(ostream &o,const vector<T>&v)
{o<<"{";for(int i=0;i<(int)v.size();i++)o<<(i>0?", ":"")<<v[i];o<<"}";return o;}


//最大の頂点数
const int MAX_V = 100010;
const ll INF = 1e18;

struct edge{ll to, cost;};

//V := number of nodes
//G := adj
int V;
vector<edge> G[MAX_V];
ll d[MAX_V];

void dijkstra(int s){
	priority_queue<P, vector<P>, greater<P> > que;
	fill(d, d+V, INF);
	d[s] = 0;
	que.push(P(0, s));

	while (!que.empty()) {
		P p = que.top(); que.pop();
		int v = p.second;
		if (d[v] < p.first) continue;
		rep((int)G[v].size(), i) {
			edge e = G[v][i];
			if (d[e.to] > d[v] + e.cost) {
				d[e.to] = d[v] + e.cost;
				que.push(P(d[e.to], e.to));
			}
		}
	}
}

void solve(void){
	int E, r;
	cin >> V >> E >> r;

	while(E--)
	{
		ll s, t, d;
		cin >> s >> t >> d;
		G[s].pb((edge{t, d}));
	}

	dijkstra(r);

	rep(V, i)
	{
		if (d[i] == INF)
		{
			cout << "INF" << endl;
			continue;
		}
		cout << d[i] << endl;
	}


}

int main(void){
	solve();
	//cout << "yui(*-v・)yui" << endl;
	return 0;
}

