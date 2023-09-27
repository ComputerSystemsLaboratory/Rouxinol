#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

struct UnionFind {
	vector<int> par,rank;
	int N;

	UnionFind(int n) {
		N = n;
		par.resize(n);
		rank.resize(n);

		rep(i,n) {
			par[i] = i;
			rank[i] = 0;
		}
	}

	int find(int x) {
		if(par[x] == x) return x;
		else return par[x] = find(par[x]);
	}

	void unite(int x,int y) {
		x = find(x);
		y = find(y);

		if(x == y) return;

		if(rank[x] < rank[y]) {
			par[x] = y;
		}
		else {
			par[y] = x;
			if(rank[x] == rank[y]) rank[x]++;
		}
	}

	bool same(int x,int y) {
		return find(x) == find(y);
	}

	int size() {
		int cnt = 0;
		rep(i,N) if(find(i) == i) cnt++;
		return cnt;
	}
};

struct edge {
	int from,to;
	int cost;

	edge(int t,int c) : to(t),cost(c) {}
	edge(int f,int t,int c) : from(f),to(t),cost(c) {}

	bool operator<(const edge &e) const {
		return cost < e.cost;
	}
};

int kruskal(int n,vector<edge> v) {
	sort(v.begin(),v.end());
	UnionFind uf(n);

	int ret = 0;
	rep(i,v.size()) {
		edge e = v[i];
		if(!uf.same(e.from,e.to)) {
			uf.unite(e.from,e.to);
			ret += e.cost;
		}
	}
	return ret;
}

int main() {
	int n, m;
	cin >> n >> m;

	vector<edge> v;
	rep(i, m) {
		int s, t, w;
		cin >> s >> t >> w;
		v.push_back(edge(s, t, w));
	}

	cout << kruskal(n, v) << endl;

	return 0;
}