#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int map[15][15],n,i,j,k,a,b,c,o,ans[15],zans;
int main()
{
	while(1)
	{
		o=0;
		scanf("%d",&n);
		if(n==0)
			return 0;
		for(i=0;i<=10;i++)
		{
			for(j=0;j<=10;j++)
				map[i][j]=2147483647;
		}
		for(i=1;i<=n;i++)
		{
			scanf("%d %d %d",&a,&b,&c);
			o=max(a,o);
			o=max(b,o);
			map[a][b]=min(c,map[a][b]);
			map[b][a]=min(c,map[b][a]);
		}
		for(k=0;k<=o;k++)
		{
			for(i=0;i<=o;i++)
			{
				for(j=0;j<=o;j++)
				{
					if(map[i][k]!=2147483647&&map[k][j]!=2147483647)
					map[i][j]=min(map[i][j],map[i][k]+map[k][j]);
				}
			}
		}
		zans=0;
		for(i=0;i<=o;i++)
		{
			ans[i]=0;
			for(j=0;j<=o;j++)
			{
				if(i!=j)
				ans[i]=ans[i]+map[i][j];
			}
			if(ans[i]<ans[zans])
				zans=i;
		}
		printf("%d %d\n",zans,ans[zans]);
	}
}