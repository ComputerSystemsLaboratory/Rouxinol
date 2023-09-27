#include <iostream>
#include <queue>
using namespace std;

const int MAX_SIZE = 21;
typedef pair<int, int> P;

int calc(char f[][MAX_SIZE], queue<P> q, int W, int H) {
  int n = 0;
  while (q.size()) {
    n++;
    P p = q.front();
    q.pop();
    int di[] = {-1, 1, 0, 0};
    int dj[] = {0, 0, -1, 1};
    for (int k = 0; k < 4; ++k) {
      int i = p.first  + di[k];
      int j = p.second + dj[k];
      if (i >= 0 && j >= 0 && i < H && j < W && f[i][j] == '.') {
        f[i][j] = '#';
        q.push(P(i, j));
      }
    }
  }
  return n;
}
int main() {
  int W, H;
  char f[MAX_SIZE][MAX_SIZE];
  while (true) {
    queue<P> q;
    cin >> W >> H;
    if (W == 0 && H == 0) break;
    for (int i = 0; i < H; ++i) {
      cin >> f[i];
      for (int j = 0; j < W; ++j) {
        if (f[i][j] == '@') {
          q.push(P(i, j));
        }
      }
    }
    cout << calc(f, q, W, H) << endl;
  }
}