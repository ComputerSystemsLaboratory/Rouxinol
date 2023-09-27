#include <ctype.h>
#include <stdio.h>
#include <string.h>

#include <queue>

using namespace std;

char map[1000][1000];
bool visited[1000][1000];
int W, H, N;
int startR, startC;
int targetR[10];
int targetC[10];

int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};

int getMinTime() {
  int time = 0;
  int curR = startR;
  int curC = startC;
  for (int i = 0; i < N; ++i) {
    memset(visited, false, sizeof(visited));
    queue<int> q;
    q.push((curR << 16) | curC);
    visited[curR][curC] = true;
    while (!visited[targetR[i]][targetC[i]]) {
      time++;
      int count = q.size();
      while (count-- > 0) {
        int node = q.front();
        q.pop();
        int r = node >> 16;
        int c = node & 0xffff;
        for (int j = 0; j < 4; ++j) {
          int nr = r + dr[j];
          int nc = c + dc[j];
          if (nr >= 0 && nr < H && nc >= 0 && nc < W && !visited[nr][nc] && map[nr][nc] != 'X') {
            visited[nr][nc] = true;
            q.push((nr << 16) | nc);
          }
        }
      }
    }
    curR = targetR[i];
    curC = targetC[i];
  }
  return time;
}

int main() {
  //freopen("Cheese.in", "r", stdin);
  while (scanf("%d%d%d", &H, &W, &N) == 3 && W != 0 && H != 0 && N != 0) {
    for (int r = 0; r < H; ++r) {
      for (int c = 0; c < W; ++c) {
        char ch;
        do {
          ch = getchar();
        } while (isspace(ch));
        if (ch == 'S') {
          startR = r;
          startC = c;
        } else if (isdigit(ch)) {
          int index = ch - '0' - 1;
          targetR[index] = r;
          targetC[index] = c;
        }
        map[r][c] = ch;
      }
    }
    int result = getMinTime();
    printf("%d\n", result);
  }
  return 0;
}