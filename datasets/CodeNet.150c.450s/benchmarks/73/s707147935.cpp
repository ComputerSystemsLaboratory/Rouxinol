#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <deque>
#include <tuple>
#include <queue>
#include <functional>
#include <cmath>
#include <iomanip>
#include <map>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <complex>
//cin.sync_with_stdio(false);
//streambuf
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using ti3 = tuple<int, int, int>;
using vti3 = vector<ti3>;
template<class T, class T2> using umap = unordered_map<T, T2>;
template<class T> using uset = unordered_set<T>;
#define ALL(a) a.begin(),a.end()
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a) for(int i=1;i<=a;i++)
template<class T, class Func = function<T(T, T)>>
class segtree {
	vector<T> obj;
	int offset;
	Func updater;
	T e;
	int bufsize(int num) {
		int i = 1;
		for (; num >i; i <<= 1);
		offset = i - 1;
		return (i << 1) - 1;
	}
	T query(int a, int b, int k, int l, int r) {
		if (r <= a || b <= l)return e;
		if (a <= l && r <= b)return obj[k];
		else return updater(query(a, b, k * 2 + 1, l, (l + r) / 2), query(a, b, k * 2 + 2, (l + r) / 2, r));
	}
public:
	T query(int a, int b) {//[a,b)
		return query(a, b, 0, 0, offset + 1);
	}
	void updateall(int l = 0, int r = -1) {
		if (r == -1)r = offset + 1;
		l += offset, r += offset;
		do {
			l = l - 1 >> 1, r = r - 1 >> 1;
			for (int i = l; i < r; i++)obj[i] = updater(obj[i * 2 + 1], obj[i * 2 + 2]);
		} while (r);
	}
	void update(int k, T a) {
		k += offset;
		obj[k] = a;
		while (k) {
			k = k - 1 >> 1;
			obj[k] = updater(obj[k * 2 + 1], obj[k * 2 + 2]);
		}
	}
	segtree(int n, T e, const Func &updater = Func()) :obj(bufsize(n), e), e(e), updater(updater) {}
	segtree(vector<T> &vec, T e, const Func &updater = Func()) :obj(bufsize(vec.size()), e), e(e), updater(updater) {
		copy(vec.begin(), vec.end(), obj.begin() + offset);
		updateall();
	}
	typename vector<T>::reference operator[](int n) {//reference?????????????????????T&
		return obj[n + offset];
	}
};
int main() {
	int n, q;
	cin >> n >> q;
	segtree<int, plus<int>> seg(n+1,0);
	rep(i, q) {
		int c, x, y;
		cin >> c >> x >> y;
		if (c) {
			cout << seg.query(x, y + 1) << endl;;
		}
		else {
			seg.update(x, seg[x]+y);
		}
	}
}