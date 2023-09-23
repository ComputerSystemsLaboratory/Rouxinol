#include<stdio.h>
#include<algorithm>
#include<vector>
#include<string.h>
#include<string.h>
#include<functional>
//aoj 0118
using namespace std;
int n,m,ans;
int cun[103][103];
int dh[5]={0,0,0,1,-1};
int dl[5]={0,1,-1,0,0};
void dfs(int h,int l)
{
	int ls=cun[h][l];
	cun[h][l]=0;
	for(int i=1;i<=4;i++)
	{
		if(h+dh[i]>0&&h+dh[i]<=n&&l+dl[i]>0&&l+dl[i]<=m&&cun[h+dh[i]][l+dl[i]]==ls)
		{
			dfs(h+dh[i],l+dl[i]);
		}
	}
}
int main()
{
	while(1)
	{
		scanf("%d%d",&n,&m);
		if(n==0&&m==0)
		{
			break;
		}
		memset(cun,0,sizeof(cun));
		ans=0;
		while(getchar()!='\n');
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				char aaa;
				scanf("%c",&aaa);
				if(aaa=='*')
				{
					cun[i][j]=1;
				}else if(aaa=='#')
				{
					cun[i][j]=2;
				}else if(aaa=='@')
				{
					cun[i][j]=3;
				}
			}
			while(getchar()!='\n');
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(cun[i][j]!=0)
				{
					ans++;
					dfs(i,j);
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}











