#include<iostream>
using namespace std;
int dp[100][100],x[100][100],H,W,n,a,b;
int main(){
	while(true){
		cin>>H>>W;if(H==0)break;
		cin>>n;
		for(int i=0;i<10000;i++){dp[i/100][i%100]=0;x[i/100][i%100]=0;}
		for(int i=0;i<n;i++){cin>>a>>b;x[a][b]=1;}
		dp[0][1]=1;
		for(int i=1;i<=H;i++){
			for(int j=1;j<=W;j++){
				if(x[i][j]==1)continue;
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
		cout<<dp[H][W]<<endl;
	}
	return 0;
}