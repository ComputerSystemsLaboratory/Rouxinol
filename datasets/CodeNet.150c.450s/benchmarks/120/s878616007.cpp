#include <iostream>
#include <algorithm>
using namespace std;

int R, C;
const int MAX_R = 11;
const int MAX_C = 10001;
bool G[MAX_R][MAX_C];
int S[MAX_C];

void make() {
  for(int j = 0; j < C; ++j) {
    S[j] = 0;
    for(int i = 0; i < R; ++i) {
      if(G[i][j]) S[j] |= (1<<i);
    }
  }
}

int solve() {
  make();
  int res = 0;
  for(int bit = 0; bit < (1<<R); ++bit) {
    int cnt = 0;
    for(int j = 0; j < C; ++j) {
      int nb = bit ^ S[j];
      int tmp = 0;
      for(int i = 0; i < R; ++i) {
	if(nb & (1<<i)) ++tmp;
      }
      cnt += max(tmp, R-tmp);
    }
    res = max(res, cnt);
  }
  return res;
}

int main() {
  while(cin >> R >> C && R | C) {
    for(int i = 0; i < R; ++i) {
      for(int j = 0; j < C; ++j) {
	cin >> G[i][j];
	G[i][j] = !G[i][j];
      }
    }
    cout << solve() << endl;
  }
  return 0;
}