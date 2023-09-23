#include "bits/stdc++.h"

/*#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdlib>
#include <deque>
#include <algorithm>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <iterator>*/

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

int d[50][50];

signed main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	while (true)
	{
		int n;
		cin >> n;
		if (n == 0)
		{
			break;
		}
		rep(i, 0, 50)rep(j, 0, 50)if (i != j)d[i][j] = INF;

		int a, b, c;
		int vn = 0;
		rep(i, 0, n)
		{
			cin >> a >> b >> c;
			d[a][b] = c;
			d[b][a] = c;
			chmax(vn, max(a, b) + 1);
		}

		rep(k, 0, vn)rep(i, 0, vn)rep(j, 0, vn)
		{
			if (d[i][k] != INF&&d[k][j] != INF)
			{
				chmin(d[i][j], d[i][k] + d[k][j]);
			}
		}

		int ansi, ansv = INF;
		rep(i, 0, vn)
		{
			int tans = 0;
			rep(j, 0, vn)
			{
				tans += d[i][j];
			}
			if (chmin(ansv, tans))
			{
				ansi = i;
			}
		}
		cout << ansi << " " << ansv << endl;
	}

	return 0;
}
