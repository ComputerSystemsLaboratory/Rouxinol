#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int n,m,ans;
int a[11][100001];
void dfs(int x)
{
	int i,j;
	if(x>=n)
	return;
	else
	{
		int sum=0;
		for(i=0;i<m;i++)
		{
			int count=0;
			for(j=0;j<n;j++)
			{
			  if(a[j][i]==1)
			  count++;	
			}
			
			sum+=max(count,n-count);
		}
		if(sum>ans)
		ans=sum;
		dfs(x+1);
		for(i=0;i<m;i++)
		{
			if(a[x][i]==1)
			a[x][i]=0;
			else
			a[x][i]=1;
		}
		dfs(x+1);
	   for(i=0;i<m;i++)
		{
			if(a[x][i]==1)
			a[x][i]=0;
			else
			a[x][i]=1;
		}
	}
}
int main()
{
	int i,j;
   while(~scanf("%d%d",&n,&m))
   {
   	if(n==0&&m==0)
   	break;
   	memset(a,0,sizeof(a));
   	ans=0;
   	for(i=0;i<n;i++)
   	{
   		for(j=0;j<m;j++)
   		{
   			scanf("%d",&a[i][j]);
		}
	}
	 dfs(0);
	 printf("%d\n",ans);
   }
  return 0;
}