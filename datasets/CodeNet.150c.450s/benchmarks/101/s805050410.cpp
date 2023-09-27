#include <bits/stdc++.h>
using namespace std;

/*
// grp[i]:i番目の強連結成分に含まれる頂点一覧 iはトポロジカル順
class SCC {
	public:
	static const int MV = 100000;
	vector<vector<int> > grp; int NV,cmp[MV];
	vector<int> E[MV], RE[MV], NUM; int vis[MV];
	void init(int NV) { this->NV=NV; for(int i=0;i<MV;i++) { E[i].clear(); RE[i].clear();}}
	void add(int x,int y) { E[x].push_back(y); RE[y].push_back(x); }
	void dfs(int cu) { vis[cu]=1; for(int i=0;i<E[cu].size();i++) if(!vis[E[cu][i]]) dfs(E[cu][i]); NUM.push_back(cu); }
	void revdfs(int cu, int ind) {vis[cu]=1; cmp[cu]=ind; grp[ind].push_back(cu);
		for(int i=0;i<RE[cu].size();++i) if(!vis[RE[cu][i]]) revdfs(RE[cu][i],ind);}
	void scc() {
		int c=0; grp.clear(); grp.resize(MV); NUM.clear();
		memset(vis,0,sizeof(vis)); for(int i=0;i<NV;i++) if(!vis[i]) dfs(i);
		memset(vis,0,sizeof(vis)); for(int i=NUM.size()-1;i>=0;i--) if(!vis[NUM[i]])
			{ grp[c].clear(); revdfs(NUM[i],c); sort(grp[c].begin(),grp[c].end()); c++;}
		grp.resize(c);
	}
};
 */

int n, m, a, b, q, c[100100];
vector<int> e[100100];

/*
vector<int> scc(int n, vector<int> e[]) {
	int sz = 0, s = 0;
	vector<int> rg[n], stk, cmp(n, -1), added(n), visited(n), ord(n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < e[i].size(); ++j) rg[e[i][j]].push_back(i);
		sz += e[i].size();
	}
	stk.resize(n + sz), sz = 0;
	for (int i = 0; i < n; i++) {
		if (visited[i]) continue;
		stk[s = 1] = i;
		while (s != 0) {
			int v = stk[s - 1];
			visited[v] = true;
			bool pushed = false;
			for (int j = 0; j < e[v].size(); ++j) {
				int dst = e[v][j];
				if (!visited[dst]) {
					stk[s++] = dst;
					pushed = true;
				}
			}
			if (pushed) continue;
			int t = stk[s - 1];
			if (!added[t]) added[t] = true, ord[n - ++sz] = t;
			--s;
		}
	}
	int k = 0;
	for (int i = 0; i < n; ++i) {
		if (cmp[ord[i]] != -1) continue;
		s = 0, stk[s++] = ord[i];
		while (s != 0) {
			int v = stk[--s];
			cmp[v] = k;
			for (int j = 0; j < rg[v].size(); ++j) {
				int d = rg[v][j];
				if (cmp[d] == -1) stk[s++] = d;
			}
		}
		++k;
	}
	return cmp;
}
*/

// paint
void rec(int v, int x) {
	c[v] = x;
	for (int i = 0; i < e[v].size(); ++i)
		if (c[e[v][i]]==0) rec(e[v][i],x);
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		cin >> a >> b;
		e[a].push_back(b), e[b].push_back(a);
	}
	
	int nm = 0;
	for (int i = 0; i < n; ++i) {
		if (c[i]==0) rec(i,++nm);
	}
	
	cin >> q;
	while (q--) {
		cin >> a >> b;
		cout << (c[a]==c[b] ? "yes" : "no") << endl;
	}
}
