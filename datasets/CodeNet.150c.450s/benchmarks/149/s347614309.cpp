#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define len(n) (int)n.length()
#define pb push_back
#define ll long long
#define make_pair mkp
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n-1;i >= 0;i--)
#define ALL(v) (v).begin(), (v).end()
#ifdef DBGPRT
#define dbg(n) cerr << "//" << #n << ":" << n <<endl
#else
#define dbg(n) ;
#endif
typedef pair<ll, ll> LLARR;
#define INF 999999999
const double PI = 3.1415926535897932384626433832795;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

/// ??????????´???????????????????????????????
class DisjointSet
{
public:
	vector<int> rank, p;
	DisjointSet(int n)
	{
		p.resize(n,0);
		rank.resize(n,0);
		REP(i, n)
		{
			p[i] = i;
			rank[i] = 0;
		}
	}
	
	int FindSet(int i)
	{
		if (p[i] != i)
		{
			/// ????????§???
			p[i] = FindSet(p[i]);
		}
		return p[i];
	}
	
	bool isSame(int x, int y)
	{
		return (FindSet(p[x]) == FindSet(p[y]));
	}
	
	void Link(int x, int y)
	{
		if (rank[x] > rank[y])
		{
			p[y] = x;
		}
		else
		{
			p[x] = y;
			if (rank[x] == rank[y])
			{
				rank[y]++;
			}
		}
	}
	
	void Unite(int x, int y)
	{
		Link(FindSet(x), FindSet(y));
	}
};


int main()
{
	ios::sync_with_stdio(false);

	int n, q;
	cin >> n;
	DisjointSet d(n);
	cin >> q;
	REP(i, q)
	{
		int c, x, y;
		cin >> c >> x >> y;
		if (c == 0)
			d.Unite(x,y);
		else
		{
			cout << ( d.isSame(x,y) ? 1 : 0 ) << endl;
		}
	}
	return 0;
}