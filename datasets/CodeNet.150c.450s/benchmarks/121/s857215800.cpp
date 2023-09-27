#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>

int w, h;
int cnt;
int map[101][101];
struct Pos{ int x, y; Pos(int X, int Y){ x = X, y = Y ;} };

void dfs( int y, int x ){
	cnt++;
	std::queue<Pos> que;
	int kind = map[y][x];

	que.push( Pos( x, y ) );
	while( !que.empty() ){
		Pos p = que.front();
		que.pop();

		if( map[p.y][p.x] == -1 )continue;
		map[p.y][p.x] = -1;

		if( p.x + 1 < w && map[p.y][p.x + 1] == kind ){
			que.push(Pos(p.x + 1, p.y));
		}
		if( p.y - 1 >= 0 && map[p.y - 1][p.x] == kind ){
			que.push(Pos(p.x, p.y - 1));
		}
		if( p.x - 1 >= 0 && map[p.y][p.x - 1] == kind ){
			que.push(Pos(p.x - 1, p.y));
		}
		if( p.y + 1 < h && map[p.y + 1][p.x] == kind ){
			que.push(Pos(p.x, p.y + 1));
		}
	}

	return;
}

int main(){
	std::string str;

	while( std::cin >> h >> w, w * h != 0 ){
		cnt = 0;

		for( int i = 0; i < h; ++i ){
			std::cin >> str;
			for( int l = 0; l < w; ++l ){
				if( str[l] == '@' ){
					map[i][l] = 0;
				}else if( str[l] == '#' ){
					map[i][l] = 1;
				}else{
					map[i][l] = 2;
				}
			}
		}

		for( int i = 0; i < h; ++i ){
			for( int l = 0; l < w; ++l ){
				if( map[i][l] != -1 ){
					dfs(i, l);
				}
			}
		}

		std::cout << cnt << std::endl;
	}

	return 0;
}