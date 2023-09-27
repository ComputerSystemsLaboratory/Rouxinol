#include "bits/stdc++.h"
using namespace std;

#define rep(i,a,b) for(int i=(a), i##_len=(b);i<i##_len;i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)

#define int long long
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

int d[100][100];
int V, E;

void shortest_path()
{
	rep(k, 0, V)rep(i, 0, V)rep(j, 0, V)if (d[i][k] != INF&&d[k][j] != INF)d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}

signed main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int start;
	cin >> V >> E;

	rep(i, 0, V)rep(j, 0, V)if (i != j)d[i][j] = INF;

	rep(i, 0, E)
	{
		int s, t, c;
		cin >> s >> t >> c;
		d[s][t] = c;
		//G[s].push_back(Edge(s, t, c));
		//G[t].push_back(Edge(t, s, c));
	}

	shortest_path();

	rep(i, 0, V)if (d[i][i] < 0)
	{
		cout << "NEGATIVE CYCLE" << endl;
		return 0;
	}

	rep(i, 0, V)
	{
		rep(j, 0, V)
		{
			if (j != 0)
			{
				printf(" ");
			}
			printf(d[i][j] == INF ? "INF" : "%lld", d[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
