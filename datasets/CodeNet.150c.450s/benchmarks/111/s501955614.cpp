#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
typedef long long int ll;

int main()
{
	int n;
	ll s[100];
	cin >> n;
	for(int i=0;i<n;i++)cin >> s[i];
	ll dp[100][21];
	for(int i=0;i<21;i++){
		if(i==s[0])dp[0][i]=1;
		else dp[0][i]=0;
	}
	for(int i=1;i<n-1;i++){
		for(int j=0;j<=20;j++){
			if(j+s[i]>20)dp[i][j]=dp[i-1][j-s[i]];
			else if(j-s[i]<0)dp[i][j]=dp[i-1][j+s[i]];
			else dp[i][j]=dp[i-1][j-s[i]]+dp[i-1][j+s[i]];
		}
	}
	cout << dp[n-2][s[n-1]] << "\n";
	return 0;
}