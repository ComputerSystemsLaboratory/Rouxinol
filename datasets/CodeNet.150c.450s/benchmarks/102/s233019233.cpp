#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;

typedef struct{
	int x;
	int y;
}point;

int main(){
	while(1){
		int w, h;
		char field[30][30];
		int visit[30][30]={0};
		int ans=0;
		int dx[4]={1,0,-1,0}, dy[4]={0,1,0,-1};
		point start;
		
		scanf(" %d %d", &w, &h);
		if(w==0) break;	
		for(int i=0; i<h; ++i){
			for(int j=0; j<w; ++j){
				scanf(" %c", &field[j][i]);		
				if(field[j][i] == '@'){
					start.x=j;
					start.y=i;	
				}
			}	
		}
		
		queue<point> que;
		visit[start.x][start.y]=1;
		que.push(start);
		++ans;
		
		while(!que.empty()){
			point now=que.front();
			que.pop();
			
			for(int i=0; i<4; ++i){
				int nx=now.x+dx[i], ny=now.y+dy[i];
				
				if(nx>=0 && nx<w && ny>=0 && ny<h && field[nx][ny]=='.' && visit[nx][ny]==0){
					visit[nx][ny]=1;
					++ans;
					
					point pp;
					pp.x=nx; pp.y=ny;
					que.push(	pp);
				}
			}
		}
		
		printf("%d\n", ans);
	}
	
	return 0;
}