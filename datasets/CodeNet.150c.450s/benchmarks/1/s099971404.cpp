#include<iostream>//动态规划剪枝是么从dp0开始
#include<cmath>
#include<algorithm>
#include<string>//stl和数据结构应该一起训练
#include<memory.h>
using namespace std;
int dp[100001];
int n;

int main()
{
	int a;
	cin>>n;
	int len=0;//len不能初始化为0
	for(int i=1;i<=n;i++)
	{	
		cin>>a;
		if(i==1)
		{
			len=1;
			dp[0]=a;
			continue;
		}
		if(a>dp[len-1])//只出现a[i]等价于a,数组越界了到了-1坑爹。。
		dp[len++]=a;
		else
			*lower_bound(dp,dp+len,a)=a;//确定位置，就是一种最优化想法
	}
	cout<<len<<endl;
	return 0;
}
