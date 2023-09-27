#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define INF 1145141919

int R, C;
bool S[10][10000];

void invertR(int k) {
  for (int i=0; i<10; i++) {
    if (k & (1<<i)) {
      for (int j=0; j<10000; j++) {
        S[i][j] = !S[i][j];
      }
    }
  }
}

int main() {
  while (cin >> R >> C) {
    if (R == 0 && C == 0) break;
    for (int i=0; i<R; i++) {
      for (int j=0; j<C; j++) {
        cin >> S[i][j];
      }
    }
    int ans = INF;
    for (int k=0; k<1024; k++) {
      invertR(k);
      int t = 0;
      for (int j=0; j<C; j++) {
        int c = 0;
        for (int i=0; i<R; i++) {
          if (S[i][j]) c++;
        }
        t += min(c, R-c);
      }
      ans = min(ans, t);
      invertR(k);
    }
    cout << R*C - ans << "\n";
  }
  return 0;
}