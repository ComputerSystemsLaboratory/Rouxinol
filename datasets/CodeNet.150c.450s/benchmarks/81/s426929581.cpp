#include "cstdio"
#include "vector"
#include "queue"
using namespace std;

const int maxm=100;
struct edge{int to,w;};
edge edges[maxm];
vector<int>g[maxm];

int n,m,p;
int vis[maxm],dis[maxm];

int max(int a,int b){return a>b?a:b;}

void add(int u,int v,int w)
{
	edges[++p].to=v;
	edges[p].w=w;
	g[u].push_back(p);
}

void spfa(int s)
{
	for(int i=0;i<=50;i++)
		dis[i]=0x3f3f3f3f,vis[i]=0;
	
	queue<int>qn;
	qn.push(s);
	dis[s]=0;
	vis[s]=1;
	
	while(!qn.empty())
	{
		int nn=qn.front();qn.pop();
		vis[nn]=0;
		for(int i=0,d=g[nn].size();i<d;i++)
		{
			edge &e=edges[g[nn][i]];
			if(dis[e.to]>dis[nn]+e.w)
			{
				dis[e.to]=dis[nn]+e.w;
				if(!vis[e.to])
				{
					qn.push(e.to);
					vis[e.to]=1;
				}
			} 
		}
	}
	
}

int main()
{
	//freopen("r.txt","r",stdin);
	while(~scanf("%d",&m))
	{
		if(m==0)break;
		for(int i=0;i<=12;i++)
			g[i].clear();
		n=p=0;
		int u,v,w;
		for(int i=0;i<m;i++)
		{
			scanf("%d%d%d",&u,&v,&w);
			add(u,v,w);
			add(v,u,w);
			n=max(max(n,v),u);
		}
		
		int tot=0,ans=0x3f3f3f3f;
		for(int i=0;i<=n;i++)
		{
			spfa(i);
			int res=0;
			for(int j=0;j<=n;j++)
				res+=dis[j];
			if(res<ans)
			{
				ans=res;
				tot=i;
			}
		}
			
		printf("%d %d\n",tot,ans);
	}
	return 0;
} 
