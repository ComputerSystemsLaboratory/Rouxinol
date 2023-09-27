#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

const int MAX_N=50000;
const int MAX_M=20;

int d[MAX_M];
int dp[MAX_M+1][MAX_N+1];
int n,m;

void solve(){
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
                      if(j==0){
                            dp[i][j]=0;
                              }
                      else if(i==0){
                    	  dp[i][j]=10000;
                      }
                      else if(j<d[i-1]){
				dp[i][j]=dp[i-1][j];
			}
			else{
				dp[i][j]=min(dp[i-1][j],dp[i][j-d[i-1]]+1);
			}
		}

	}
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d",&d[i]);
	}

	solve();

	printf("%d\n",dp[m][n]);
	return 0;
}