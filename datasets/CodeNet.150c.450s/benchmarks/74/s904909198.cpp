#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_M=20;
const int MAX_N=50000;

int main(){
	int dp[MAX_M][MAX_N+1];
	int n,m;
	int c[MAX_M];
	cin>>n>>m;
	int i,j;
	for (i=0;i<m;i++){
		cin>>c[i];
	}
	sort(c,c+m);
	//dp初期化
	for (j=1;j<=n;j++){
		dp[0][j]=j;	//j円を支払うのに必要なコインはj枚
	}
	for (i=0;i<m;i++){
		dp[i][0]=0;	//0円払うのに必要な枚数は0枚
	}
	for (i=1;i<m;i++){
		for (j=1;j<=n;j++){
			if (j-c[i]>=0){
				//コインを使える
				dp[i][j]=min(dp[i][j-c[i]]+1,dp[i-1][j]);
			}
			else{
				//コインを使えない
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	cout<<dp[m-1][n]<<endl;
	return 0;
}