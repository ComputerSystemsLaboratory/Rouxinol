#include <iostream>
#include <vector>
#include <queue>

using namespace std; 

int noc;
vector<int> comp;
vector< vector<int> > adj;

void dfs(int v) {
	comp[v] = noc;
	for (int i = 0; i < adj[v].size(); ++i) {
		if (comp[adj[v][i]] < 0) {
			dfs(adj[v][i]);
		}
	}
	return;
}

int main(void) {
	int nov,noe,u,v;
	cin >> nov >> noe;
	adj = vector< vector<int> >(nov);
	for (int i = 0; i < noe; ++i) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	noc = 0;
	comp = vector<int>(nov,-1);
	for (int i = 0; i < nov; ++i) {
		if (comp[i] < 0) {
			++noc;
			dfs(i);
		}
	}

	int noq;
	cin >> noq;
	for (int q = 0; q < noq; ++q) {
		cin >> u >> v;
		if (comp[u] == comp[v]) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	return 0;
}

