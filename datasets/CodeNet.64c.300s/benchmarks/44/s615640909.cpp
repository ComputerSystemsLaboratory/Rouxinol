#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAXC 12
int N,dis[MAXC][MAXC];
int main()
{
	int m;
	while(~scanf("%d",&N)&&N)
	{
		for(int i=0;i<=9;i++)
			for(int j=0;j<=9;j++)
				if(i==j)
					dis[i][j]=0;
				else
					dis[i][j]=0x3FFFFFFF;
		m=0;
		for(int i=1,a,b,c;i<=N;i++)
		{
			scanf("%d%d%d",&a,&b,&c);
			m=max(m,max(a,b));
			dis[a][b]=dis[b][a]=c;
		}
		for(int k=0;k<=m;k++)
			for(int i=0;i<=m;i++)
				for(int j=0;j<=m;j++)
					dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
		int mn=0x3FFFFFFF,id,sum;
		for(int i=0;i<=m;i++)
		{
			sum=0;
			for(int j=0;j<=m;j++)
				sum+=dis[i][j];
			if(mn>sum)
			{mn=sum;id=i;}
		}
		printf("%d %d\n",id,mn);
	}
	return 0;
}