#include<cstdio>
#include<cstring>
#define INF 0x3f3f3f

int max(int x,int y)
{
	return x>y?x:y;
 } 
 int min(int x,int y)
 {
 	return x<y?x:y;
 }
int d[110][110];
void floyd(int n)
{
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				d[i][j]=min(d[i][j],(d[i][k]+d[k][j]));
			}
		}
	}
}
void into(int n)
{
	memset(d,INF,sizeof(d));
	for(int i=0;i<n;i++)
		d[i][i]=0;
}
int main()
{
	int n,m;
	int a,b,k;
	while(~scanf("%d",&n),n)
	{
		into(12);
		m=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d%d%d",&a,&b,&k);
			d[a][b]=d[b][a]=k;
			m=max(max(a,b),m);
		}
		floyd(m+1);
		int minn=INF;
		int kase;
		for(int i=0;i<=m;i++)
		{
			int ans=0;
			for(int j=0;j<=m;j++)
			{
				ans+=d[i][j]; 
			}
			if(ans<minn)
			{
				minn=ans;
				kase=i;
			}
			
		}
		printf("%d %d\n",kase,minn);
	}
	return 0;
}