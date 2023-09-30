#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)

struct UnionFind {
	vector<int> par;
	vector<int> rank;
	
	UnionFind() {}
	UnionFind(int n) {
		init(n);
	}
	
	void init(int n) {
		par.resize(n);
		REP(i, n) par[i] = i;
		rank.resize(n, 0);
	}
	
	int find(int x) {
		if (par[x] == x) return x;
		else return par[x] = find(par[x]);
	}
	
	void unite(int x, int y) {
		x = find(x);
		y = find(y);
		if (x == y) return;
		
		if (rank[x] > rank[y]) swap(x, y);
		par[x] = y;
		if (rank[x] == rank[y]) rank[x]++;
	}
};

int main() {
	int h, w;
	
	while (cin >> h >> w, h || w) {
		string str[100];
		REP(i, h) cin >> str[i];
		
		UnionFind uf(h * w);
		REP(i, h) REP(j, w) {
			int dx[4] = {1,0,-1,0};
			int dy[4] = {0,1,0,-1};
			
			REP(k, 4) {
				int nx = j + dx[k], ny = i + dy[k];
				if (!(nx >= 0 && nx < w && ny >= 0 && ny < h)) continue;
				if (str[i][j] != str[ny][nx]) continue;
				uf.unite(i * w + j, ny * w + nx);
			}
		}
		
		set<int> s;
		REP(i, h * w) s.insert(uf.find(i));
		cout << s.size() << endl;
	}
	return 0;
}