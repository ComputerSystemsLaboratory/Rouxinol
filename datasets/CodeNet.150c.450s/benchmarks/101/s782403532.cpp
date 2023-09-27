#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

#define MAX 100000

vector<int> G[MAX];
int cond[MAX], n;
stack<int> S;

void set(int m)
{
	int u, v;
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
}

void dfs(int x, int id)
{
	S.push(x);
	cond[x] = id;

	int i, v;
	while (!S.empty()) {
		int u = S.top();
		S.pop();
		for (i = 0; i < (int)G[u].size(); i++) {
			v = G[u][i];			
			if (cond[v] == 0) {				
				cond[v] = id;
				S.push(v);
			}
		}
	}
}

void searchFriends()
{
	int id = 1;
	for (int i = 0; i < n; i++)
		if (cond[i] == 0) dfs(i, id++);
}

int main()
{
	int m, q, u, v;
	cin >> n >> m;

	set(m);
	searchFriends();

	cin >> q;
	
	for (int i = 0; i < q; i++) {
		cin >> u >> v;
		if (cond[u] != 0 && cond[v] != 0 && cond[u] == cond[v])
			cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}