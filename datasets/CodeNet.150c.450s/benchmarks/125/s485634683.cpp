#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

const int max_v = 101;
vector<vector<int> > adj_list;
int d[max_v] = { 0 };
int f[max_v] = { 0 };
int discovered[max_v] = { 0 };
int t = 1;

// Depth-first Search ( Stack implementation)
void DFS(int v)
{
	stack<int> S;
	S.push(v);
	discovered[v] = 1;
	d[v] = t++;
	int i = 0;
	while (!S.empty()) {
		v = S.top();
		if (i < adj_list[v - 1].size()) {
			int u = adj_list[v - 1][i++];
			if (discovered[u] == 0) {
				discovered[u] = 1;
				d[u] = t++;
				S.push(u);
				i = 0;
			}
		}
		else {
			S.pop();
			f[v] = t++;
			i = 0;
		}
	}
}

int main(int argc, char** argv)
{
	// Input
	int n;
	int u, k;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		int v;
		vector<int> adj;
		for (int j = 0; j < k; j++) {
			cin >> v;
			adj.push_back(v);
		}
		adj_list.push_back(adj);
	}

	// Depth-first Search
	for (int i = 1; i <= n; i++) {
		if(discovered[i] == 0)
			DFS(i);
	}

	// Output
	for (int i = 1; i <=n; i++) {
		cout << i << " " << d[i] << " " << f[i] << endl;
	}

	return 0;
}