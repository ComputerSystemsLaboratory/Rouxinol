// #1140935 Solution for 0515: School Road by ryogo 
#include<iostream>
using namespace std;
int dp[17][17];
int main(){
	int a, b ,i, j, x, y;
	while(cin>>a>>b){
		if(a == 0 && b == 0) { break; }
		int n;
		cin>>n;
		for(i=1;i<=16;i++)for(j=1;j<=16;j++){dp[i][j]=0;}
		for(i=1;i<=n ;i++){
			cin>>x>>y; dp[y][x]=-1;
		}
		dp[1][1]=1;
		for(i=1;i<=b;i++){
			for(j=1;j<=a;j++){
				if(i==1 && j==1)continue;
				if(dp[i][j]!=-1){
					dp[i][j]=dp[i][j-1]+dp[i-1][j];
				}
				else dp[i][j]=0;
			}
		}
 
		cout<<dp[b][a]<<endl;
	}
}
