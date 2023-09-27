#include <stdio.h>
#define maxn 200010
int head[maxn],tot,n,m,d[maxn],pre[maxn],q[maxn*10],vis[maxn];
struct node{
	int to,next;
}e[maxn<<1];
void add_edge(int u,int v){
	tot++,e[tot].to=v,e[tot].next=head[u],head[u]=tot;
}
void init(){
	int i,u,v;
	scanf("%d%d",&n,&m);
	for(i=1;i<=m;i++){
		scanf("%d%d",&u,&v);
		add_edge(u,v),add_edge(v,u);
	}
}
void spfa(){
	int h,t,i,u,v,b;
	for(i=1;i<=n;i++)d[i]=maxn;
	d[1]=0,h=t=1,q[t]=1,t++,vis[1]=1;//以1点为起始点
	while(h<t){
		u=q[h];
		for(b=head[u];b;b=e[b].next){
			v=e[b].to;
			if(d[v]>d[u]+1){
				pre[v]=u;//记录到达v的前一个点
				d[v]=d[u]+1;
				if(!vis[v])vis[v]=1,q[t]=v,t++;
			}
		}
		h++;
		vis[u]=0;
	}
	for(i=1;i<=n;i++)
		if(d[i]==maxn){printf("No\n");return;}//若有点到不了1
	printf("Yes\n");
	for(i=2;i<=n;i++)printf("%d\n",pre[i]);
}
int main(){
	init();
	spfa();
	return 0;
}
 