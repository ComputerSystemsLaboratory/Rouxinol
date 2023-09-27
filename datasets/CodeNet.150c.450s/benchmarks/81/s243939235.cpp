#include <cstdio>
#include <algorithm>
#include <climits>
typedef long long ll;

const int max_t = 20;
ll dist[max_t][max_t];

int main() {
	//freopen("aoj0189.txt", "r", stdin);
	while (1) {
		int n, t = 0;
		scanf("%d", &n);
		if (n == 0) break;
		
		for (int i = 0; i < max_t; i++) {
			std::fill(dist[i], dist[i] + max_t, INT_MAX);
		}
		for (int i = 0; i < n; i++) {
			int from, to;
			ll d;
			scanf("%d%d%lld", &from, &to, &d);
			t = std::max(t, from);
			t = std::max(t, to);
			dist[from][to] = d;
			dist[to][from] = d;
		}
		for (int i = 0; i <= t; i++) {
			dist[i][i] = 0;
		}

		for (int k = 0; k <= t; k++) {
		for (int i = 0; i <= t; i++) {
			for (int j = 0; j <= t; j++) {
						dist[i][j] = std::min(dist[i][j], dist[i][k] + dist[k][j]);
				}
			}
		}

		ll min_len = INT_MAX;
		int start = -1;
		for (int i = 0; i <= t; i++) {
			ll len = 0;
			for (int j = 0; j <= t; j++) {
				if (j == i) continue;

				len += dist[i][j];
			}
			if (len < min_len) {
				min_len = len;
				start = i;
			}
		}

		printf("%d %lld\n", start, min_len);
	}
	return 0;
}