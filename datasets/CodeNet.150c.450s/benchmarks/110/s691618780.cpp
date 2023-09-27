#include <iostream>
#include <queue>
using namespace std;

using P = pair<int, int>;

constexpr int MAX_H = 1000;
constexpr int MAX_W = 1000;

int H, W, N;
int sh{-1}, sw{-1}, gh{-1}, gw{-1};
char grid[MAX_H][MAX_W + 1];
int count[MAX_H][MAX_W];

//#define OCTAS
#ifdef OCTAS
constexpr int dh[]{-1, -1, -1, 0, 0, +1, +1, +1};
constexpr int dw[]{-1, 0, +1, -1, +1, -1, 0, +1};
#else
constexpr int dh[]{-1, 0, 0, +1};
constexpr int dw[]{0, -1, +1, 0};
#endif

// CAUTION!!!
// Call init_count() first!!!
//
void init_count() {
  fill(::count[0], ::count[0] + MAX_H * MAX_W, -1);
}

int bfs(int h, int w) {
  queue<P> que;
  ::count[h][w] = 0;
  que.push(P(h, w));

  while (!que.empty()) {
    P p = que.front();
    que.pop();
    int cnt = ::count[p.first][p.second];
    if (p.first == gh && p.second == gw) {
      return cnt;
    }
    ++cnt;
    for (int i{}; i < sizeof(dh) / sizeof(int); ++i) {
      int nh = p.first + dh[i];
      int nw = p.second + dw[i];
      if (nh < 0 || nh >= H ||
          nw < 0 || nw >= W ||
          ::count[nh][nw] >= 0 ||
          grid[nh][nw] == 'X')
        continue;
      ::count[nh][nw] = cnt;
      que.push(P(nh, nw));
    }
  }

  return -1;
}

int main() {
  scanf("%d%d%d", &H, &W, &N);
  for (int h{}; h < H; ++h) {
    scanf("%s", &grid[h][0]);
    if (gh < 0) {
      for (int w{}; w < W; ++w) {
        if (grid[h][w] == 'S') {
          gh = h;
          gw = w;
        }
      }
    }
  }

  int total{};
  for (int i{0}; i < N; ++i) {
    init_count();
    sh = gh;
    sw = gw;
    for (int h{}; h < H; ++h) {
      for (int w{}; w < W; ++w) {
        if (grid[h][w] == static_cast<char>('1' + i)) {
          gh = h;
          gw = w;
          goto FOUND;
        }
      }
    }
    FOUND:
    total += bfs(sh, sw);
  }

  printf("%d\n", total);
  return 0;
}

