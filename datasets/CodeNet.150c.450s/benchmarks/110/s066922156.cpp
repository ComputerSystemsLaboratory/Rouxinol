#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<queue>
#include<stdio.h>
using namespace std;

typedef struct{
	int x,y;
}p;
char a[1005][1005];
p acm[11];
p s,g;
int b[1005][1005];
int H,W,N;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int bfs(p s,p g)
{
	queue<p> q;
	p n;
	memset(b,-1,sizeof(b));
	q.push(s);
	b[s.x][s.y]=0;
	while(!q.empty())
	{
		p h;
		h=q.front();
		q.pop();
		if(h.x==g.x&&h.y==g.y)
		{
			break;
		}
		for(int i=0;i<4;i++)
		{
			n.x=h.x+dx[i];
			n.y=h.y+dy[i];
			if(n.x>=0&&n.x<H&&n.y>=0&&n.y<W&&a[n.x][n.y]!='X'&&b[n.x][n.y]==-1)
			{
				q.push(n);
				b[n.x][n.y]=b[h.x][h.y]+1;
			}
		}
	}
	return b[g.x][g.y];
}
int main()
{
	int i,j,t,step=0;
	scanf("%d%d%d",&H,&W,&N);
	for(i=0;i<H;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<H;i++)
	for(j=0;j<W;j++)
	{
		if(a[i][j]>='1'&&a[i][j]<='9')
		{
			t=a[i][j]-'0';
		    acm[t].x=i;
		    acm[t].y=j;
		}
		else if(a[i][j]=='S')
		{
			s.x=i;
			s.y=j;
			a[i][j]='.';
		}
	}
		for(i=1;i<=N;i++)
		{
			g.x=acm[i].x;
			g.y=acm[i].y;
			step+=bfs(s,g);
			s.x=g.x;
			s.y=g.y;
			a[g.x][g.y]='.';
		}
	
	printf("%d\n",step);
	return 0;
 } 
