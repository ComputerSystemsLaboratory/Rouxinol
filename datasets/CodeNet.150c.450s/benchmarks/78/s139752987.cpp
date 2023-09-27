#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

const int MAX_N=1e6;
const int MAX_M=180;

int dp[MAX_N];
int dp2[MAX_N];

int main(){
	REP(i,MAX_N){
		dp[i]=dp2[i]=i;
	}
	FOR(i,2,MAX_M+1){
		int p=i*(i+1)*(i+2)/6;
		FOR(j,p,MAX_N){
			dp[j]=min(dp[j],dp[j-p]+1);
			if (p&1){
				dp2[j]=min(dp2[j],dp2[j-p]+1);
			}
		}
	}
	int N;
	do{
		scanf("%d",&N);
		if (N){
			printf("%d %d\n",dp[N],dp2[N]);
		}
	}while(N);
	return 0;
}