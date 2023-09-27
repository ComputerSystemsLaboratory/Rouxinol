#include <bits/stdc++.h>

using namespace std;

vector< vector<char> > field;
int h,w;
int dx[4] = { 0, 0, 1, -1};
int dy[4] = { 1, -1, 0, 0};
int ans = 0;

int dfs( int y, int x, char c){
  int ny, nx;
  field[y][x] = '.';
  
  for( int i = 0; i < 4; ++i){
    ny = y + dy[i];
    nx = x + dx[i];
    if( 0 <= ny && ny < h && 0 <= nx && nx < w ){
      if( field[ny][nx] == c){
	dfs( ny, nx, c);
      }
    }
  }
  return 0;
}


int main(){
  char tmp;

  while(1){
    ans = 0;
    cin >> h >> w;
    if( h == 0 && w == 0){
      break;
    }
    field.resize(h);
    for( int i = 0; i < h; ++i){
      field[i].resize(w);
      for(int j = 0; j < w; ++j){
	cin >> tmp;
	field[i][j] = tmp;
      }
    }

    for( int i = 0; i < h; ++i){
      for( int j = 0; j < w; ++j){
	if( field[i][j] != '.'){
	  ++ans;
	  dfs( i, j, field[i][j]);
	}
      }
    }

    cout << ans << endl;
  }
  return 0;
  
}