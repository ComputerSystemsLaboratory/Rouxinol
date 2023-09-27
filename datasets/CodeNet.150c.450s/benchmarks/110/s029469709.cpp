#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<set>
#include<map>
#include<memory>
#define FOR(i,R) for(int i=0;i<R;i++)
#define ZERO(a) memset(a,0,sizeof(a))
using namespace std;
typedef pair<int,int> P;

const int INF=10000;

char maze[1024][1024];
int H,W,N;
int sx,sy;
int gx,gy;

int e[16][3];
int d[1024][1024];
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};

int bfs(){
	queue<P> que;
	for(int i=0;i<H;i++)for(int j=0;j<W;j++)d[i][j]=INF;
	que.push(P(sx,sy));
	d[sx][sy]=0;
	
	while(que.size()){
		P p=que.front(); que.pop();
		if(p.first==gx&&p.second==gy)break;
		for(int i=0;i<4;i++){
			int nx=p.first+dx[i],ny=p.second+dy[i];
			if(0<=nx&&nx<H&&0<=ny&&ny<W&&maze[nx][ny]!='X'&&d[nx][ny]==INF){
				que.push(P(nx,ny));
				d[nx][ny]=d[p.first][p.second]+1;
			}
		}
	}
	return d[gx][gy];
}

int main(){
	int i,j,k=0,t=0;
	cin>>H>>W>>N;
	FOR(i,H)FOR(j,W){
		cin>>maze[i][j];
		if(maze[i][j]=='S'){
			sx=i;sy=j;
		}else if('0'<=maze[i][j]&&maze[i][j]<='9'){
			k=maze[i][j]-'0';
			e[k][0]=i;e[k][1]=j;
		}
	}
	
	FOR(i,N){
		if(i==0){
			gx=e[1][0];
			gy=e[1][1];
		}else{
			sx=e[i][0];
			sy=e[i][1];
			gx=e[i+1][0];
			gy=e[i+1][1];
		}
		t+=bfs();
	}
	cout<<t<<endl;
}