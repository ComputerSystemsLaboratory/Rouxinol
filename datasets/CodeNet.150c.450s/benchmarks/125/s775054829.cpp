#include <bits/stdc++.h>
using namespace std;
#define MAX 105

int Mytime = 1;
int d[MAX], f[MAX];
struct Vertex {
	int degree;
	vector<int> adj;
	Vertex(int x = 0) {
		degree = x;
	}
};
vector<Vertex> v;

void DFS(int now) {
	if (d[now] != 0) // 已经搜索过了
		return;
	d[now] = Mytime;
	Mytime++;
	int count;
	for (count = 0; count < v[now].degree; count++) {
		DFS(v[now].adj[count]);
	}
	f[now] = Mytime;
	Mytime++;
}

int main(void) {
	int n, i, j;
	Vertex temp;
	v.push_back(temp);
	cin >> n;
	int u, k, ve;
	for (i = 1; i <= n; i++) {
		d[i] = f[i] = 0;
		cin >> u >> k;
		v.push_back(temp);
		v[i].degree = k;
		while (k--) {
			cin >> ve;
			v[u].adj.push_back(ve);
		}
	}
	for (i = 1; i <= n; i++) {
		DFS(i);
	}
	for (i = 1; i <= n; i++) {
		cout << i << " " << d[i] << " " << f[i] << endl;
	}

}
