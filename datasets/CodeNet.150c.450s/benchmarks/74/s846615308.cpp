#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>

using   namespace std;

const long long int MOD = 1000000007;
const long long int INF = 100000000;
long long int N,M;
long long int C[30];
long long int dp[21][100000];

int DP(int n,int v)
{
	if(n<0||v<0) return INF;

	if(dp[n][v]!=-1) return dp[n][v];
	return dp[n][v] = min(DP(n-1,v),DP(n,v-C[n])+1);
}

int main()
{
    cin >> N >> M;

		for(int i = 0; i < M; i++){
			cin>>C[i];
		}

    memset(dp,-1,sizeof(dp));

		for(int i = 0; i < 21; i++){
			dp[i][0]=0;
		}
    cout << DP(M - 1,N) << endl;

		return 0;
}

