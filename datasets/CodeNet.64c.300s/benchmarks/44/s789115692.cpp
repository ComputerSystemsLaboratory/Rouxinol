#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define INF 0x3f3f3f3f

int map[15][15];
void floyd(int n)
{
	for(int k=0;k<=n;k++)
	{
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=n;j++)
			{
				map[i][j]=min(map[i][j],map[i][k]+map[k][j]);
			}
		}
	}
}
int main()
{
	int n,i,j,a,b,t;
	while(scanf("%d",&n),n)
	{
		int m=0;		
//		for(i=1;i<=n;i++)
//		{
//			for(j=1;j<=n;j++)
//			{
//				if(i==j) map[i][j]=0;
//				else	map[i][j]=INF;
//			}
//		}
		memset(map,INF,sizeof(map));
		for(i=0;i<n;i++)
		{
			scanf("%d%d%d",&a,&b,&t);
			map[a][b]=map[b][a]=min(map[a][b],t);
			if(a>m) m=a;
			if(b>m) m=b;
		}
		floyd(m);
		int tmp=0,ans=INF,k;
		for(i=0;i<=m;i++)
		{
			for(j=0;j<=m;j++)
			{
				if(i==j)
					continue;
				tmp+=map[i][j];
			}
			if(tmp<ans)	
			{
				ans=tmp;
				k=i;
			}
			tmp=0;
		}
		printf("%d %d\n",k,ans);
	}
	return 0;
}