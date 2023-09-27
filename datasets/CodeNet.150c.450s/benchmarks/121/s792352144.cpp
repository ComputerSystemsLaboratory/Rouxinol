#include <iostream>
#include <algorithm>
#define int long long
using namespace std;

int h,w;
char field[100][100];

int dx[] = {1,0,-1,0},dy[] = {0,1,0,-1};

void dfs(char typ,int x,int y){
	field[x][y] = 0;
	for(int i = 0;i < 4;i++){
		int nx = x + dx[i],ny = y + dy[i];
		if(nx >= 0 && nx < h && ny >= 0 && ny < w && field[nx][ny] == typ){
			dfs(typ,nx,ny);
		}
	}
}

signed main(){
	while(cin >> h >> w,h){
		for(int i = 0;i < h;i++){
			for(int j = 0;j < w;j++){
				cin >> field[i][j];
			}
		}
		int res = 0;
		for(int i = 0;i < h;i++){
			for(int j = 0;j < w;j++){
				if(field[i][j] != 0) {
					dfs(field[i][j],i,j);
					res++;
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}