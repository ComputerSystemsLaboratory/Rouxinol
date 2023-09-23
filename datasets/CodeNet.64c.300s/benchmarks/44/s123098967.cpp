#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int inf=0x3f3f3f3f;
int map[15][15];
void floyd(int n)
{
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			for(int k=0;k<n;++k)
			{
				map[j][k]=min(map[j][k],map[j][i]+map[i][k]);
			}
		}
	}
}
void init(int n)
{
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<i;++j)
		{
			map[i][j]=map[j][i]=inf;
		}
		map[i][i]=0;
	}
}
int main()
{
	int n;
	while(scanf("%d",&n),n)
	{
		init(15);int m=0;
		for(int i=0;i<n;++i)
		{
			int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			map[a][b]=map[b][a]=min(map[a][b],c);
			m=max(max(m,a),b);
		}
		floyd(m+1);
		int ans=inf,res=0;
		for(int i=0;i<=m;++i)
		{
			int p=0;
			for(int j=0;j<=m;++j)
			{
				if(map[i][j]!=inf)
				{
					p+=map[i][j];
				}
			}
			if(p<ans)
			{
				ans=p;res=i;
			}
		}
		printf("%d %d\n",res,ans);
	}
	return 0;
}
