#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<queue>
using namespace std;

const int INF=0x3f3f3f3f;
int h,w,n;//
typedef pair<int,int> P;
queue <P> q;
char g[1002][1002];
int x,y;//起点的横纵坐标
int nx,ny;//下一个点
int d[1002][1002];
int _x[4]={-1,0,0,1},_y[4]={0,-1,1,0};
bool is_legal(int x,int y)//格子是否越界
{
	if(x>=1&&x<=h&&y>=1&&y<=w) return true;
	else return false;
		
}
//队列初始要有起点
//从起点出发，目的地：power的奶酪
//power奶酪的最小步数
int bfs(int power)
{
	while(!q.empty()) q.pop();
	q.push(P(x,y));
	for(int i=1;i<=h;i++)
			for(int j=1;j<=w;j++)
			{
				d[i][j]=INF;
			}
	d[x][y]=0;
	while(!q.empty())
	{
		P p=q.front();
		q.pop();
		int row=p.first;
		int column=p.second;
		
		for(int i=0;i<4;i++)
		{
			nx=row+_x[i];
			ny=column+_y[i];
			if(!is_legal(nx,ny)) continue;
			
			//d[nx][ny]=d[row][column]+1;障碍物或越界，d数组不变
			if(g[nx][ny]=='0'+power) 
			{
				d[nx][ny]=d[row][column]+1;
				//下一次bfs的起点
				x=nx;
				y=ny;
				return d[nx][ny];
			}
			if(g[nx][ny]!='X') 
			{
				
				if(d[row][column]+1<d[nx][ny])
				{
					d[nx][ny]=d[row][column]+1;
				q.push(P(nx,ny));
				}
				
			}
		}
	}
	return INF;
}

int main()
{
	while(scanf("%d %d %d",&h,&w,&n)!=EOF)
	{
		for(int i=1;i<=h;i++)
			for(int j=1;j<=w;j++)
			{
				cin>>g[i][j];
				if(g[i][j]=='S') {x=i;y=j;}
			}
		
		int ans=0;
		
		
		//1～n奶酪的最小步数之和
		
		for(int k=1;k<=n;k++) {
			ans+=bfs(k);
		}
		
		cout<<ans<<endl;
	}
	return 0;
}
