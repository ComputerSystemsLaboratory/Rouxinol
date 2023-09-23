#include<iostream>
#include<string>
using namespace std;
long long dp[100][21];
int main(){
	int n,s[100],w;
	cin>>n;
	for(int i=0;i<n-1;i++)
		cin>>s[i];
	cin>>w;
	for(int i=0;i<n;i++){
		for(int j=0;j<=20;j++){
			dp[i][j]=0;
		}
	}
	dp[0][s[0]]=1;
	for(int i=1;i<n-1;i++){
		for(int j=0;j<=20;j++){
			if(j-s[i]>=0)
				dp[i][j]+=dp[i-1][j-s[i]];
			if(j+s[i]<=20)
				dp[i][j]+=dp[i-1][j+s[i]];
		}
	}
	cout<<dp[n-2][w]<<endl;
	return 0;
}