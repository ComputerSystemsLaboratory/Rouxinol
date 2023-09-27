//#include "stdafx.h"
#include "iostream"
#include "fstream"
#include "algorithm"
#include "iomanip"
#include "stack"
#include "queue"
#include "string"
#include "vector"
#include "map"
#include "set"
#include "list"
#include "deque"
#include "complex"
#include "bitset"
#include "cmath"
#include "unordered_set"
#include "unordered_map"
#include "iterator"
#include <ctime>
#include <cassert>
#include "numeric"
#include <cstdio>
#include "random"
#include "chrono"
#include "cstring"

//#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("Ofast")
//#pragma GCC target_ans("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

using namespace std;

//#define f(i,n) for(int i=0; i<n;i++)
//#define rf(i, n) for(int i=n-1;i>=0;i--)
//#define forn(i, j, n) for(int i=j; i<n; i++)
//#define ff(i, j, n) f(i, n)f(j, n)
#define pb push_back
#define maxi(a,b) a = max(a, b);
#define mini(a,b) a = min(a, b);
#define endl '\n'

#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define sqr(x) ((x) * (x))
#define SZ(a) ((int)(a.size()))
#define watch(x) cout << (#x) << " = " << x << endl;
//typedef long long ll;
typedef long double ld;

#define int long long
//#define int unsigned int
#define double ld
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<pii> vpii;
typedef vector<char> vc;
typedef vector<vi> vvi;

template<class T>
void show(const vector<T> &a)
{
	for (T x : a)
		cout << x << " ";
	cout << endl;
}

vi xx = { 1, 0, -1, 0 };
vi yy = { 0, 1, 0, -1 };
string dir = "LRUD";

const int N = 5e5 + 50, oo = 3e18 + 500;
//const int mod = 998244353;
const int mod = 1e9 + 7;
//const int mod = 1e9 + 9;
const double eps = 1e-12, PI = 2 * acos(0.0);
int n, m, k;
long long cnt = 0;
int lg = 18;
vi g[N];
vi rg[N];
vi visit(N, 0);

struct segtree
{
	struct node
	{
		int set;
		int add;
		int sum;
	};

	int N;
	vector<node> tree;
	int NO_OPERATION = -1;
	int NEUTRAL_ELEMENT = 0;

	void init(int n)
	{
		N = 1;
		while (N < n) N <<= 1;
		tree.assign(N << 1, { NO_OPERATION, 0, 0 });
	}

	void build(int n)
	{
		init(n);
	}

	void push(int v, int lx, int rx)
	{
		if (rx == lx)
		{
			return;
		}

		int x = tree[v].set;

		if (x != NO_OPERATION)
		{
			int m = (lx + rx) >> 1;
			tree[v << 1].set = tree[v << 1 | 1].set = x;
			tree[v << 1].add = tree[v << 1 | 1].add = 0;
			tree[v << 1].sum = x*(m - lx + 1);
			tree[v << 1 | 1].sum = x*(rx - m);

			tree[v].set = NO_OPERATION;
		}

		x = tree[v].add;

		if (x)
		{
			int m = (lx + rx) >> 1;
			tree[v << 1].set = (tree[v << 1].set == NO_OPERATION ? NO_OPERATION : tree[v << 1].set + x);
			tree[v << 1].add = (tree[v << 1].set == NO_OPERATION ? tree[v << 1].add + x : 0);
			tree[v << 1 | 1].set = (tree[v << 1 | 1].set == NO_OPERATION ? NO_OPERATION : tree[v << 1 | 1].set + x);
			tree[v << 1 | 1].add = (tree[v << 1 | 1].set == NO_OPERATION ? tree[v << 1 | 1].add + x : 0);
			tree[v << 1].sum += x*(m - lx + 1);
			tree[v << 1 | 1].sum += x*(rx - m);

			tree[v].add = 0;
		}
	}

	void set(int v, int lx, int rx, int l, int r, int x, bool st)
	{
		push(v, lx, rx);

		if (l > r)
			return;

		if (lx == l && rx == r)
		{
			if (st)
			{
				tree[v].set = x;
				tree[v].add = 0;
				tree[v].sum = (r - l + 1)*x;
			}
			else
			{
				tree[v].set = (tree[v].set == NO_OPERATION ? NO_OPERATION : tree[v].set + x);
				tree[v].add = (tree[v].set == NO_OPERATION ? tree[v].add + x : 0);
				tree[v].sum += (r - l + 1)*x;
			}
			return;
		}

		int m = (lx + rx) >> 1;
		set(v << 1, lx, m, l, min(r, m), x, st);
		set(v << 1 | 1, m + 1, rx, max(m + 1, l), r, x, st);
		tree[v].sum = tree[v << 1].sum + tree[v << 1 | 1].sum;
	}

