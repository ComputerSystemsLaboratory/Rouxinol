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

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = 1e9 + 7;
const ll MOD = 1e9 + 7;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,N) for(int i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )
#define fi first
#define se second
#define N_SIZE (1<<20)

int n, q;

struct RSQ
{
	int N;
	ll gt;
	ll a[N_SIZE];
	ll seg[N_SIZE * 2];
	void init(int n){
		N = n;
		REP(i, 30) {
			if ((1 << i) >= N) {
				gt = (1 << i) - 1;
				break;
			}
		}
		REP(i, N) {
			//cin >> a[i];
			a[i] = 0;
		}
		REP(i, N_SIZE * 2)seg[i] = 0;
		REP(i, N) {
			seg[i + gt] = a[i];
		}
	}
	void update(int k, int x) {
		k += gt;
		seg[k] += x;
		while (k) {
			k = (k - 1) / 2;//???????????????
			seg[k] += x;
		}
	}
	ll query(int a, int b, int k, int l, int r) {
		if (r < a || b < l)return 0;
		else if (a <= l&&r <= b)return seg[k];
		else return query(a, b, k * 2 + 1, l, (l + r) / 2)
			+ query(a, b, k * 2 + 2, (l + r) / 2 + 1, r);
	}
	void print() {
		REP(i, 2 * (gt + 1)) {
			cout << i << " " << seg[i] << endl;
		}
	}
};

RSQ rsq;

int main() {
	cin >> n >> q;
	rsq.init(n);
	REP(i, q) {
		ll x, y;
		bool f;
		cin >> f >> x >> y;
		x--;
		if (!f) {
			rsq.update(x, y);
		}
		else {
			y--;
			cout << rsq.query(x, y, 0, 0, rsq.gt) << endl;
		}
	}
}