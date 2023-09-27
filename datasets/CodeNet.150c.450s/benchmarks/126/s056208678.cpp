#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int h,w,list[16][16],cnt;
void bfs(int x,int y){
	int dx[] = {0,1},dy[] = {1,0},tx,ty;
	if(y == (h-1) && x == (w-1)){
		++cnt;
		return;
	}
	for(int i = 0;i < 2;++i){
		tx = x + dx[i];
		ty = y + dy[i];
		if(tx < w && ty < h){
			if(!list[ty][tx]) bfs(tx,ty);
		}
	}
	return;
}
int main(){
	int n,x,y;
	while(cin >> w >> h,w){
		cin >> n;
		cnt = 0;
		memset(list,0,sizeof(list));
		for(int i = 0;i < n;++i){
			cin >> x >> y;
			--x;
			--y;
			++(list[y][x]);
		}
		bfs(0,0);
		cout << cnt << endl;
	}
}