#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<vector>
#include<queue>
//aoj 0189
using namespace std;
int n;
struct pt{
	int e;
	int d;
};
int mbh,mans;
int ans;
int bh[11];
vector<pt> cun[21];
int vis[21];
int dis[21];
queue<int> dl;
void spfa(int ji)
{
	memset(dis,127,sizeof(dis));
	memset(vis,0,sizeof(vis));
	while(!dl.empty())
	{
		dl.pop();
	}
	dis[ji]=0;
	vis[ji]=1;
	dl.push(ji);
	while(!dl.empty())
	{
		int ls=dl.front();
		dl.pop();
		for(int i=0;i<cun[ls].size();i++)
		{
			int ee=cun[ls][i].e;
			int dd=cun[ls][i].d;
			if(dis[ee]>dis[ls]+dd)
			{
				dis[ee]=dis[ls]+dd;
				if(vis[ee]==0)
				{
					vis[ee]=1;
					dl.push(ee);
				}
			}
		}
		vis[ls]=0;
	}
	return;
}
int main()
{
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		mans=271270;
		ans=0;
		memset(bh,0,sizeof(bh));
		for(int i=0;i<=9;i++)
		{
			cun[i].clear();
		}
		for(int i=1;i<=n;i++)
		{
			int s,e;
			pt ls;
			scanf("%d%d%d",&s,&e,&ls.d);
			bh[s]=1;
			bh[e]=1;
			ls.e=e;
			cun[s].push_back(ls);
			ls.e=s;
			cun[e].push_back(ls);
		}
		for(int i=0;i<=9;i++)
		{
			if(bh[i]!=0)
			{
				spfa(i);
				for(int j=0;j<=9;j++)
				{
					if(dis[j]<20000)
					{
						ans+=dis[j];
					}
				}
				if(ans<mans)
				{
					mans=ans;
					mbh=i;
				}
			}
			ans=0;
		}
		printf("%d %d\n",mbh,mans);
	}
	return 0;
}






