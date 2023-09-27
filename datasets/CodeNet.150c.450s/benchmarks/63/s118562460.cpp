// single-source shortest path (BFS)

#include <cstdio>
#include <cstdlib>
#include <cstring>

const int N = 100010;
const int M = 500010;
const int inf = 0x3fffffff;

struct Edge {
	int to, len, next;
} es[M];

int SIZE = 0; // number of edges
int h[N]; // pointer to edge list
int dist[N], queue[N], inq[N]; // for calculating shortest path

inline void add(int u, int v, int w) {
	int i = ++SIZE;
	es[i].to = v;
	es[i].len = w;
	es[i].next = h[u];
	h[u] = i; 
}

inline int inc(int x) {
	return (x == N - 1 ? 0 : x + 1);
}

void sssp(int r) {
	int front = 0, back = 0;
	queue[back++] = r;
	while (front != back) {
		int x = queue[front];
		inq[x] = 0;
		front = inc(front);
		for (int i = h[x]; i; i = es[i].next) {
			int y = es[i].to;
			int new_d = dist[x] + es[i].len;
			if (new_d < dist[y]) {
				dist[y] = new_d;
				if (!inq[y]) {
					queue[back] = y;
					inq[y] = 1;
					back = inc(back);
				}
			}
		}
	}
}

void run() {
	int n, m, r, x, y, w;
	scanf("%d%d%d", &n, &m, &r);
	memset(h, 0, sizeof(h));
	for (int i = 0; i < m; i++) {
		scanf("%d%d%d", &x, &y, &w);
		add(x, y, w);
	}
	for (int i = 0; i < n; i++) {
		dist[i] = (i == r ? 0 : inf);
		inq[i] = 0;
	}
	sssp(r);
	for (int i = 0; i < n; i++)
		if (dist[i] == inf)
			printf("INF\n");
		else
			printf("%d\n", dist[i]);
}

int main() {
	run();
}