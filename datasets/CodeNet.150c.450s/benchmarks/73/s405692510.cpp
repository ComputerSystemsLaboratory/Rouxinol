#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>
#include <fstream>
#include <bitset>
#include <time.h>
#include <tuple>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = 1e12;
const ll MOD = 1e9 + 7;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,N) for(int i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )
#define fi first
#define se second
#define N_SIZE (1LL << 20)
#define NIL -1
#define MAX_N 100100

ll n, q, s, t;

struct RSQ
{
	ll gt;
	ll a[N_SIZE];
	ll seg[N_SIZE * 2];
	void init(int n) {
		gt = 1;
		while (gt < n)gt *= 2;
		rep(i, n)a[i] = 0;
		rep(i, N_SIZE * 2)seg[i] = 0;
		rep(i, n)seg[i + gt] = a[i];
	}
	void update(int k, int x) {
		k += gt - 1;
		seg[k] += x;
		while (k) {
			k = (k - 1) / 2;//???????????????
			seg[k] += x;
		}
	}
	ll query(int a, int b) {
		return query(a, b, 0, 0, gt);
	}
	ll query(int a, int b, int k, int l, int r) {//[a,b)???????????????,k=0,l=0,r=gt
		if (r <= a || b <= l)return 0;

		if (a <= l&&r <= b)return seg[k];
		else return query(a, b, k * 2 + 1, l, (l + r) / 2)
			+ query(a, b, k * 2 + 2, (l + r) / 2, r);
	}
	void print() {
		rep(i, 2 * gt)cout << "!" << i << " " << seg[i] << endl;
	}
};

RSQ rsq;

int main() {
	cin >> n >> q;
	rsq.init(n + 1);
	rep(i, q) {
		int a, b, c;
		cin >> a >> b >> c;
		b--;
		if (a == 0) {
			rsq.update(b, c);
		}
		else {
			cout << rsq.query(b, c) << endl;
		}
	}
}