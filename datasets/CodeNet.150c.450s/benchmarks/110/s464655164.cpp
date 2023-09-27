#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;
int map[1005][1005];
struct node{
	int x,y,time;
}s[10],p;
queue<node> q;
int vis[1005][1005];
int n,m,T;
int dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int bfs(int a,int b){
	while(!q.empty())
		q.pop();
	q.push(s[a]);
	memset(vis,0,sizeof vis);
	vis[s[a].x][s[a].y]=1;
	while(!q.empty()){
		p=q.front();
		q.pop();
		int x=p.x,y=p.y,time=p.time;
		for(int i=0;i<4;i++){
			int x1=x+dir[i][0],y1=y+dir[i][1];
			if(x1<=0||y1<=0||x1>n||y1>m||vis[x1][y1]||map[x1][y1])
				continue ;
			if(x1==s[b].x&&y1==s[b].y)
				return time+1;
			vis[x1][y1]=1;
			p.x=x1,p.y=y1,p.time=time+1;
			q.push(p);
		}
	}
}
int main()
{
	scanf("%d%d%d",&n,&m,&T);
	for(int i=1;i<=n;i++){
		scanf("\n");
		for(int j=1;j<=m;j++){
			char c;
			c=getchar();
			if(c=='S')
				s[0].x=i,s[0].y=j;
			if(c=='X')
				map[i][j]=1;
			if(c>='1'&&c<='9')
				s[c-'0'].x=i,s[c-'0'].y=j;
		}
	}
	int time=0;
	for(int i=0;i<T;i++)
		time+=bfs(i,i+1);
	printf("%d\n",time);
}