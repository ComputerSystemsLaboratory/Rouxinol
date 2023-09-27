#include <iostream>
#include <cstring>
using namespace std;

int w,h;
bool walked[50][50];
int map[50][50];

// top t-r right r-d down l-d left t-l
const int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};

void dfs(int x, int y) {
  walked[y][x] = true;
  for (int i = 0; i < 8; i += 1) {
    int tx = x + dx[i];
    int ty = y + dy[i];
    if (tx < 0 || tx >= w) continue;
    if (ty < 0 || ty >= h) continue;
    if (map[ty][tx]==1 && !walked[ty][tx])
    dfs(tx, ty);
  }
}

int main(int argc, char const* argv[]) {
  while (true) {
    cin>>w>>h;
    if (w == 0 && h == 0) break;
    int res = 0;
    memset(walked, false, sizeof walked);
    memset(map, 0, sizeof map);
    for (int i = 0; i < h; i += 1) {
      for (int j = 0; j < w; j += 1) {
        cin>>map[i][j];
      }
    }    
    for (int i = 0; i < h; i += 1) {
      for (int j = 0; j < w; j += 1) {
        if (map[i][j]==1 && !walked[i][j]) {
          dfs(j,i);
          res++;
        }
      }
    }
    cout<<res<<endl;
  }
  return 0;
}