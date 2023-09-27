#include<cstdio>
#include<algorithm>
using namespace std;
const int INF = 1000000000;

int d[110], dNumber = 1;
int f(int c) { return c * (c + 1) * (c + 2) / 6; }
int dp1[1000000], dp2[1000000];

int main() {
  while (1) {
    d[dNumber] = f(dNumber);
    if (d[dNumber] > 1000000) break;
    dNumber++;
  }
  for (int i = 0; i < 1000000; i++) dp1[i] = dp2[i] = INF;
  dp1[0] = dp2[0] = 0;
  for (int i = 1; i < 1000000; i++) {
    for (int j = 1; j < dNumber; j++) {
      if (d[j] > i) break;
      dp1[i] = min(dp1[i], dp1[i - d[j]] + 1);
      if (d[j] % 2 == 1) dp2[i] = min(dp2[i], dp2[i - d[j]] + 1);
    }
  }
  int N;
  while (1) {
    scanf("%d", &N);
    if (N == 0) break;
    printf("%d %d\n", dp1[N], dp2[N]);
  }
}

