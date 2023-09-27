#include <bits/stdc++.h>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	s1="@"+s1;
	s2="@"+s2;
	int n=s1.size();
	int m=s2.size();
	int dp[n][m];
	r(i,n)dp[i][0]=i;
	r(i,m)dp[0][i]=i;
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			int cost=(s1[i]==s2[j]?0:1);
			dp[i][j]=min(dp[i-1][j-1]+cost,min(dp[i-1][j]+1,dp[i][j-1]+1));
		}
	}
	cout<< dp[n-1][m-1] <<endl;
}
