#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
  int n, m, x1, y1, x, y, len;
  char dir;
  int grid[21][21];
  while(cin >> n, n){
    memset(grid, 0, sizeof(grid));
    x = 10; y = 10;
    grid[y][x] = 1;
    for(int i = 0 ; i < n ; i++){
      cin >> x1 >> y1;
      grid[y1][x1] = 5;
    }

    /*for(int a = 0 ; a < 21 ; a++){
  for(int b = 0 ; b < 21 ; b++){
    cout << grid[b][a];
  }
  cout << endl;
  }*/

    cin >> m;
    for(int i = 0 ; i < m ; i++){
      cin >> dir >> len;
      if(dir == 'N'){
	for(int j = 0 ; j < len ; j++){
	  grid[++x][y] = 1;
	}
      }
      if(dir == 'E'){
	for(int j = 0 ; j < len ; j++){
	  grid[x][++y] = 1;
	}
      }
      if(dir == 'S'){
	for(int j = 0 ; j < len ; j++){
	  grid[--x][y] = 1;
	}
      }
      if(dir == 'W'){
	for(int j = 0 ; j < len ; j++){
	  grid[x][--y] = 1;
	}
      }

      /* for(int a = 0 ; a < 21 ; a++){
  for(int b = 0 ; b < 21 ; b++){
    cout << grid[b][a];
  }
  cout << endl;
  }*/
    }
    bool flag=0;
    for(int i = 0 ; i < 21 ; i++){
      for(int j = 0 ; j < 21 ; j++){
	if(grid[i][j] == 5) flag = 1;
      }
    }
    if(flag == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}