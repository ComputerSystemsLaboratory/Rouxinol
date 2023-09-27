#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using msi = map<string, int>;
using mii = map<int, int>;
using psi = pair<string, int>;
using pii = pair<int, int>;
using vlai = valarray<int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define range(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define INF 1E9
#define EPS 1E-9
#define MOD (ll)(1E9+7)
#define PI 3.1415926535897932384

template <class T>ostream &operator<<(std::ostream &o, const vector<T> &v)
{
	rep(i, v.size()) {
		o << (i > 0 ? " " : "") << v[i];
	}
	return o;
}

#define MAX_V 100

struct edge {
	edge(int a, int b) {
		cost = a;
		to = b;
	}
	int cost;
	int to;
};

int n;
vector<vector<edge>> G;
vector<int> d;

void dijkstra(int s) {
	priority_queue<pii, vector<pii>, greater<pii>> que;
	d[s] = 0;
	que.push(pii(0, s));

	while (!que.empty()) {
		pii p = que.top();
		que.pop();
		int v = p.second;
		if (d[v] < p.first) continue;
		for (int i = 0; i < G[v].size(); i++) {
			edge e = G[v][i];
			if (d[e.to] > d[v] + e.cost) {
				d[e.to] = d[v] + e.cost;
				que.push(pii(d[e.to], e.to));
			}
		}
	}

}

int main() {
	int n,u,k,tmpp,tmpw;
	cin >> n;
	d = vector<int>(n, INF);
	G = vector<vector<edge>>(n);
	rep (i,n) {
		cin >> u >> k;
		rep(j, k) {
			cin >> tmpp>>tmpw;
			G[u].emplace_back(tmpw, tmpp);
		}
	}
	dijkstra(0);
	rep(i, n) {
		cout << i << " " << d[i] << endl;
	}
}

