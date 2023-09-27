# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
# include <tuple>
# include <unordered_map>
# include <numeric>
# include <complex>
# include <bitset>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
constexpr int INF = 2000000000;
constexpr int HINF = INF / 2;
constexpr double DINF = 100000000000000000.0;
constexpr long long LINF = 9223372036854775807;
constexpr long long HLINF = 4500000000000000000;
constexpr long long MMOD = 500000004;
const double PI = acos(-1);
int dx[4] = { 0,1,0,-1 }, dy[4] = { 1,0,-1,0 };
# define ALL(x)     (x).begin(),(x).end()
# define UNIQ(c)    (c).erase(unique(ALL((c))), end((c)))
# define mp         make_pair
# define eb         emplace_back
# define FOR(i,a,b) for(int i=(a);i<(b);++i)
# define REP(i,n)   FOR(i,0,n)
# define INIT       std::ios::sync_with_stdio(false);std::cin.tie(0);

int n, q;

struct SegmentTree {
private:
	int n;
	vector<int> node;
public:
	SegmentTree(vector<int> v) {
		int sz = (int)v.size();
		n = 1; while (n < sz) n *= 2;
		node.resize(2 * n - 1, 0);

		for (int i = 0; i<sz; i++) node[i + n - 1] = v[i];
		for (int i = n - 2; i >= 0; i--) node[i] = node[i * 2 + 1] + node[i * 2 + 2];
	}

	void add(int k, int val) {
		k += (n - 1);
		node[k] += val;

		while (k > 0) {
			k = (k - 1) / 2;
			node[k] = node[2 * k + 1] + node[2 * k + 2];
		}
	}

	int getsum(int a, int b, int k = 0, int l = 0, int r = -1) {
		if (r < 0) r = n;
		if (b <= l || r <= a) return 0;
		if (a <= l && r <= b) return node[k];

		int vl = getsum(a, b, 2 * k + 1, l, (l + r) / 2);
		int vr = getsum(a, b, 2 * k + 2, (l + r) / 2, r);
		return vl + vr;
	}
};

int main() {
	cin >> n >> q;
	SegmentTree seg(vector<int>(n, 0));
	for (int i = 0; i < q; i++) {
		int c, x, y;
		cin >> c >> x >> y;
		if (c == 0)seg.add(x-1, y);
		else cout << seg.getsum(x-1, y) << endl;
	}
}
