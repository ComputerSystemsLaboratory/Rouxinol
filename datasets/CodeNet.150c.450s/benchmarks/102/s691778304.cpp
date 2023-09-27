#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;

bool map[20][20];//true??????
int W,H,X,Y;
int ct;
const int dx[] = {1,0,-1,0};
const int dy[] = {0,1,0,-1};

bool valid(int x,int y) {
	return 0 <= x && x < W && 0 <= y && y < H && map[x][y];
}

void dfs(int x,int y) {
	map[x][y] = false;
	ct++;
	for(int i = 0;i < 4;i++) {
		if(valid(x + dx[i],y + dy[i])) dfs(x + dx[i],y + dy[i]);
	}
}

int main() {
	while(cin >> W >> H && !(W == 0 && H == 0)) {
		ct = 0;
		for(int y = 0;y < H;y++) {
			char c;
			for(int x = 0;x < W;x++) {
				cin >> c;
				map[x][y] = !(c == '#');
				if(c == '@') {
					X = x;
					Y = y;
				}
			}
		}
		dfs(X,Y);
		cout << ct << endl;
	}
}