#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <stack>
#include <queue>
#include <list>
#include <stdio.h>
#include <algorithm>
#define MAX 100000
using namespace std;
typedef long long ll;
int dp[1002][1002];
int lcs(string a,string b)
{
	a=" "+a;
	b=" "+b;
	int m,n;
	m=a.size();
	n=b.size();
	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[i]==b[j]){
				dp[i][j]=dp[i-1][j-1]+1;
			}else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	return dp[m][n]-1;
}
int main()
{	
	int n;
	string a,b;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		cout<<lcs(a,b)<<endl;
	}
	return 0;
}
