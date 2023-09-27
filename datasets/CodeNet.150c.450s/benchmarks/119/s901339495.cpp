#include <iostream>
using namespace std;
int map[51][51],w,h;
void dfs(int y,int x){
	map[y][x] = 0;
	int tx,ty;
	for(int dx=-1;dx<=1;dx++){
		for(int dy=-1;dy<=1;dy++){
			tx = x + dx;
			ty = y + dy;
			if(tx > -1 && tx < w && ty > -1 && ty < h && map[ty][tx] == 1) dfs(ty,tx);
		}
	}
	return;

}
int main(){
	int count;
	while(cin >> w >> h && (w!=0 && h!=0)){
		count = 0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin >> map[i][j];
			}
		}
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(map[i][j] == 1){
					dfs(i,j);
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}