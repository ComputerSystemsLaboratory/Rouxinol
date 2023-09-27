#include "bits/stdc++.h"
using namespace std;

#define rep(i,a,b) for(int i=(a), i##_len=(b);i<i##_len;i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)

//#define int long long
#define SZ(x) ((int)(x).size())
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;
typedef pair<double, double> pdd;

template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (b < a) { a = b; return true; } return false; }

const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;

struct Edge
{
	int s, t, cost;
	Edge(int s,int t,int cost):s(s),t(t),cost(cost){}
	Edge():Edge(-1,-1,-1){}
};

vector<Edge> G[100000];
int d[100000];
int V, E;

void shortest_path(int s)
{
	rep(i, 0, V)d[i] = INF;
	d[s] = 0;

	priority_queue<pii, vector<pii>, greater<pii>> pq;
	pq.push(mp(0, s));

	while (!pq.empty())
	{
		pii p = pq.top(); pq.pop();
		if (d[p.second] < p.first)
		{
			continue;
		}
		for (auto& e : G[p.second])
		{
			if (d[e.t] > d[e.s] + e.cost)
			{
				d[e.t] = d[e.s] + e.cost;
				pq.push(mp(d[e.t], e.t));
			}
		}
	}
}

signed main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int start;
	cin >> V >> E >> start;
	rep(i, 0, E)
	{
		int s, t, c;
		cin >> s >> t >> c;
		G[s].push_back(Edge(s, t, c));
		//G[t].push_back(Edge(t, s, c));
	}

	shortest_path(start);

	rep(i, 0, V)
	{
		printf(d[i] == INF ? "INF\n" : "%d\n", d[i]);
	}
	
	return 0;
}
