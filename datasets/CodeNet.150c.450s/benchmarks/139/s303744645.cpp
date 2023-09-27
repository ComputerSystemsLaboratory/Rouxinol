#include<bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz(v) (v).size()
#define all(v) (v).begin(),(v).end()
using namespace std;
template <typename T> T Max(T X,T Y){return X>Y?X:Y;}
template <typename T> T Min(T X,T Y){return X<Y?X:Y;}
template <typename T> void chmax(T &X,T Y){X=X>Y?X:Y;return;}
template <typename T> void chmin(T &X,T Y){X=X<Y?X:Y;return;}

const int maxn=100005,maxm=200005;
int n,m;
int len,to[maxm<<1],nxt[maxm<<1],head[maxn],dist[maxn],from[maxn];
queue<int> q;

inline void addedge(int u,int v)
{
	len++,nxt[len]=head[u],head[u]=len,to[len]=v;
	return;
}

int main()
{
	memset(dist,-1,sizeof(dist));
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++)
	{
		int u,v;
		scanf("%d%d",&u,&v);
		addedge(u,v);
		addedge(v,u);
	}
	
	dist[1]=0;
	q.push(1);
	while(!q.empty())
	{
		int pos=q.front();
		q.pop();
		for(int i=head[pos];i;i=nxt[i])
		{
			if(dist[to[i]]!=-1) continue;
			dist[to[i]]=dist[pos]+1;
			from[to[i]]=pos;
			q.push(to[i]);
		}
	}
	
	for(int i=1;i<=n;i++)
		if(dist[i]==-1)
		{
			printf("No\n");
			return 0;
		}
	
	printf("Yes\n");
	for(int pos=2;pos<=n;pos++)
		printf("%d\n",from[pos]);
	return 0;
}