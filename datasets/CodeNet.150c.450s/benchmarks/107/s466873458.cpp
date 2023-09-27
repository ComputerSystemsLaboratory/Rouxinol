#include<iostream>//动态规划剪枝是么从dp0开始
#include<cmath>
#include<algorithm>
#include<string>//stl和数据结构应该一起训练
#include<memory.h>
using namespace std;
int dp[1001][1001];//模拟三种操作，首先分析题目看看能不能模拟操作
int n;
int solve(string a,string b)
{	
	int len1=a.size(),len2=b.size();
	for(int i=0;i<=len1;i++)
		dp[i][0]=i;
	for(int j=0;j<=len2;j++)
		dp[0][j]=j;
	for(int i=1;i<=len1;i++)
		for(int j=1;j<=len2;j++)
			if(a[i-1]==b[j-1])
			dp[i][j]=dp[i-1][j-1];
			else
				dp[i][j]=min(dp[i-1][j]+1,min(dp[i-1][j-1]+1,dp[i][j-1]+1));

return dp[len1][len2];
}
int main()
{
	string a,b;
	cin>>a>>b;
	cout<<solve(a,b)<<endl;
	return 0;
}
