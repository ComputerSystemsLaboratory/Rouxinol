#include <algorithm>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

#define MOD 1000000007
#define MOD2 998244353
#define int long long
#define double long double
#define EPS 1e-9
//#define PI 3.14159265358979

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

template < typename T >
ostream &operator<<(ostream &os, const vector< T > &A) {
	for (int i = 0; i < A.size(); i++)
		os << A[i] << " ";
	os << endl;
	return os;
}
template <>
ostream &operator<<(ostream &os, const vector< vector< int > > &A) {
	int N = A.size();
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < A[i].size(); j++)
			os << A[i][j] << " ";
		os << endl;
	}
	return os;
}
template < typename T, typename U >
ostream &operator<<(ostream &os, const pair< T, U > &p) {
	os << "(" << p.first << "," << p.second << ")";
	return os;
}

typedef pair< int, int > pii;
typedef long long ll;

struct edge {
	int from, to, d, c, i;
	edge(int _from = 0, int _to = 0, int _d = 0, int _c = 0) {
		from = _from;
		to = _to;
		d = _d;
		c = _c;
	}
	bool operator<(const edge &rhs) const {
		return (d == rhs.d) ? (c < rhs.c) : (d < rhs.d);
	}
};
struct aabb {
	int x1, y1, x2, y2;
	aabb(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}
};

typedef vector< edge > edges;
typedef vector< edges > graph;
struct flow {
	int to, cap, rev, cost;
	flow(int to = 0, int cap = 0, int rev = 0, int cost = 0) : to(to), cap(cap), rev(rev), cost(cost) {}
};
typedef vector< vector< flow > > flows;

const int di[4] = {0, -1, 0, 1};
const int dj[4] = {-1, 0, 1, 0};
const int ci[5] = {0, 0, -1, 0, 1};
const int cj[5] = {0, -1, 0, 1, 0};
const ll LINF = LLONG_MAX / 2;
const int INF = INT_MAX / 2;
const double PI = acos(-1);

int pow2(int n) { return 1LL << n; }
template < typename T, typename U >
bool chmin(T &x, const U &y) {
	if (x > y) {
		x = y;
		return true;
	}
	return false;
}
template < typename T, typename U >
bool chmax(T &x, const U &y) {
	if (x < y) {
		x = y;
		return true;
	}
	return false;
}

template < typename A, size_t N, typename T >
void Fill(A (&array)[N], const T &val) {
	fill((T *)array, (T *)(array + N), val);
}
struct initializer {
	initializer() {
		cout << fixed << setprecision(20);
	}
};
initializer _____;

int N, M, K, T, Q, H, W;
signed main() {
	cin >> T;
	while (T--) {
		cin >> N;
		vector< int > A(N);
		rep(i, N) cin >> A[i];
		string S;
		cin >> S;
		vector< int > es;
		int ans = 0;
		for (int i = N - 1; i >= 0; i--) {
			int v = A[i];
			sort(es.rbegin(), es.rend());
			for (auto e : es) {
				chmin(v, v ^ e);
			}
			if (S[i] == '0') {
				if (v != 0) {
					es.push_back(v);
				}
			} else {
				if (v) {
					ans = 1;
					break;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}