#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<stdio.h>
#include<string.h>
#include<set>
#define INF 99999999

using namespace std;

typedef pair<int,int> P;
typedef queue<P> Q;


int H,W,N;
char cmap[1200][1200];
int sx,sy;
int kotae;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int d[1200][1200];

void bfs(int x,int y,int a){
	for(int i=0;i<1200;i++){
		for(int j=0;j<1200;j++){
			d[j][i] = INF;
		}
	}
	d[x][y] = 0;
	Q q;
	q.push(P(x,y));
	while(!q.empty()){
		P p = q.front();q.pop();
		for(int i = 0;i<4;i++){
			int nx = p.first + dx[i];
			int ny = p.second + dy[i];
			if(nx<0 || nx>=W || ny<0 || ny>=H)continue;
			if(cmap[nx][ny] == 'X')continue;
//			printf("d[%d][%d]=%d\n",nx,ny,d[nx][ny]);
//			printf("cmap[%d][%d]=%c\n",nx,ny,cmap[nx][ny]);
//			printf("a=%d\n",a);
			if(cmap[nx][ny] == a+'0'){
//				printf("a\n");
				d[nx][ny] = d[p.first][p.second]+1;
				kotae += d[nx][ny];
//				printf("kotae=%d\n",kotae);
				sx = nx;sy = ny;
				return;
			}
			if(d[nx][ny] == INF){
				d[nx][ny] = d[p.first][p.second]+1;
				q.push(P(nx,ny));
			}
		}
	}
}

int main(){
	cin >> H >> W >> N;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cin >> cmap[j][i];
			if(cmap[j][i] == 'S'){
				sx = j;sy = i;
			}				
		}
	}
	for(int i=0;i<N;i++){
		bfs(sx,sy,i+1);
	}
	cout << kotae << endl;
	return 0;
}
		