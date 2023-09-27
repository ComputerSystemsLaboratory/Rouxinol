#include <cstdio>
#include <cctype>
#include <queue>
using namespace std;
typedef pair<int, int> P;

const int INF = 100000000;
const int MAX_N = 9;
const int MAX_H = 1000;
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};

int H, W, N;
P A[MAX_N + 1];
int d[MAX_H][MAX_H];
char field[MAX_H][MAX_H + 1];

int bfs(int s) {
  queue<P> que;
  for (int i = 0; i < H; i++) 
    for (int j = 0; j < W; j++) d[i][j] = INF;
  que.push(A[s]);
  d[A[s].first][A[s].second] = 0;
  while(que.size()) {
    P p = que.front(); que.pop();
    if (p == A[s + 1]) break;
    for (int i = 0; i < 4; i++) {
      int nx = p.first + dx[i], ny = p.second + dy[i];
      if (0 <= nx && nx < H && 0 <= ny && ny < W && field[nx][ny] != 'X' && d[nx][ny] == INF) {
        que.push(P(nx, ny));
        d[nx][ny] = d[p.first][p.second] + 1;
      }
    }
  }
  return d[A[s + 1].first][A[s + 1].second];
}

int main() {
  scanf("%d%d%d", &H, &W, &N);
  for (int i = 0; i < H; i++) {
    scanf("%s", field[i]);
  }
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (field[i][j] == 'S') {
        A[0] = P(i, j);
      } else if (isdigit(field[i][j])) {
        A[field[i][j] - '0'] = P(i, j);
      }
    }
  }
  int res = 0;
  for (int i = 0; i < N; i++) {
    res += bfs(i);
  }
  printf("%d\n", res);
  return 0;
}