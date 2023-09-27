#include <bits/stdc++.h>
using namespace std;
#define FOR(i,k,n) for(int i = (int)(k); i < (int)(n); i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) a.begin(), a.end()
#define MS(m,v) memset(m,v,sizeof(m))
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

struct UnionFind
{
	vector<int> par;
	UnionFind(int n) 
	{
		par.resize(n);
		REP(i, n) par[i] = i;
	}
	int find(int x) { return par[x] == x ? x : par[x] = find(par[x]); }
	void unite(int x, int y)
	{
		x = find(x); y = find(y);
		if (x == y) return;
		par[y] = x;
		//if (find(x) != find(y)) par[find(y)] = x;
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
	cin.sync_with_stdio(false); cout << fixed << setprecision(10);
	//int n, q;
	//cin >> n >> q;
	//UnionFind even(n);
	//vi odd(n, -1);
	//REP(i, q)
	//{
	//	int w, a, b, c;
	//	cin >> w >> a >> b >> c;
	//	a--; b--; c %= 2;
	//	if (w == 1)
	//	{
	//		if (c == 0)
	//		{
	//			even.unite(a, b);
	//		}
	//		else
	//		{

	//		}
	//	}
	//	else
	//	{
	//		if (even.same(a, b)) cout << "YES" << endl;
	//		else cout << "NO" << endl;
	//	}
	//}
	int n, q;
	cin >> n >> q;
	UnionFind uf(n);
	REP(i, q)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0) uf.unite(b, c);
		else
		{
			cout << uf.same(b, c) << endl;
		}
	}
	return 0;
}