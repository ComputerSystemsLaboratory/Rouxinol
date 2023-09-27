#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
#include <utility>

#define phb push_back
#define ppf pop_front
#define mkp make_pair
#define r first
#define c second
using namespace std;

typedef pair< int, int > Pr;
const int kDir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

int R, C, SR, SC;
char M[25][25];

void read();
void solve();

int main() {
  while (cin >> C >> R, R != 0 && C != 0)
    read(), solve();

  return 0;
}

void read() {
  fill(&M[0][0], &M[25][0], '#');
  for (int i = 1; i <= R; ++i)
    for (int j = 1; j <= C; ++j) {
      cin >> M[i][j];
      if (M[i][j] == '@')
        M[i][j] = '.', SR = i, SC = j;
    }
}

void solve() {
  static int vst[25][25], vst_cnt;
  int res = 0;
  deque< Pr > que;

  que.phb(mkp(SR, SC)), vst[SR][SC] = ++vst_cnt;
  while (!que.empty()) {
    Pr cur = que.front(); que.ppf(), ++res;
    for (int di = 0; di < 4; ++di) {
      Pr nxt(cur.r + kDir[di][0], cur.c + kDir[di][1]);
      if (M[nxt.r][nxt.c] == '.' && vst[nxt.r][nxt.c] != vst_cnt)
        que.phb(nxt), vst[nxt.r][nxt.c] = vst_cnt;
    }
  }

  cout << res << "\n";
}