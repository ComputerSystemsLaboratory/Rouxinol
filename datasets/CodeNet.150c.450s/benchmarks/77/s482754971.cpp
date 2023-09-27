#include <cstdio>
#include <vector>
using namespace std;

int main() {
  int N;
  while (scanf("%d", &N), N) {
    vector<pair<int, int>> stones(N);
    for (int i = 0; i < N; ++i) {
      int x, y; scanf("%d%d", &x, &y);
      stones[i] = {x, y};
    }
    vector<bool> collected(N, false);
    int M; scanf("%d", &M);
    int x = 10, y = 10;
    for (int i = 0; i < M; ++i) {
      char d; int l; scanf(" %c%d", &d, &l);
      int ny = y, nx = x;
      switch (d) {
      case 'N': ny += l; break;
      case 'E': nx += l; break;
      case 'S': ny -= l; break;
      case 'W': nx -= l; break;
      }
      for (int j = 0; j < N; ++j) {
        auto p = stones[j];
        if ((x == nx && nx == p.first && min(y, ny) <= p.second && p.second <= max(y, ny)) ||
            (y == ny && ny == p.second && min(x, nx) <= p.first && p.first <= max(x, nx))) {
          collected[j] = true;
        }
      }
      x = nx; y = ny;
    }
    bool ok = true;
    for (bool b : collected) {
      if (!b) { ok = false; break; }
    }
    puts(ok ? "Yes" : "No");
  }
}