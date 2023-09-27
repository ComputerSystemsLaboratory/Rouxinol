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
		int h, w;
		char f[101][101];
		
		scanf(" %d %d", &h, &w);
		if(h==0) break;
		for(int i=0; i<h; ++i)
		for(int j=0; j<w; ++j)
		scanf(" %c", &f[i][j]);
		
		int ans=0;
		for(int i=0; i<h; ++i){
			for(int j=0; j<w; ++j){
				if(f[i][j]=='-') continue;
				else{
					//printf(" %d %d\n", i, j);
					++ans;
					
					//bfs
					int dx[4]={1,0,-1,0}, dy[4]={0,1,0,-1};
					char fruit=f[i][j];
					point s;
					s.x=j; s.y=i;
					f[i][j]='-'; //訪問済み
					
					queue<point> que;
					que.push(s);
					while( !que.empty() ){
						point v=que.front();
						que.pop();
						for(int k=0; k<4; ++k){
							int nx=v.x+dx[k], ny=v.y+dy[k];
							if(nx>=0 && nx<w && ny>=0 && ny<h && f[ny][nx]==fruit){
								f[ny][nx]='-';	
								point tmp;
								tmp.x=nx; tmp.y=ny;
								que.push(tmp);
							}		
						}
						
					}
				}		
				
				/*
				for(int ii=0; ii<h; ++ii){
					for(int jj=0; jj<w; ++jj){
						printf("%c", f[ii][jj]);
					}
					printf("\n");
				}
				*/
			}
		}
		
		printf("%d\n", ans);
	}
}