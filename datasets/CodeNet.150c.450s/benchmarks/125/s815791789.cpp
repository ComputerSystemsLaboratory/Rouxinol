#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int n;
int t;
vector<int> G[MAX];
bool used[MAX];
int d[MAX];
int f[MAX];

void DFS(int s) {
	if (used[s]) return;
	used[s] = true;
	d[s] = t++;
	for (int &v : G[s]) {
		DFS(v);
	}
	f[s] = t++;
}

int main()
{
	cin >> n;
	for (int i = 0, u, k; i < n; i++) {
		cin >> u >> k;
		for (int j = 0, v; j < k; j++) {
			cin >> v;
			G[u - 1].push_back(v - 1);
		}
	}
	t = 1;
	bool flag;
	do {
		flag = false;
		for (int i = 0; i < n; i++) {
			if (!used[i]) {
				DFS(i);
				flag = true;
				break;
			}
		}
	} while (flag);
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ' ' << d[i] << ' ' << f[i] << endl;
	}
	return 0;
}