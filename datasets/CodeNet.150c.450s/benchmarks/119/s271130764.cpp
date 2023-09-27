#include <iostream>
#include <algorithm>

using namespace std;

int c[50][50];

int dx[8] = {-1,-1,-1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1,-1, 1,-1, 0, 1};

int ret;

int w,h;

void dfs(int x,int y){
	if(c[x][y] == 0) return;
	c[x][y] = 0;
	for(int i=0;i<8;i++){
		if(x+dx[i] < 0 || x+dx[i] >= w) continue;
		if(y+dy[i] < 0 || y+dy[i] >= h) continue;
		dfs(x+dx[i],y+dy[i]);
	}
}

int main(){
	while(cin >> w >> h,w){
		ret = 0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin >> c[j][i];
			}
		}
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(c[j][i] == 1){
					ret++;
					dfs(j,i);
				}
			}
		}
		cout << ret << endl;
	}
	return 0;
}