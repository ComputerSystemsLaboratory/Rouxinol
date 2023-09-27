#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> Pair;

int w;
int h;
char field[1145][1419];
bool used[1145][1419];
queue<Pair> q;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

bool WithinRange(int y, int x) {
  if (y < 0 || h <= y) return false;
  if (x < 0 || w <= x) return false;
  return true;
}

int main() {
  while (1) {
    scanf("%d%d", &w, &h);
    if (w == 0 && h == 0) return 0;

    for (int i=0; i<h; i++) {
      for (int j=0; j<w; j++) {
        scanf(" %c", &field[i][j]);
        if (field[i][j] == '@') q.push(Pair(i, j));
        used[i][j] = false;
      }
    }

    int ans = 0;
    while (!q.empty()) {
      Pair p = q.front(); q.pop();
      int y = p.first;
      int x = p.second;
  
      if (used[y][x]) continue;    
      used[y][x] = true;
      ans++;

      for (int i=0; i<4; i++) {
        int newy = y + dy[i];
        int newx = x + dx[i];
        if (!WithinRange(newy, newx)) continue;
        if (field[newy][newx] == '#') continue;
        if (used[newy][newx]) continue;
        
        q.push(Pair(newy, newx));
      }
    }

    printf("%d\n", ans);
  }
}
  