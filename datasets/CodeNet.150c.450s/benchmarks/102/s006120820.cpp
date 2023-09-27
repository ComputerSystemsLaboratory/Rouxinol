#include <iostream>
#include <cstdio>
using namespace std;

int dx[] = {0,1,0,-1},dy[] = {1,0,-1,0};

int w,h,res;
char field[20][20];

void dfs(int x,int y){
	res++;
	field[x][y] = '#';
	for(int i = 0;i < 4;i++){
		int nx = x + dx[i],ny = y + dy[i];
		if(nx >= 0 && nx < h && ny >= 0 && ny < w && field[nx][ny] == '.'){
			dfs(nx,ny);
		}
	}
}

int main(){
	int x,y;
	while(cin >> w >> h,w){
		res = 0;
		getchar();
		for(int i = 0;i < h;i++){
			for(int j = 0;j < w;j++) {
				field[i][j] = getchar();
				if(field[i][j] == '@'){
					x = i;
					y = j;
				}
			}
			getchar();
		}
		dfs(x,y);
		cout << res << endl;
	}
	return 0;
}