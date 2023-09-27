#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main (){
	int a, b, n;
	int dp[16][16];
	while (1){
		memset(dp, 0, sizeof(dp));
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		
		cin >> n;
		
		for (int i = 0; i < n; i++){
			int x, y;
			scanf("%d%d", &x, &y);
			dp[y-1][x-1] = -1;
		}
		
		dp [0][0] = 1;
		
		for (int i = 0; i < b; i++){
			for (int j = 0; j < a; j++){
				if (i == 0 && j == 0) continue;
				
				if (dp[i][j] == -1) dp[i][j] = 0;
				else if (i-1 < 0) dp[i][j] = dp[i][j-1];
				else if (j-1 < 0) dp[i][j] = dp[i-1][j];
				else dp[i][j] = dp[i-1][j]+dp[i][j-1];
			}
		}
		cout << dp[b-1][a-1] << endl;
	}
	
	return 0;
}