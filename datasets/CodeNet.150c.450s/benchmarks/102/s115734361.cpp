#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int xs[] = {0, 1, 0, -1}, ys[] = {1, 0, -1, 0};
char c[108][108];
int w, h;
bool come[108][108];
int dfs(int x, int y){
	if(x < 0 || y < 0 || x >= h || y >= w)return 0;
	if(c[x][y] == '#')return 0;
	if(come[x][y])return 0;
	come[x][y] = true;
	int res = 1;
	for(int i = 0;i < 4;i++){
		res += dfs(x + xs[i], y + ys[i]);
	}
	return res;
}

int main(){
	int si, sj;
	while(cin >> w >> h, w | h){
		for(int i = 0;i < h;i++){
			for(int j = 0;j < w;j++){
				cin >> c[i][j];
				if(c[i][j] == '@'){
					si = i;
					sj = j;
				}
				come[i][j] = false;
			}
		}
		cout << dfs(si, sj) << endl;
	}
	return 0;
}