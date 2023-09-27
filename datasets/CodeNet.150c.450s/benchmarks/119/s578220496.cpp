#include <iostream>
#include <cstdio>
using namespace std;
#define N 50

const int dx[]={-1,-1,-1,0,0,1,1,1};
const int dy[]={-1,0,1,-1,1,-1,0,1};
int w,h;
int map[N][N];

void rec(int y,int x){
	map[y][x]=0;
	for(int i=0;i<8;i++){
		int nextx = x + dx[i];
		int nexty = y + dy[i];
		if(nextx>=0&&nexty>=0&&nextx<w&&nexty<h){
			if(map[nexty][nextx]==1){
				rec(nexty,nextx);
			}
		}
	}

}
	

int main(){

	while(cin >> w >> h){
		if(w==0&&h==0) break;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				scanf("%d",&map[i][j]);
			}
		}
	
		int count=0;
	
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(map[i][j]==1){
					rec(i,j);
					count++;
				}
			}
		}
		cout<<count<<endl;
	}

	return 0;
}