	void set(int l, int r, int x, bool st)
	{
		set(1, 0, N - 1, l, r, x, st);
	}

	int get(int v, int lx, int rx, int l, int r)
	{
		if (l > r)
			return NEUTRAL_ELEMENT;

		push(v, lx, rx);

		if (lx == l && rx == r)
		{
			return tree[v].sum;
		}

		int m = (lx + rx) >> 1;

		int g1 = get(v << 1, lx, m, l, min(r, m));
		int g2 = get(v << 1 | 1, m + 1, rx, max(m + 1, l), r);
		return g1 + g2;
	}

	int get(int l, int r)
	{
		return get(1, 0, N - 1, l, r);
	}
};

bool check1(vi dp, int a)
{
	dp.pb(a);

	int mx = 60;

	while(mx >= 0)
	{
		bool fl = false;
		for (int i = 0; i < SZ(dp); i++)
		{
			if (dp[i] & (1ll << mx))
			{
				fl = true;
				break;
			}
		}

		if (fl)
			break;

		mx--;
	}

	if (SZ(dp) > mx + 1)
		return 0;

	int ii = 0;
	for (int j = 0; j <= mx; j++)
	{
		bool fl = 0;
		for (int i = ii; i < SZ(dp); i++)
		{
			if (dp[i] & (1ll << (mx - j)))
			{
				swap(dp[i], dp[ii]);
				fl = 1;
				break;
			}
		}

		if (!fl)
		{
			continue;
		}
	
		for (int i = ii + 1; i < SZ(dp); i++)
		{
			if (dp[i] & (1ll << (mx - j)))
			{
				dp[i] ^= dp[ii];
			}
		}

		ii++;
	}

	return dp.back();
}

bool solve1(vi &a, string &s)
{
	n = SZ(a);
	vi dp;

	bool ans = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (s[i] == '0')
		{
			if (check1(dp, a[i]))
			{
				dp.pb(a[i]);
			}
		}
		else
		{
			if (check1(dp, a[i]))
			{
				ans = 1;
				break;
			}
		}
	}
 
	return ans;
}

bool check2(int v, vi &cur, int cl = 0)
{
	const int pw = 60;
	for (int i = 0; i < pw; ++i)
	{
		if (!(v & (1LL << i)))
			continue;

		int label = 0;
		for (int u : cur)
			if ((u & (1LL << i)) != 0 && (u & ((1LL << i) - 1)) == 0)
			{
				label = 1;
				v ^= u;
				break;
			}

		if (!label) {
			if (cl)
				cur.push_back(v);

			return 0;
		}
	}

	return 1;
}

int solve2(vi &kek, string &s)
{
	n = SZ(s);
	vi cur;
	int label = 0;

	for (int i = n - 1; i >= 0; --i)
	{
		if (s[i] == '0')
		{
			check2(kek[i], cur, 1);

			continue;
		}

		if (!check2(kek[i], cur))
			label = 1;
	}

	return label;
}

signed main()
{
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	/*freopen("abbreviation.in", "r", stdin);
	freopen("abbreviation.out", "w", stdout);*/

	/*vi a = { 14, 1, 1, 3, 3 };
	string s = "01100";
	cout << solve1(a, s);
	cout << solve2(a, s);*/
	
	int t;
	cin >> t;

	while (t--)
	{
		cin >> n;
		vi a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		string s;
		cin >> s;

		cout << solve1(a, s) << endl;
		/*n = 5;
		vi a;
		string s;

		for (int i = 0; i < n; i++)
		{
			a.pb(rand() % 15 + 1);
			s.pb(rand() % 2 + '0');
		}

		if (solve1(a, s) != solve2(a, s))
		{
			cout << "FUCK" << endl;
			show(a);
			cout << s << endl;
			cout << "/////////" << endl;
			cout << solve1(a, s) << endl;
			cout << solve2(a, s) << endl;
			break;
		}*/
	}
}

