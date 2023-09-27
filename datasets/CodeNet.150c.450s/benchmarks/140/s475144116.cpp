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

struct UnionFind
{
	vector<int> parent;
	vector<int> rank;

	UnionFind(int N) :parent(N, 0), rank(N, 0)
	{
		rep(i, 0, N)
		{
			parent[i] = i;
		}
	}

	int find(int x)
	{
		if (parent[x] == x)
		{
			return x;
		}
		else
		{
			return parent[x] = find(parent[x]);
		}
	}

	void unite(int x, int y)
	{
		x = find(x);
		y = find(y);

		if (x == y)
		{
			return;
		}

		if (rank[x] < rank[y])
		{
			parent[x] = y;
		}
		else
		{
			parent[y] = x;
			if (rank[x] == rank[y])
			{
				rank[x]++;
			}
		}
	}

	bool same(int x, int y)
	{
		return find(x) == find(y);
	}
};

struct Edge
{
	int s, t, cost;
	Edge(int s, int t, int cost) :s(s), t(t), cost(cost) {}
	Edge() :Edge(-1, -1, -1) {}
	bool operator<(const Edge& e)const
	{
		return cost < e.cost;
	}
};

Edge edges[100000];
int V, E;

int minimum_spaning_tree()
{
	sort(edges, edges + E);
	UnionFind uf(V);

	int ans = 0;
	rep(i,0,E)
	{
		Edge edge = edges[i];
		if (!uf.same(edge.s, edge.t))
		{
			ans += edge.cost;
			uf.unite(edge.s, edge.t);
		}
	}

	return ans;
}

signed main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int start, to;
	cin >> V >> E;

	rep(i, 0, E)
	{
		int s, t, c;
		cin >> s >> t >> c;
		edges[i] = Edge(s, t, c);
		//G[s].push_back(Edge(s, t, c));
		//G[t].push_back(Edge(t, s, c));
	}

	cout << minimum_spaning_tree() << endl;

	return 0;
}
