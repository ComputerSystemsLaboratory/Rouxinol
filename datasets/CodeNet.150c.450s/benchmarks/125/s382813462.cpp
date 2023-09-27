#include <iostream>
#include <queue>

using namespace std;

int G[100][100];
int In[100];
int Out[100];
void init() {
	for (int i = 0; i < 100; i++) {
		for(int j = 0; j < 100; j++)
			G[i][j] = 0;
		In[i] = -1;
		Out[i] = -1;
	}	
}

void dfs(int src);

int main() {
	init();
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			int v_j;
			cin >> v_j;
			G[u - 1][v_j - 1] = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		if (In[i] == -1) dfs(i);		
	}
	for (int i = 0; i < n; i++)
		cout << i + 1 << " " << In[i] << " " << Out[i] << endl;
}

int t = 1;

void dfs(int cur) {
	In[cur] = t;
	t++;
	for (int dst = 0; dst < 100; dst++)
		if (G[cur][dst] == 1 && In[dst] == -1)
			dfs(dst);
	Out[cur] = t;
	t++;
}