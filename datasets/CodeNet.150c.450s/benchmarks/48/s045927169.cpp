#include <cstdio>
#include <cstring>
#include <algorithm>
#define MAX (2000000)
#define INF (1145141919)
using namespace std;

int dp[MAX + 1];

int main()
{
	dp[0] = 0;
	for (int i = 1; i <= MAX; i++){
		dp[i] = INF;
	}
	
	for (int i = MAX; i >= 0; i--){
		if (dp[i] < MAX){
			for (int x = 0; i + x <= MAX; x++){
				dp[i + x] = min(dp[i + x], dp[i] + x);
			}
		}
	}
	
	for (int i = MAX; i >= 0; i--){
		if (dp[i] < MAX){
			for (int y = 0; i + y * y <= MAX; y++){
				dp[i + y * y] = min(dp[i + y * y], dp[i] + y);
			}
		}
	}
	
	for (int i = MAX; i >= 0; i--){
		if (dp[i] < MAX){
			for (int z = 0; i + z * z * z <= MAX; z++){
				dp[i + z * z * z] = min(dp[i + z * z * z], dp[i] + z);
			}
		}
	}
	
	int e;
	while (scanf("%d", &e), e){
		printf("%d\n", dp[e]);
	}
	
	return 0;
}