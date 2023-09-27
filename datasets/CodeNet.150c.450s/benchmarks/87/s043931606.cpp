#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=(0); i<n; ++i)

double eps = 1e-10;
const int INF = 1e+9;
typedef pair<int, int> P;
typedef pair<int, P> pp;
const int MAX_N = 105000;

int H;
int maze[16][8];

int search(int x, int y, int c){
	int cnt = 0;
	while(1){
		if(x >= 5 || maze[y][x] != c)
			break;
		x += 1;
		cnt++;
	}
	if(cnt >= 3)
		return cnt;
	else
		return 0;
}

int main() {
	while(cin >> H && H){
		for(int i = 0; i < 16; ++i)
			for(int j = 0; j < 5; ++j)
				maze[i][j] = 0;
		for(int i = 0; i < H; ++i)
			for(int j = 0; j < 5; ++j)
				scanf("%d", &maze[i][j]);
				
		int ans = 0;
		while(1){
			bool next = false;
			for(int y = 0; y < H; ++y){
				int cnt;
				for(int x = 0; x < 3; ++x){
					if(maze[y][x] == 0)	
						continue;
					if(cnt = search(x, y, maze[y][x])){
						ans += maze[y][x] * cnt;
						for(int i = x; i < x + cnt; ++i){
							maze[y][i] = 0;
						}
						next = true;
						break;
					}
				}
			}
			if(!next)
				break;
			while(1){
				bool changed = false;
				for(int y = H - 1; y > 0; --y){
					for(int x = 0; x < 5; ++x){
						if(maze[y][x] == 0 && maze[y - 1][x]){
							swap(maze[y][x], maze[y - 1][x]);
							changed = true;
						}
					}
				}
				if(!changed)
					break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}