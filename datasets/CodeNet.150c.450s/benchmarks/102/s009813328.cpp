#include<iostream>
#include<queue>
#include<vector>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#define INF 999999
#define fst first
#define snd second
#define MAX 32
using namespace std;
typedef pair<int,int> P;
typedef unsigned long long ll;

int w,h,d[MAX][MAX],dx[4]={1,0,-1,0},dy[4]={0,1,0,-1},sx,sy;
char maze[MAX][MAX];
	
void bfs(){
	int i,j;
	queue<P> que;
	for(i=0;i<h;i++)for(j=0;j<w;j++)d[i][j]=0;
	que.push(P(sx,sy));
	while(que.size()){
		P p=que.front();
		que.pop();
		if(maze[p.fst][p.snd]=='#'||d[p.fst][p.snd])continue;
		d[p.fst][p.snd]=1;
		for(i=0;i<4;i++){
			int nx=p.fst+dx[i],ny=p.snd+dy[i];
			if(0<=nx&&nx<h&&0<=ny&&ny<w){
				que.push(P(nx,ny));
			}
		}
	}
}
	
int main(){
	int i,j,t;
	while(1){
		scanf("%d %d",&w,&h);
		getchar();
		if(w==0&&h==0)break;
		t=0;
		for(i=0;i<MAX;i++)for(j=0;j<MAX;j++)maze[i][j]='\0';
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				scanf("%c",&maze[i][j]);
				if(maze[i][j]=='@'){
					sx=i;
					sy=j;
				}
			}
			getchar();
		}
		bfs();
		for(i=0;i<h;i++)for(j=0;j<w;j++)t+=d[i][j];
		printf("%d\n",t);
	}
}