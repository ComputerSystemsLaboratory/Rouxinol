#include <bits/stdc++.h>
#define LL long long
#define PII pair<int,int>
using namespace std;
const int MAXN = 100000;
const int INF = 1e9 + 5;

int dist[10][10];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int M;
	while (scanf("%d", &M) == 1 && M) {
		for (int i = 0; i < 10; i++) {
			fill(dist[i], dist[i] + 10, INF);
			dist[i][i] = 0;
		}
		
		for (int i = 0; i < M; i++) {
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			dist[a][b] = dist[b][a] = min(dist[b][a], c);
		}
		
		for (int k = 0; k < 10; k++) {
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
				}
			}
		}
		
		int id = -1, ans = INF;
		for (int i = 0; i < 10; i++) {
			int res = 0;
			for (int j = 0; j < 10; j++) {
				if (dist[i][j] != INF) {
					res += dist[i][j];
				}
			}
			if (res != 0 && res < ans) {
				ans = res;
				id = i;
			}
		}
		
		printf("%d %d\n", id, ans);
	}
	
	/**** Note MAXN ****/
}

