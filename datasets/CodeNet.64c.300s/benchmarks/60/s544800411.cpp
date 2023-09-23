#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int W, H;
	int N;
	int state[16][16]; //マップの状態を表します. (0...ok 1...ng)
	int dp[16][16]; //その道に来る通り数.
	
	while (scanf("%d %d", &W, &H) && W != 0){
		scanf("%d", &N);
		
		memset(state, 0, sizeof(state));
		memset(dp, 0, sizeof(dp));
		
		for (int i = 0; i < N; i++){
			int x, y;
			scanf("%d %d", &x, &y);
			--x; --y;
			state[y][x] = 1;
		}
		
		dp[0][0] = 1;
		
		for (int i = 0; i < H; i++){
			for (int j = 0; j < W; j++){
				if (state[i][j] == 1){
					continue;
				}
				if (i - 1 >= 0){
					dp[i][j] += dp[i - 1][j];
				}
				if (j - 1 >= 0){
					dp[i][j] += dp[i][j - 1];
				}
			}
		}
		
		printf("%d\n", dp[H - 1][W - 1]);
	}
	
	return (0);
}