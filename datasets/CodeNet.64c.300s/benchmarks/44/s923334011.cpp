#include <bits/stdc++.h>

using namespace std;

#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 25)
#define MOD 1e9 + 7

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<int, P> Pi;

int N;
int G[64][64];

int main() {
	while(scanf("%d", &N), N) {
		int mini = 10, maxi = -1;
		rep(i, 10) rep(j, 10) {
			if(i == j) G[i][i] = 0;
			else G[i][j] = INF;
		}
		rep(i, N) {
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			G[a][b] = c; G[b][a] = c;
			if(maxi < a) maxi = a;
			if(maxi < b) maxi = b;
			if(mini > a) mini = a;
			if(mini > b) mini = b;
		}
		FOR(k, mini, maxi + 1) FOR(i, mini, maxi + 1) FOR(j, mini, maxi + 1) {
			G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
		}
		int ans_num, ans_cost = INF;
		FOR(i, mini, maxi + 1) {
			int sum = 0;
			FOR(j, mini, maxi + 1) {
				sum += G[i][j];
			}
			if(ans_cost > sum) {
				ans_cost = sum;
				ans_num = i;
			}
		}
		printf("%d %d\n", ans_num, ans_cost);
	}
	return 0;
}