#include <cstdio>
#include <cstring>
#include <algorithm>
#define MAX (2000000)
#define INF (1145141919)
using namespace std;

int dp[MAX + 1];

int main()
{
	for (int i = 1000000; i >= 0; i--){
		dp[i] = i;
	}
	
	for (int i = 1000000; i >= 0; i--){
		for (int y = 0; y <= 1000; y++){
			dp[i + y * y] = min(dp[i + y * y], dp[i] + y);
		}
	}
	
	for (int i = 1000000; i >= 0; i--){
		for (int z = 0; z <= 100; z++){
			dp[i + z * z * z] = min(dp[i + z * z * z], dp[i] + z);
		}
	}
	
	int e;
	while (scanf("%d", &e), e){
		printf("%d\n", dp[e]);
	}
	
	return 0;
}