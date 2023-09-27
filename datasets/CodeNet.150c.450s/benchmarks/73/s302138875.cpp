#include <iostream>
#include <iomanip>
#include <climits>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <functional>
#include <numeric>
#include <unordered_map>
#include <map>
#include <set>
#include <cstdlib>
#include <bitset>
#include <random>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

#define INF (int)1e8
#define _INF (int)-1e8
#define INFLL (long long)1e15
#define _INFLL (long long)-1e15
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i <= (int)n; i++)
#define Loopr(i, n) for(int i = (int)n - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)n; i >= 1; i--)
#define bitmanip(m,val) static_cast<bitset<(int)m>>(val)
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef pair<int, int> P;

/*******************************************************/


typedef ll seg_t;

class SegTree {
private:
	int n;
	vector<seg_t> segtree;
	seg_t exc;
	seg_t (*build_rule)(seg_t, seg_t);
	seg_t build_seg(int k) {
		int l = k * 2 + 1, r = k * 2 + 2;
		return build_rule(segtree[l], segtree[r]);
	}
	seg_t find_rule(int s, int t, int l, int r, int k) {
		if (s == l&&t == r) return segtree[k];
		else {
			int mid = (l + r) / 2;
			if (s < mid&&mid < t) {
				seg_t result1 = find_rule(s, mid, l, mid, k * 2 + 1);
				seg_t result2 = find_rule(mid, t, mid, r, k * 2 + 2);
				return build_rule(result1, result2);
			}
			else if (s < mid) {
				return find_rule(s, t, l, mid, k * 2 + 1);
			}
			else if (mid < t) {
				return find_rule(s, t, mid, r, k * 2 + 2);
			}
		}
	}
public:
	SegTree(vector<seg_t> a, seg_t init, seg_t (*f)(seg_t, seg_t)) {
		n = (ll)pow(2, ceil(log2(a.size())));
		segtree = vector<seg_t>(n * 2 - 1, init);
		exc = init;
		build_rule = f;
		Loop(i, a.size()) segtree[n - 1 + i] = a[i];
		Loopr(i, n - 1) segtree[i] = build_seg(i);
	}
	void update(int k, seg_t x, bool add_flag = false) {
		k += n - 1;
		segtree[k] = add_flag ? segtree[k] + x : x;
		while (k > 0) {
			k = (k - 1) / 2;
			segtree[k] = build_seg(k);
		}
	}
	// note: range is [s, t)
	seg_t search(int s, int t) {
		if (s == t) return exc;
		return find_rule(s, t, 0, n, 0);
	}
};

seg_t seg_build_rule(seg_t a, seg_t b) {
	return a + b;
}

int main() {
	int n; cin >> n;
	int q; cin >> q;
	vector<seg_t> a(n, 0);
	SegTree segtree(a, 0, seg_build_rule);
	Loop(i, q) {
		int c, x, y; cin >> c >> x >> y;
		if (c == 0) {
			segtree.update(x - 1, y, true);
		}
		else {
			cout << segtree.search(x - 1, y) << endl;
		}
	}
	return 0;
}