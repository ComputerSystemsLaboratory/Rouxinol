#include<bits/stdc++.h>
#define INF 0x7f7f7f7f
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int cost[100][100];
int main() {
	int v, e; scanf("%d%d", &v, &e);
	memset(cost, 0x7f, sizeof(cost));
	rep(i, v)cost[i][i] = 0;
	rep(i, e) {
		int s, t, d; scanf("%d%d%d", &s, &t, &d);
		cost[s][t] = d;
	}
	rep(k, v)rep(i, v)rep(j, v) {
		if (cost[i][k] != INF&&cost[k][j] != INF)
			cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
	}
	rep(i, v) {
		if (cost[i][i] < 0) {
			puts("NEGATIVE CYCLE");
			return 0;
		}
	}
	rep(i, v)rep(j, v) {
		if (cost[i][j] == INF)printf("INF");
		else printf("%d", cost[i][j]);
		if (j == v - 1)printf("\n");
		else printf(" ");
	}
}