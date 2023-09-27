#if 0
N間違い
#endif

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int N, M;
int C[25];
int cnt[25][50010];

int main() {
  cin >> N >> M;
  for (int i = 0; i < M; i++) cin >> C[i];
  sort(C, C+M);
  for (int i = 0; i < M; i++) {
    for (int c = 0; c <= N; c++) {
      if (i == 0)
        cnt[i][c] = c;
      else if (c == 0)
        cnt[i][c] = 0;
      else if (c-C[i] < 0)
        cnt[i][c] = cnt[i-1][c];
      else {
        cnt[i][c] = min(1 + cnt[i][c-C[i]], cnt[i-1][c]);
      }
    }
  }
  cout << cnt[M-1][N] << endl;
}

