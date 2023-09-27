#include <iostream>

using namespace std;

const int MAX_H = 100;
const int MAX_W = 100;

int H, W;
int dx[]={0,-1,1,0}, dy[]{1,0,0,-1};
int nx, ny;
int num;

char orchard[MAX_H][MAX_W+1];

void dfs(int x, int y, char tree){
	orchard[x][y]='x';
	
	for(int i=0;i<4;i++){
		nx=x+dx[i], ny=y+dy[i];
		if(nx>=0&&nx<W&&ny>=0&&ny<H&&orchard[nx][ny]==tree){
			dfs(nx, ny, tree);
		}
	}
	return;
}

int main(){
	while(cin >> H >> W && H && W){
		num=0;
		for(int j=0;j<H;j++)
			for(int i=0;i<W;i++){
				cin >> orchard[i][j];
			}
		for(int j=0;j<H;j++)
			for(int i=0;i<W;i++){
				if(orchard[i][j]!='x'){
					dfs(i,j,orchard[i][j]);
					num++;
				}
			}
		cout << num << endl;
	}
	return 0;
}