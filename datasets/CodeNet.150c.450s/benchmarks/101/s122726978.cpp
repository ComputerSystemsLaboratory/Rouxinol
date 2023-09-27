#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

void dfs(int id, int gid, vector<vector<int> >& g, int group[]){
	group[id] = gid;
	for(int n : g[id]){
		if(group[n] < 0){
			group[n] = gid;
			dfs(n, gid, g, group);
		}
	}
	return;
}

int main(){
	int n, m; cin >> n >> m;
	int group[n];
	memset(group, -1, n*sizeof(int));
	vector<vector<int> > g(n, vector<int>());
	rep(i, m){
		int s, t; cin >> s >> t;
		g[s].push_back(t);
		g[t].push_back(s);
	}

	int gid = 0;
	rep(i, n) if(group[i] < 0) dfs(i, gid++, g, group);

	int q; cin >> q;
	rep(i, q){
		int s, t; cin >> s >> t;
		cout << ((group[s] == group[t]) ? "yes" : "no") << endl;
	}

	return 0;
}

