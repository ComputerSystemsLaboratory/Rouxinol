#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;

typedef struct{
	int first;
	int second;
}point;

int main(){
	while(1){
		int w, h;
		int field[50][50];
		int dx[8]={1,1,0,-1,-1,-1,0,1}, dy[8]={0,1,1,1,0,-1,-1,-1};
		
		scanf(" %d %d", &w, &h);
		if(w==0) break;
		
		for(int i=0; i<h; ++i)
		for(int j=0; j<w; ++j)	
		scanf(" %d", &field[i][j]);
		
		int ans=0;
		for(int i=0; i<h; ++i){
			for(int j=0; j<w; ++j){
			
				if(field[i][j]==1){
					//printf("%d %d\n", i, j);
					queue<point> que;
					point p;
					p.first=i; p.second=j;
					field[i][j]=2; //訪問済み
					que.push(p);
					++ans;
					
					//bfs
					while(!que.empty()){
						p=que.front();
						que.pop();
						for(int k=0; k<8; ++k){
							int nf=p.first+dy[k], ns=p.second+dx[k];
							if(nf>=0 && nf<h && ns>=0 && ns<w && field[nf][ns]==1){
								field[nf][ns]=2;
								point q;
								q.first=nf;
								q.second=ns;
								que.push(q);
							}	
						}
					
					}
		
				}
			}
			
		}
		printf("%d\n", ans);
	}
	return 0;
}