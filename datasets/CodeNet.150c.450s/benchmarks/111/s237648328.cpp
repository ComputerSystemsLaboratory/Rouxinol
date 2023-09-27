#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	long long int n,a[100],dp[101][21];
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<=20;i++){
		if(i==a[0])dp[0][i]=1;
		else dp[0][i]=0;
	}
	for(int i=1;i<n-1;i++){
		for(int j=0;j<21;j++){
			dp[i][j]=0;
			if(j+a[i]<=20)dp[i][j]+=dp[i-1][j+a[i]];
			if(j-a[i]>=0)dp[i][j]+=dp[i-1][j-a[i]];
		}
	}
/*	for(int i=0;i<n-1;i++){
		for(int j=0;j<21;j++){
			cout<<dp[i][j]<<" ";
		}cout<<endl;
	}*/
	cout<<dp[n-2][a[n-1]]<<endl;
}