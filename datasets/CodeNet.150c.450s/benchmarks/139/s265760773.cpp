#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

const int N = 100000;
vector<int> g[N];
bool u[N];
int p[N];

void bfs() 
{
	queue<int> q;
	q.push(0);
	u[0] = true;
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (int i = 0; i < g[v].size(); ++i) if (!u[g[v][i]]) {
			u[g[v][i]] = true;
			q.push(g[v][i]);
			p[g[v][i]] = v;
		}
	}
}

int main() 
{
	int n, m;
	scanf("%d%d", &n, &m);
	int a, b;
	for (int i = 0; i < m; ++i) {
		scanf("%d%d", &a, &b);
		g[a - 1].push_back(b - 1);
		g[b - 1].push_back(a - 1);
	}
	bfs();
	printf("Yes\n");
	for (int i = 1; i < n; ++i) printf("%d\n", p[i] + 1);
	return 0;
}
