#include <stdio.h>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int N, M;
int C[21];
int dp[51000];

int main(void){
	scanf("%d %d", &N, &M);

	for(int i = 0;i < M;++i){
		scanf("%d", &C[i]);
	}

	memset(dp, 0x3f, sizeof(dp));

	dp[0] = 0;
	for(int i = 0;i < M;++i){
		for(int j = C[i];j < N+1;++j){
			dp[j] = min(dp[j], dp[j - C[i]] + 1);
		}
	}

	printf("%d\n", dp[N]);
}
