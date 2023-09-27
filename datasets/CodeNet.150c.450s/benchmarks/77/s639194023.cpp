#include <bits/stdc++.h>

int main() {

  int map[32][32];

  int N;
  int M;
  int xi, yi;
  int x, y;
  

  for(;;) {

    for(int i = 0; i < 32; ++i) {
      for(int j = 0; j < 32; ++j) {
	map[i][j] = 0;
      }
    }

    x = y = 10;
    
    std::cin >> N;
    if( N == 0 ) break;

    for(int i = 0; i < N; ++i) {
      std::cin >> xi >> yi;
      map[xi][yi] = 1;
    }

    std::cin >> M;
    for(int i = 0; i < M; ++i) {
      char d;
      int l;
      std::cin >> d >> l;
      if( d == 'N' ) {
	for(int ny = y; ny <= y+l; ++ny) {
	  map[x][ny] = 0;
	}
	y = y+l;
      }
      if( d == 'E' ) {
	for(int nx = x; nx <= x+l; ++nx) {
	  map[nx][y] = 0;
	}
	x = x+l;
      }
      if( d == 'S' ) {
	for(int ny = y; ny >= y-l; --ny) {
	  map[x][ny] = 0;
	}
	y = y-l;
      }
      if( d == 'W' ) {
	for(int nx = x; nx >= x-l; --nx) {
	  map[nx][y] = 0;
	}
	x = x-l;
      }
    }

    bool ans = true;
    for(int i = 0; i < 20; ++i) {
      for(int j = 0; j < 20; ++j) {
	if( map[i][j] != 0 ) {
	  ans = false;
	}
      }
    }
    if( ans ) {
      std::cout << "Yes" << std::endl;
    }
    else {
      std::cout << "No" << std::endl;
    }
  }
  
  return 0;
}