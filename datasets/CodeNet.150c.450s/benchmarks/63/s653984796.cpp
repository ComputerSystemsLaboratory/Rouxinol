#include<cstdio>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
const int INF=2147483647;
const int maxn=100000;
const int maxm=500000;
int n,m,s;
int fir[maxn],nxt[maxm],to[maxm],val[maxm],cnt;
void add_edge(int u,int v,int w)
{
    nxt[++cnt]=fir[u];fir[u]=cnt;to[cnt]=v;val[cnt]=w;
}
int dis[maxn],inq[maxn];
void SPFA(int s)
{
    for(int i=0;i<n;i++) dis[i]=INF; dis[s]=0;
    queue<int>Q;Q.push(s);
    while(!Q.empty()) {
        int u=Q.front(); Q.pop();
        for(int e=fir[u];e;e=nxt[e]) {
            int v=to[e],w=val[e];
            if(dis[u]+w<dis[v]) {
                dis[v]=dis[u]+w;
                if(!inq[v]) Q.push(v);
            }
        }
    }
}
int main()
{
    scanf("%d%d%d",&n,&m,&s);
    for(int u,v,w,i=0;i<m;i++) {
        scanf("%d%d%d",&u,&v,&w);
        add_edge(u,v,w);
    }
    SPFA(s);
    for(int i=0;i<n;i++){
	if (dis[i] == INF) {
		printf("INF\n");
	}else{
		printf("%d\n",dis[i]);
	}
}
    return 0;
}