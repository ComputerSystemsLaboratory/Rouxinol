#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
const int maxn=1100;
int h,w,n,dis[maxn][maxn],sx,sy,ans=0;
char maze[maxn][maxn];
int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
typedef pair<int,int>P;
int bfs(int x,int y,int c){
	char order=c+'0';
	for(int i=1;i<=h;i++)
		for(int j=1;j<=w;j++)dis[i][j]=maxn;
	queue<P>que;
	que.push(P(x,y));
	dis[x][y]=0;
	while(que.size()){
		P point=que.front();que.pop();
		if(maze[point.first][point.second]==order){
			sx=point.first,sy=point.second;
			return dis[point.first][point.second];
			break;
		}
		for(int i=0;i<4;i++){
			int nx=point.first+dx[i],ny=point.second+dy[i];
			if(1<=nx&&nx<=h&&1<=ny&&ny<=w&&maze[nx][ny]!='X'&&dis[nx][ny]==maxn){
				que.push(P(nx,ny));
				dis[nx][ny]=dis[point.first][point.second]+1;
			}
		}
	}
}
int main()
{
	//freopen("read.txt", "r", stdin);
	cin>>h>>w>>n;
	getchar();
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			cin>>maze[i][j];
			if(maze[i][j]=='S'){
				sx=i;sy=j;
			}
		}
		getchar();
	}
	for(int k=1;k<=n;k++){
		ans+=bfs(sx,sy,k);
	}
	cout<<ans<<endl;
	//fclose(stdin);
	return 0;
}