#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>

const int N = 10010;
const int M = 100010;

struct Edge {
	int x, y, w;
} es[M];

int p[N]; // parent id

bool cmp(const Edge &a, const Edge &b) {
	return a.w < b.w;
}

// find the root of x;
int find(int x) {
	if (p[x] == x) return x;
	return p[x] = find(p[x]);
}

void run() {
	int n, m, x, y, w;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d%d%d", &x, &y, &w);
		es[i].x = x;
		es[i].y = y;
		es[i].w = w;
	}
	std::sort(es, es + m, cmp);
	int sum = 0;
	for (int i = 0; i < n; i++)
		p[i] = i;
	for (int i = 0; i < m; i++) {
		int x = find(es[i].x);
		int y = find(es[i].y);
		if (x != y) {
			p[p[x]] = p[y];
			sum += es[i].w;
		}
	}
	printf("%d\n", sum);
}

int main() {
	run();
}