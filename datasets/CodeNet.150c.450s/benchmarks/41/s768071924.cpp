//#define MYDEBUG
#include <bits/stdc++.h>
using namespace std;

#ifdef MYDEBUG
#define dbp(x) cout<<#x<<": "<<x<<endl
#define dbp2(x,y) cout<<#x<<","<<#y<<": "<<x<<","<<y<<endl
#define dbp3(x,y,z) cout<<#x<<","<<#y<<","<<#z<<": "<<x<<","<<y<<","<<z<<endl
#define dbp4(w,x,y,z) cout<<#w<<","<<#x<<","<<#y<<","<<#z<<": "<<w<<","<<x<<","<<y<<","<<z<<endl
#else
#define dbp(x)
#define dbp2(x,y)
#define dbp3(x,y,z)
#define dbp4(w,x,y,z)
#endif
#define ll long long
#define ull unsigned long long
#define eps 1e-14
#define all(x) x.begin(), x.end()
#define rep(i, from, to) for(int i=from; i<to; ++i)

template<typename T>
ostream& operator<<(ostream& out, const vector<T>& v) {
	out << "[";
	size_t last = v.size() - 1;
	for (size_t i = 0; i < v.size(); ++i) {
		out << v[i];
		if (i != last)
			out << ",";
	}
	out << "]";
	return out;
}

struct edge {
	int from, to, cost;
	edge(int from, int to, int cost) {
		this->from = from;
		this->to = to;
		this->cost = cost;
	}
	edge() {
		from = -1;
		to = -1;
		cost = -1;
	}
	bool operator<(const edge& e) const {
		return this->cost < e.cost;
	}
	bool operator>(const edge& e) const {
		return e < *this;
	}
	bool operator>=(const edge& e) const {
		return !(*this < e);
	}
	bool operator<=(const edge& e) const {
		return !(*this > e);
	}
};

typedef struct edge edge;
typedef pair<int, int> P;
const int MAXV = 110;
const int MAXE = 10000;
const int INF = 2140000000;
edge eg[MAXE];
int V, E;
int d[MAXV][MAXV];
const string NEGATIVE = "NEGATIVE CYCLE";

void warshall_floyd() {
	rep(i,0,V)
	{
		fill(d[i], d[i] + MAXV, INF);
		d[i][i] = 0;
	}
	rep(i,0,E)
	{
		edge e = eg[i];
		d[e.from][e.to] = e.cost;
	}
	rep(k,0,V)
	{
		rep(i,0,V)
		{
			rep(j,0,V)
			{
				if (d[i][k] != INF && d[k][j] != INF) {
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
				}
			}
			if (d[i][i] < 0) {
				cout << NEGATIVE << endl;
				return;
			}
		}
	}
	rep(i,0,V)
	{
		rep(j,0,V)
		{
			if (j != V - 1) {
				if (d[i][j] == INF) {
					cout << "INF" << " ";
				} else {
					cout << d[i][j] << " ";
				}
			} else {
				if (d[i][j] == INF) {
					cout << "INF";
				} else {
					cout << d[i][j];
				}
			}
		}
		cout << endl;
	}
}

void solve() {
	cin >> V >> E;
	rep(i,0,E)
	{
		int s, t, d;
		cin >> s >> t >> d;
		eg[i] = edge(s, t, d);
	}
	warshall_floyd();
}

int main() {
	solve();
	return 0;
}