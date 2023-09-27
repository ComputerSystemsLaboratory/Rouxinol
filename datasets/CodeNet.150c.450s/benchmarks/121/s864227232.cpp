#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


class tile{
public:
	int x;
	int y;
	char c;

	tile(int x, int y, char c) : x(x), y(y), c(c){}
};


int h, w;
char map[100][100];
stack<tile> s;
int ans = 0;


void dfs(int x, int y){
	s.push(tile(x, y, map[y][x]));
	while(!s.empty()){
		int dx[4] = { 1, 0, -1, 0 };
		int dy[4] = { 0, 1, 0, -1 };
		tile t = s.top();
		s.pop();
		map[t.y][t.x] = '.';
		for(int i = 0;i < 4;i++){
			int X = t.x + dx[i];
			int Y = t.y + dy[i];
			if(0 <= X && X < w && 0 <= Y && Y < h && t.c == map[Y][X])
				s.push(tile(X, Y, map[Y][X]));
		}
	}
	ans++;
}


void solve(){
	for(int y = 0;y < h;y++){
		for(int x = 0;x < w;x++){
			if(map[y][x] != '.') dfs(x, y);
		}
	}
}


int main(){
	while (cin >> h >> w, h | w){
		for (int y = 0; y < h; y++){
			for (int x = 0; x < w; x++){
				cin >> map[y][x];
			}
		}

		solve();

		cout << ans << endl;
		ans = 0;
	}


	return 0;
}