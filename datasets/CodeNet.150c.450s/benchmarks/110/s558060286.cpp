#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;

typedef struct{
	int x;
	int y;
}point;

long d[1000][1000]={0};

int main(){
	int h, w, n;
	char f[1001][1001];
	point start, goal[9];
	
	scanf(" %d %d %d", &h, &w, &n);
	for(int i=0; i<h; ++i){
		for(int j=0; j<w; ++j){
			scanf(" %c", &f[i][j]);
			
			if(f[i][j]=='S'){
				start.x=j;
				start.y=i;	
			}
			else if('1'<=f[i][j] && f[i][j]<='1'+n-1){
				goal[f[i][j]-'1'].x=j;
				goal[f[i][j]-'1'].y=i;	
			}
		}
	}
	
	int dx[4]={1,0,-1,0}, dy[4]={0,1,0,-1};
	int now=0;
	long ans=0;
	while(now<n){
		memset(d, -1, sizeof(d));
		
		queue<point> que;
		d[start.y][start.x]=0;
		que.push(start);
		
		while( !que.empty() ){
			point v=que.front();
			que.pop();
			for(int i=0; i<4; ++i){
				int nx=v.x+dx[i], ny=v.y+dy[i];
				if(nx>=0 && nx<w && ny>=0 && ny<h && f[ny][nx]!='X' && d[ny][nx]==-1){
					d[ny][nx]=d[v.y][v.x]+1;
					point tmp;
					tmp.x=nx; tmp.y=ny;
					que.push(tmp);
				}
			}	
		}
		
		ans+=d[goal[now].y][goal[now].x];
		start=goal[now];
		now++;
	}
	
	printf("%ld\n", ans);
}