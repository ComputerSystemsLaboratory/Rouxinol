#include <bits/stdc++.h>
using namespace std;
const long long inf = 1LL << 60;
int N, M, a, b, c; long long dist[109][109];
int main() {
	scanf("%d%d", &N, &M);
	for(int i = 0; i < N; i++) {
		fill(dist[i], dist[i] + N, inf);
		dist[i][i] = 0;
	}
	for(int i = 0; i < M; i++) {
		scanf("%d%d%d", &a, &b, &c);
		dist[a][b] = c;
	}
	bool flag = false;
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			for(int k = 0; k < N; k++) {
				dist[j][k] = min(dist[j][k], dist[j][i] + dist[i][k]);
			}
			if(dist[j][j] != 0) flag = true;
		}
	}
	if(flag) puts("NEGATIVE CYCLE");
	else {
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < N; j++) {
				if(j) printf(" ");
				if(dist[i][j] >= 1LL << 40) printf("INF");
				else printf("%lld", dist[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}