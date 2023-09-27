#include <bits/stdc++.h>
using namespace std;
#define FOR(i,k,n) for(int i = (int)(k); i < (int)(n); i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) a.begin(), a.end()
#define MS(m,v) memset(m,v,sizeof(m))
#define D10 fixed<<setprecision(10)
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
const int MOD = 1000000007;
const int INF = MOD + 1;
const ld EPS = 1e-12;
template<class T> T &chmin(T &a, const T &b) { return a = min(a, b); }
template<class T> T &chmax(T &a, const T &b) { return a = max(a, b); }

/*--------------------template--------------------*/
const int dx[] = { -1, 0, 0, 1 }, dy[] = { 0, -1, 1, 0 };
//[const int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 }, dy[] = { 0, -1, 1, -1, 1, 0, -1, 1 };
bool valid(int x, int y, int h, int w) { return (x >= 0 && y >= 0 && x < h&&y < w); }
int place(int x, int y, int w) { return w*x + y; }

struct UnionFind
{
	vector<int> par;
	UnionFind(int n) :par(n, -1) {}
	int find(int x) { return par[x] < 0 ? x : par[x] = find(par[x]); }
	void unite(int x, int y)
	{
		x = find(x); y = find(y);
		if (x == y) return;
		if (par[y] < par[x]) swap(x, y);
		if (par[x] == par[y]) par[x]--;
		par[y] = x;
		if (find(x) != find(y)) par[find(y)] = x;
	}
	int count()
	{
		int cnt = 0;
		REP(i, par.size()) if (par[i] < 0) cnt++;
		return cnt;
	}
	bool same(int x, int y)
	{
		return find(x) == find(y);
	}
};


int main()
{
	cin.sync_with_stdio(false);
	int h, w;
	while (cin >> w >> h, h)
	{
		vs fld(h);
		REP(i, h) cin >> fld[i];
		int st;
		REP(i, h)REP(j, w)
		{
			if (fld[i][j] == '@')
			{
				st = place(i, j, w);
				fld[i][j] = '.';
			}
		}
		UnionFind uf(h*w);
		REP(i, h)REP(j, w)
		{
			if (fld[i][j] == '#') continue;
			REP(k, 4)
			{
				int nx = i + dx[k], ny = j + dy[k];
				if (!valid(nx, ny, h, w) || fld[nx][ny] == '#') continue;
				uf.unite(place(i, j, w), place(nx, ny, w));
			}
		}
		int cnt = 0;
		REP(i, h*w)
		{
			if (uf.same(i, st)) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}