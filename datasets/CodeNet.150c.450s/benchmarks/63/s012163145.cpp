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
typedef pair<ll, ll> llP;
typedef pair<int, int> intP;
typedef complex<double> comp;
typedef vector <int> vec;
typedef vector <ll> vecll;
typedef vector <double> vecd;
typedef vector <vec> mat;
typedef vector <vecll> matll;
typedef vector <vecd> matd;

//vector の中身を出力
template <class T>ostream &operator<<(ostream &o,const vector<T>&v)
{o<<"{";for(int i=0;i<(int)v.size();i++)o<<(i>0?", ":"")<<v[i];o<<"}";return o;}

const int MAX = 200000;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = 1<<29;
const ll INFL = 1e18;
const int MOD = 1000000007;

int dx4[4]={1,0,-1,0};
int dy4[4]={0,1,0,-1};
int dx8[8]={1,0,-1,1,-1,1,0,-1};
int dy8[8]={1,1,1,0,0,-1,-1,-1};

//************************************************************************//

struct Dijkstra
{
	//距離の型を決めよう！！！！！！！！！！！！！
	typedef ll dType;
	typedef pair<dType, int> P;

	struct edge{int to; dType cost;};

	//始点からの距離
	vector <dType> dis;
	//隣接リスト
	vector <vector <edge>> adj;

	Dijkstra(int N) : dis(N, INFL), adj(N){}

	void add_edge(int s, int t, dType cost, bool isdirected = 0)
	{
		adj[s].pb((edge{t, cost}));
		if (!isdirected)
		{
			adj[t].pb((edge{s, cost}));
		}
	}

	void calc(int s)
	{
		dis[s] = 0;
		priority_queue<P, vector<P>, greater<P>> q;

		q.push(P(0, s));

		while(!q.empty())
		{
			P p = q.top(); q.pop();
			int now = p.snd;
			if (dis[now] < p.fst)
			{
				continue;
			}
			for (edge e : adj[now])
			{
				if (dis[e.to] > dis[now] + e.cost)
				{
					dis[e.to] = dis[now] + e.cost;
					q.push(P(dis[e.to], e.to));
				}
			}
		}
	}

};



//************************************************************************//

//********************************template END****************************************//

//aoj 単一始点最短経路
void solve(void){

	int V, E, r;
	cin >> V >> E >> r;

	Dijkstra dijkstra(V);

	while(E--)
	{
		int s, g; ll c;
		cin >> s >> g >> c;
		dijkstra.add_edge(s, g, c, 1);
	}
	dijkstra.calc(r);
	rep(V, i)
	{
		ll dis = dijkstra.dis[i];
		if (dis == INFL)
		{
			cout << "INF" << endl;
		}
		else
		{
			cout << dis << endl;
		}
	}
}

int main(void){
	solve();
	//cout << "yui(*-v・)yui" << endl;
	return 0;
}

