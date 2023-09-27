#include <cstdio>
#include <algorithm>
#include <bitset>
#include <iostream>

using namespace std;

const int R_MAX = 10;
const int C_MAX = 10000;
int R, C;

bitset<C_MAX> grid[R_MAX];

int res;

void dfs(int row) {
  if (row == R) {
    int total_up = 0;
    for(int i=0;i<C;i++) {
      int r_up = 0;
      for(int j=0;j<R;j++) {
        if (grid[j][i]) r_up++;
      }
      total_up += max(r_up, R-r_up);
    }

    res = max(total_up, res);
    return;
  }

  dfs(row+1);
  grid[row].flip();
  dfs(row+1);
}

void solve() {
  res = 0;
  dfs(0);
  printf("%d\n", res);
}

int main() {
  //bool temp;
  while(scanf("%d %d", &R, &C)) {
    if (!R && !C) {
      break;
    }

    for(int i=0;i<R;i++) {
      for(int j=0;j<C;j++) {
        int temp;
        cin >> temp;
        if (temp)   {
          grid[i][j] = 1;
        } else {
          grid[i][j] = 0;
        }
      }
    }
    solve();
  }
  return 0;
}


