#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long int dp[101][21]={};
	int n,num[101];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	dp[1][num[0]]=1;
	for(int i=1;i<n-1;i++){
		for(int j=0;j<=20;j++){
			if(0<=j+num[i] && j+num[i]<=20)
				dp[i+1][j+num[i]]+=dp[i][j];
			if(0<=j-num[i] && j-num[i]<=20)
				dp[i+1][j-num[i]]+=dp[i][j];
		}
	}
	cout<<dp[n-1][num[n-1]]<<endl;
return 0;
}