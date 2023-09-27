#include <iostream>
using namespace std;

char land[101][101];
int used[101][101];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};
int h, w;

void dfs(int y, int x, char c) {
  for(int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(nx < 0 || nx > w || ny < 0 || ny > h) continue;
    else if(used[ny][nx] == 1) continue;
    else if(land[ny][nx] == c) {
      used[ny][nx] = 1;
      dfs(ny, nx, c);
    }
  }
}

int main() {
    while(1) {
    int count = 0;
    cin >> h >> w;
    if(h == 0 && w == 0) break;

    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
        cin >> land[i][j];
        used[i][j] = 0;
      }
    }

    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
        if(used[i][j] == 0) {
          used[i][j] = 1;
          count += 1;
          dfs(i, j, land[i][j]);
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}

