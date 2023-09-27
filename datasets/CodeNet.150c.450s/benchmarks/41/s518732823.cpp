/*Floyd算法，求解多源最短路，临界矩阵存图，三个大for跑遍天下*/
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
typedef long long ll;
const ll inf=1LL<<32;  //inf得足够大！不然会wa。。。
ll dis[110][110],i,j,k,n,m,a,b,w,flag;//要用long long
void Floyd()
{
	for(k=0; k<n; k++)
		for(i=0; i<n; i++)
			for(j=0; j<n; j++)
				if(dis[i][k]<inf&&dis[k][j]<inf) //必须写这个判断条件
					dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
}
int main()
{
	while(scanf("%lld%lld",&n,&m)!=EOF)
	{
		flag=0;
		for(i=0; i<n; i++)
			for(j=0; j<n; j++)
				if(i==j) dis[i][j]=0;
				else dis[i][j]=inf;
		for(i=0; i<m; i++)
		{
			scanf("%lld%lld%lld",&a,&b,&w);
			if(dis[a][b]>w)
			{
				dis[a][b]=w;
				//dis[b][a]=w;  //注意这个题是有向图,不用双向输入！
			}
		}
		Floyd();
		for(i=0; i<n; i++)
			if(dis[i][i]<0)//说明存在负环！
			{
				flag=1;
				break;
			}
		if(flag)
		{
			printf("NEGATIVE CYCLE\n");
			continue;
		}
		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
			{
				if(j) printf(" ");//emmmm...PE
				if(dis[i][j]==inf) printf("INF");
				else printf("%lld",dis[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
