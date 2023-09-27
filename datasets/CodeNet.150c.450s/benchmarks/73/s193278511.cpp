# include <iostream>
# include <algorithm>
#include <array>
# include <cassert>
#include <cctype>
#include <climits>
#include <numeric>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <tuple>
# include <utility>
# include <stack>
# include <queue>
# include <list>
# include <bitset>
# include <complex>
# include <chrono>
# include <random>
# include <limits.h>
# include <unordered_map>
# include <unordered_set>
# include <deque>
# include <cstdio>
# include <cstring>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
constexpr long long MOD = 1000000000 + 7;
constexpr long long INF = std::numeric_limits<long long>::max();
const double PI = acos(-1);
#define fir first
#define sec second
typedef pair<LL, LL> Pll;
typedef pair<LL, pair<LL, LL>> Ppll;
typedef pair<LL, pair<LL, bitset<100001>>> Pbll;
typedef pair<LL, pair<LL, vector<LL>>> Pvll;
typedef pair<LL, LL> Vec2;
struct Tll { LL first, second, third; };
typedef pair<LL, Tll> Ptll;
#define rep(i,rept) for(LL i=0;i<rept;i++)
#define Mfor(i,mf) for(LL i=mf-1;i>=0;i--)
LL h, w, n, m, k, s, t, q, ans, sum, last, cnt = 25000, a[100000],dp[60][10000];
Pll b[100000];
struct Edge { LL to,cost; };
vector<Edge>vec[100000];
string str[3];
bool f;
void YN(bool f) {
	if (f)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
void yn(bool f) {
	if (f)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
struct Seg {
	LL n;
	vector<LL>node;
	Seg(vector<LL>v) {
		n = 1; while (n < v.size())n *= 2;
		node.resize(n * 2 - 1);
		rep(i, n)node[n + i - 1] = v[i];
		Mfor(i, n - 2)node[i] = min(node[i * 2 + 1], node[i * 2 + 2]);
	}
	Seg(LL n_) {
		n = 1; while (n < n_)n *= 2;
		node.resize(n * 2 - 1);
		rep(i, n)node[n + i - 1] = 0;
	}
	void update(LL i, LL x) {
		i = i + n - 1;
		node[i] += x;
		while (i > 0) {
			i = (i - 1) / 2;
			node[i] = (node[i * 2 + 1] + node[i * 2 + 2]);
		}
	}
	LL getsum(LL i, LL a, LL b, LL l, LL r) {
		if (b< l || r < a)return 0;
		if (l <= a&&b <= r)return node[i];
		return (getsum(i * 2 + 1, a, (a + b) / 2, l, r)+getsum(i * 2 + 2, (a + b + 1) / 2, b, l, r));
	}
};
int main() {
	cin >> n >> q;
	Seg seg(n);
	rep(i, q) {
		LL x, y, z;
		cin >> x >> y >> z;
		if (x == 0)seg.update(y-1, z);
		else cout << seg.getsum(0, 0, seg.n-1, y-1, z-1) << endl;
	}
	return 0;
}

