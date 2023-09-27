#include <cstdio>
using namespace std;

typedef long long Int;

int main(){
	const int MAX_N = 100;
	int N;
	int a[MAX_N];
	Int dp[MAX_N + 1][21];
	
	for(int i = 0; i <= MAX_N; i++){
		for(int j = 0; j <= 20; j++){
			dp[i][j] = 0;
		}
	}
	
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", a + i);
	}
	
	dp[0][0] = 1;
	for(int i = 1; i < N; i++){
		for(int j = 0; j <= 20; j++){
			if(j - a[i - 1] >= 0) dp[i][j] += dp[i - 1][j - a[i - 1]];
			if(j + a[i - 1] <= 20) dp[i][j] += dp[i - 1][j + a[i - 1]];
			if(i == 1 && a[i - 1] == 0) dp[i][j] /= 2;
		}
	}
	
	printf("%lld\n", dp[N - 1][a[N - 1]]);
	
	return 0;
}