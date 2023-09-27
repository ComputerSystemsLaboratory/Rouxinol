#include <bits/stdc++.h>
using namespace std;

const int MAXV = 50005;

int coin[20], dp[MAXV];

int main(){

	int N, M;
	scanf("%d%d",&N,&M);

	for (int i=0; i<N; i++) scanf("%d",&coin[i]);

	memset(dp, -1, sizeof(dp));
	
	dp[0] = 0;
	for (int i=0; i<M; i++) {
    	for (int x = coin[i]; x <= N; x++) {
        	if (dp[x-coin[i]] == -1) continue;

        	if (dp[x] == -1 || dp[x] > dp[x-coin[i]] + 1)
        		dp[x] = dp[x-coin[i]] + 1;
    	}
	}

	if (dp[N] == -1) printf("Impossible\n");
	else printf("%d\n", dp[N]);
}