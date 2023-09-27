#include<iostream>
#include<algorithm>
#include<utility>
#include<queue>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define P pair<int, int>

using namespace std;
char field[20][20];
int W, H,sx,sy,nx,ny;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int cnt = 1;


void bfs(){
	queue<P> que;
	que.push(P(sx, sy));

	while (1){

		if (que.empty()){
			break;
		}
		P p = que.front();
		que.pop();
		
		rep(i, 4){
			nx = p.first + dx[i];
			ny = p.second + dy[i];
			if (nx >= 0 && nx < W && 0 <= ny && ny < H && field[ny][nx] == '.'){
				field[ny][nx] = '#';
				que.push(P(nx, ny));
				cnt++;
			}

		}

		/*

		rep(i, H){
			rep(j, W){
				cout << field[i][j];
			}
			cout << endl;
		}

		*/
	}



}





int main(){
	while (1){
		cin >> W >> H;
		if (W == 0 && H == 0){
			break;
		}
		rep(i, H){
			rep(j, W){
				cin >> field[i][j];
				if (field[i][j] == '@'){
					sx = j;
					sy = i;
				}
			}
		}
		bfs();
		cout << cnt << endl;
		cnt = 1;
	}
}