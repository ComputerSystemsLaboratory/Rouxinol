#include <bits/stdc++.h>
using namespace std;

int field[50][50];
int w, h;

void dfs(int x, int y) {
  if(x < 0 || h <= x || y < 0 || w <= y || field[x][y] == 0) return; 
  field[x][y] = 0;
  for(int i = -1; i <= 1; i++) {
    for(int j = -1; j <= 1; j++) {
      if(i == 0 && j == 0) continue;
      dfs(x+i, y+j);
    }
  }
}

int main() {

  while(cin >> w >> h, w+h) {
    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
	cin >> field[i][j];
      }
    }

    int ans = 0;
    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
	if(field[i][j] == 1) {
	  ans++;
	  dfs(i,j);
	}
      }
    }

    cout << ans << endl;
  }
}