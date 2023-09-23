#include <cstdio>
#include <climits>
#include <algorithm>

using namespace std;

#define N 15
#define INF INT_MAX

int dp[N][N];

int n, ans_index, ans_length;

void solve(){
	for (int k = 0; k < n; k++){
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if (dp[i][k] != INF && dp[k][j] != INF){
					dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
				}
			}
		}
	}

	ans_index = 0;
	ans_length = INF;
	
	for (int i = 0; i < n; i++){
		int sum = 0;
		for (int j = 0; j < n; j++){
			if (i == j) continue;
			sum += dp[i][j];
		}
		if (sum < ans_length){
			ans_index = i;
			ans_length = sum;
		}
	}
}

int main(){
	int t;
	while(true){
		scanf("%d", &t);
		if (t == 0) break;
		n = 0;
		
		fill((int*)dp, (int*)dp + N * N, INF);
		for (int i = 0; i < t; i++){
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			if (a > n) n = a;
			if (b > n) n = b;
			dp[a][b] = c;
			dp[b][a] = c;
		}
		n++;
		solve();
		printf("%d %d\n", ans_index, ans_length);
	}
	return 0;
}