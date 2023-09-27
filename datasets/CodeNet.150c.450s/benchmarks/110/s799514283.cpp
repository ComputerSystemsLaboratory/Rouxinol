#include <iostream>
#include <string>
#include <queue>
#define INF 1e+9
using namespace std;

typedef pair<int,int> P;

int dx[] = {1,0,-1,0},dy[] = {0,1,0,-1};

int dist[1000][1000];
string field[1000];

int main(){
	int h,w,n,x,y,res = 0;
	cin >> h >> w >> n;
	for(int i = 0;i < h;i++){
		cin >> field[i];
		for(int j = 0;j < w;j++){
			if(field[i][j] == 'S'){
				x = i;
				y = j;
			}
		}
	}
	queue<P> que;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < h;j++){
			for(int k = 0;k < w;k++) dist[j][k] = INF;
		}
		que.push(P(x,y));
		for(int d = 0;;d++){
			int siz = que.size();
			if(!siz) break;
			for(int j = 0;j < siz;j++){
				P p = que.front();que.pop();
				int nx = p.first,ny = p.second;
				if(dist[nx][ny] < d) continue;
				if(field[nx][ny] == i + 1 + '0'){
					x = nx;
					y = ny;
					res += dist[nx][ny];
				}
				for(int k = 0;k < 4;k++){
					int nnx = nx + dx[k],nny = ny + dy[k];
					if(nnx >= 0 && nnx < h && nny >= 0 && nny < w && field[nnx][nny] != 'X' && dist[nnx][nny] > d + 1){
						dist[nnx][nny] = d + 1;
						que.push(P(nnx,nny));
					}
				}
			}
		}
	}
	cout << res << endl;
	return 0;
}