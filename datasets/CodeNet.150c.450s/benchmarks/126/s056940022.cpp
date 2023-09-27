#include <cstdio>
#include <string.h>
using namespace std;

int main(){
	const int size = 16 + 1;
	int a, b, n, x, y;
	int dp[size][size];
	bool fab[size][size];
	
	while(true){
		scanf("%d%d", &a, &b);
		if(a == 0 && b == 0) break;
		scanf("%d", &n);
		memset(fab, false, sizeof(fab));
		for(int i = 0; i < n; i++){
			scanf("%d%d", &x, &y);
			fab[y][x] = true;
		}
		
		memset(dp, 0, sizeof(dp));
		dp[1][1] = 1;
		for(int i = 1; i <= b; i++){
			for(int j = 1; j <= a; j++){
				if(i == 1 && j == 1) continue;
				if(fab[i][j]) dp[i][j] = 0;
				else{
					dp[i][j] = ((i > 1)? dp[i - 1][j] : 0) + ((j > 1)? dp[i][j - 1] : 0);
				}
			}
		}
		
		printf("%d\n", dp[b][a]);
	}
	
	return 0;
}