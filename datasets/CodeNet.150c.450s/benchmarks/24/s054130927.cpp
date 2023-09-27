#include <cstdio>
#include <algorithm>

using namespace std;

typedef pair<int,int> pii;

int N, M;
pii PD[10010];

int main() {
  while (true) {
    scanf("%d %d", &N, &M);
    if (N == 0 && M == 0) break;
    for (int i=0;i<N;i++) {
      int D, P;
      scanf("%d %d", &D, &P);
      PD[i] = pii(-P, D);
    }
    sort(PD, PD+N);
    int idx = 0;
    while (M > 0 && idx < N) {
      if (PD[idx].second >= M) {
        PD[idx].second -= M;
        break;
      }
      M -= PD[idx++].second;
    }
    int ans = 0;
    for (int i=idx;i<N;i++) ans += -PD[i].first*PD[i].second;
    printf("%d\n", ans);
  }
  return 0;
}