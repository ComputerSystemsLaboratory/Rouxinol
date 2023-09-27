#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#define N 100000
using namespace std;

int color[N];
vector<int> G[N];
queue<int> Q;
int n;

void bfs(int s,int c) {
	Q.push(s);
	color[s] = c;
	while (!Q.empty()) {
		for (unsigned int it = 0;it < G[Q.front()].size();it++)
			if (color[G[Q.front()][it]] == 0){
				Q.push(G[Q.front()][it]);
				color[G[Q.front()][it]] = c;
		    }
		Q.pop();
	 }
}

void Color() {
	int c = 1;
	for(int i=0;i<n;i++)
		if (color[i] == 0) { bfs(i, c); c++; }
}

int main() {
	int m, q;
	cin >> n >> m;
	for (int i = 0;i < m;i++) {
		int u, v;
		cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}

	Color();

	cin >> q;
	for (int i = 0;i < q;i++) {
		int u, v;
		cin >> u >> v;
		if (color[u] == color[v] && color[u] != 0)
			cout << "yes" << endl;
		else
			cout << "no"<<endl;
	}
}