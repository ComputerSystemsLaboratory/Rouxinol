#include<iostream>
#include<string>
using namespace std;
int dp[20][20];
int main(){
	int a,b;
	int n;
	int x[40],y[40];
	while(true){
	cin>>a>>b;
	if(a==0&&b==0)
		break;
	cin>>n;
	for(int i=0;i<20;i++)
		for(int j=0;j<20;j++)
			dp[i][j]=0;
	for(int i=1;i<n+1;i++){
		cin>>x[i]>>y[i];
		dp[y[i]][x[i]]=-1;
	}
	dp[1][1]=1;
	for(int i=1;i<b+1;i++){
		for(int j=1;j<a+1;j++){
			if(dp[i][j]!=-1){
			if(dp[i-1][j]>0)
				dp[i][j]+=dp[i-1][j];
			if(dp[i][j-1]>0)
				dp[i][j]+=dp[i][j-1];
			}
			else
				dp[i][j]=0;
		}
	}
	cout<<dp[b][a]<<endl;
	}
	return 0;
}