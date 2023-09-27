#include <iostream>
#include <queue>
#include <utility>
#include <ctype.h>
#include <cstdlib>
using namespace std;

typedef pair<int,int> P;
int H,W,N;
int inf = 10e8;
int dx[] = {-1,1,0,0},dy[] = {0,0,-1,1};
char G[1010][1010];
int hp = 1,sum = 0;
int sx,sy;
int times[1010][1010];

bool valid(int x,int y){
	return 0<=x && x<H && 0<=y && y<W && G[x][y]!='X';
}

int bfs(){
	queue<P> q;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			times[i][j] = inf;
		}
	}
	while(hp<=N){
		q.push(P(sx,sy));
		times[sx][sy] = 0;
		while(q.size()){
			P p = q.front();q.pop();
			if(isdigit(G[p.first][p.second]) && hp == atoi(&G[p.first][p.second])){
				hp++;
				sum += times[p.first][p.second];
				sx = p.first;sy = p.second;
				for(int i=0;i<H;i++){
					for(int j=0;j<W;j++){
						times[i][j] = inf;
					}
				}
				while(q.size()){
					q.pop();
				}
				break;
			}
			for(int i=0;i<4;i++){
				int x = p.first + dx[i] , y  = p.second + dy[i];
				if(valid(x,y) && times[x][y]==inf){
					q.push(P(x,y));
					times[x][y] = times[p.first][p.second] + 1;
				}
			}
		}
	}
	return sum;
}

int main(){
	cin >> H >> W >> N;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cin >> G[i][j];
			if(G[i][j] == 'S'){
				sx = i;
				sy = j;
			}
		}
	}
	cout << bfs() << endl;
}
