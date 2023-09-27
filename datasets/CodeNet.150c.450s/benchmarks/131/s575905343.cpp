#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cfloat>
#include <ctime>
#include <cassert>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <numeric>
#include <list>
#include <iomanip>
 
using namespace std;
 
#if __GNUC__
#include <tr1/unordered_map>
#include <tr1/unordered_set>
using namespace tr1;
#else
#include <unordered_map>
#include <unordered_set>
#endif
 
#ifdef __GNUC__
template <class T> int popcount(T n);
template <> int popcount(unsigned int n) { return __builtin_popcount(n); }
template <> int popcount(int n) { return __builtin_popcount(n); }
template <> int popcount(unsigned long long n) { return __builtin_popcountll(n); }
template <> int popcount(long long n) { return __builtin_popcountll(n); }
#else
#define __typeof__ decltype
template <class T> int popcount(T n) { return n ? 1 + popcount(n & (n - 1)) : 0; }
#endif
 
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define foreach(it, c) for (__typeof__((c).begin()) it=(c).begin(); it != (c).end(); ++it)
#define rforeach(it, c) for (__typeof__((c).rbegin()) it=(c).rbegin(); it != (c).rend(); ++it)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define CL(arr, val) memset(arr, val, sizeof(arr))
#define COPY(dest, src) memcpy(dest, src, sizeof(src))
 
template <class T> void max_swap(T& a, const T& b) { a = max(a, b); }
template <class T> void min_swap(T& a, const T& b) { a = min(a, b); }
 
typedef long long ll;
typedef pair<int, int> pint;
 
template <class T, class U> ostream& operator<<(ostream& os, pair<T, U>& p) { os << "( " << p.first << ", " << p.second << " )"; return os;  }
 
template <class T> string to_s(const T& a) { ostringstream os; os << a; return os.str(); }
 
 
const int mod = 1000000007;
const double PI = acos(-1.0);
const int dx[] = { 0, 1, 0, -1 };
const int dy[] = { 1, 0, -1, 0 };
bool valid_pos(int x, int y, int w, int h) { return 0 <= x && x < w && 0 <= y && y < h; }
 
template <class T> void print(T a, int n, int br = 1, const string& deli = ", ") { cout << "{ "; for (int i = 0; i < n; ++i) { cout << a[i]; if (i + 1 != n) cout << deli; } cout << " }"; while (br--) cout << endl; }
template <class T> void print(const vector<T>& v, int br = 1, const string& deli = ", ") { print(v, v.size(), br, deli); }
template <class T> void print2d(T a, int w, int h, int width = -1, int br = 1) { for (int i = 0; i < h; ++i) { for (int j = 0; j < w; ++j) {	if (width != -1) cout.width(width); cout << a[i][j] << ' ';	} cout << endl; } while (br--) cout << endl; }
 
template <class T> void input(T& a, int n) { for (int i = 0; i < n; ++i) cin >> a[i]; }
template <class T, class U> void input(T& a, U& b, int n) { for (int i = 0; i < n; ++i) cin >> a[i] >> b[i]; }
 

 
vector<int> to_a(int n, int len)
{
	vector<int> res;
	for (; n > 0; n /= 10)
		res.push_back(n % 10);
	while (res.size() < len)
		res.push_back(0);
	return res;
}
int to_n(const vector<int>& a)
{
	int res = 0;
	for (int i = 0; i < a.size(); ++i)
		res = res * 10 + a[i];
	return res;
}
int main()
{
	int a, l;
	while (cin >> a >> l, a || l)
	{
		map<int, int> memo;
		for (int i = 0; ; ++i)
		{
			if (memo.count(a))
			{
				printf("%d %d %d\n", memo[a], a, i - memo[a]);
				break;
			}
			else
				memo[a] = i;

			vector<int> v = to_a(a, l);
			sort(all(v));
			int small = to_n(v);
			reverse(all(v));
			int big = to_n(v);

			a = big - small;
		}
	}
}