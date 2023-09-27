#define MYDEBUG
#include <bits/stdc++.h>

#ifdef MYDEBUG
#define dbp(x) cout<<#x<<": "<<x<<endl
#define dbp2(x,y) cout<<#x<<","<<#y<<": "<<x<<","<<y<<endl
#define dbp3(x,y,z) cout<<#x<<","<<#y<<","<<#z<<": "<<x<<","<<y<<","<<z<<endl
#define ifcin(x) std::ifstream cin(x)
#else
#define dbp(x)
#define dbp2(x,y)
#define dbp3(x,y,z)
#define ifcin(x)
#endif
#define ll long long
#define ull unsigned long long
#define all(x) x.begin(), x.end()
#define rep(i, from, to) for(int i=from; i<to; ++i)
#define REP(i, from, to) for(int i=from; i<=to; ++i)
#define EPS = 1e-14;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::max;
using std::min;
using std::swap;
using std::string;
using std::fill;
using std::pair;
using std::sort;
using std::reverse;
using std::pair;
using std::greater;
using std::priority_queue;
using std::ostream;
typedef std::complex<int> P;

template<typename T>
ostream& operator<<(ostream& out, const vector<vector<T> >& v) {
	for (size_t i = 0; i < v.size(); ++i) {
		out << v[i] << endl;
	}
	return out;
}

template<typename T>
ostream& operator<<(ostream& out, const vector<T>& v) {
	out << "[";
	size_t last = v.size() - 1;
	for (size_t i = 0; i < v.size(); ++i) {
		out << v[i];
		if (i != last) {
			out << ",";
		}
	}
	out << "]";
	return out;
}

const int MAX_QUAD = 182;
const int INF = 100000000;
const int MAX_N = 1000100;
int quad[MAX_QUAD], qodd[MAX_QUAD];
int dp[MAX_N], dp_odd[MAX_N];
int n, ODD_SIZE;

void init() {
	int m = 1;
	ODD_SIZE = 0;
	rep(k,1,MAX_QUAD)
	{
		quad[k] = k * (k + 1) * (k + 2) / 6;
		if (quad[k] % 2 != 0) {
			qodd[m] = quad[k];
			m++;
			ODD_SIZE = max(ODD_SIZE, m);
		}
	}
}

void doDP() {
	fill(dp, dp + MAX_N, INF);
	dp[0] = 0;
	rep(i,1,MAX_N)
	{
		rep(k,1,MAX_QUAD)
		{
			if (i - quad[k] >= 0) {
				dp[i] = min(dp[i - quad[k]] + 1, dp[i]);
			}
		}
	}
	//odd
	fill(dp_odd, dp_odd + MAX_N, INF);
	dp_odd[0] = 0;
	rep(i,1, MAX_N)
	{
		rep(k,1,ODD_SIZE)
		{
			if (i - qodd[k] >= 0) {
				dp_odd[i] = min(dp_odd[i - qodd[k]] + 1, dp_odd[i]);
			}
		}
	}
}

void solve() {
	init();
	doDP();
	while (cin >> n, n) {
		printf("%d %d\n", dp[n], dp_odd[n]);
	}
}

int main() {
	solve();
}