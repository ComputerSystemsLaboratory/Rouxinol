/*
 *  Created on: 2017/06/27
 *      Author: LitMc
 */
//#define MYDEBUG
#include <bits/stdc++.h>
#ifdef MYDEBUG
#define dbp(x) cout<<#x<<": "<<x<<endl
#define dbp2(x,y) cout<<#x<<","<<#y<<": "<<x<<","<<y<<endl
#define dbp3(x,y,z) cout<<#x<<","<<#y<<","<<#z<<": "<<x<<","<<y<<","<<z<<endl
#define dbp4(w,x,y,z) cout<<#w<<","<<#x<<","<<#y<<","<<#z<<": "<<w<<","<<x<<","<<y<<","<<z<<endl
#define ifcin(x) std::ifstream cin(x)
#else
#define dbp(x)
#define dbp2(x,y)
#define dbp3(x,y,z)
#define dbp4(w,x,y,z)
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
using std::unique;

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

struct edge {
	int from, to, cost;
	edge() {
		*this = edge(-1, -1, -1);
	}
	edge(int from_, int to_, int cost_) {
		from = from_;
		to = to_;
		cost = cost_;
	}
	bool operator<(const edge& e) const {
		return cost < e.cost;
	}
	bool operator==(const edge& e) const {
		return (from == e.from && to == e.to && cost == e.cost)
				|| (from == e.to && to == e.from && cost == e.cost);
	}
};

const int MAX_N = 21;
const int MAX_M = 2010;
int n, q, a[MAX_N], m;
bool used[MAX_N];
int dp[MAX_N][MAX_M];

bool dfs(int d, int x) { //d???????????§????????£???x????????£???
	if (d > n) {
		return false;
	}
	if (x == m) {
		return true;
	}
	if (dp[d][x] != 0) {
		return dp[d][x] == 1;
	}
	bool ret = dfs(d + 1, x);
	REP(k,d+1,n)
	{
		if (!used[k]) {
			used[k] = true;
			ret = ret || dfs(k, x + a[k]);
			used[k] = false;
		}
	}
	dp[d][x] = (ret ? 1 : -1);
	return ret;
}

void solve() {
	cin >> n;
	REP(i,1,n)
	{
		cin >> a[i];
	}
	cin >> q;
	rep(query,0,q)
	{
		memset(used, 0, sizeof(used));
		memset(dp, 0, sizeof(dp));
		cin >> m;
		cout << (dfs(0, 0) ? "yes" : "no") << endl;
	}
}

int main() {
	solve();
}