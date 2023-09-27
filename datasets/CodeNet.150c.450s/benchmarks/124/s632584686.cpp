#include <cstdio>
#include <iostream>
using namespace std;
#define INF 0xfffffff
int dis[200][200];
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                if(i==j) 
				dis[i][j]=0;
                else dis[i][j]=INF;
            }
		for(int i=0;i<n;i++)
		{
			int a,b,c;
			scanf("%d",&a);
			int t;
			scanf("%d",&t);
			for(int j=0;j<t;j++)
			{
				scanf("%d %d",&b,&c);
				dis[a][b]=min(c,dis[a][b]);
			}
		}
		for(int k = 0; k < n; k++)  //枚举中间点（必须放最外层）
		  for(int i = 0; i < n; i++)  //枚举端点i
		    if(i != k)
		      for(int j = 0; j < n; j++)  //枚举端点j
		        if(i != j && j != k && dis[i][j] > dis[i][k] + dis[k][j])
		          dis[i][j] = dis[i][k] + dis[k][j];
		int f,g;
		f=0;g=0;
		dis[0][0]=0;
		for(g=0;g<n;g++)
		{
			printf ("%d %d\n",g,dis[f][g]);
		}
	}
}
