#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
  for(int tci = 0; ; tci++) {
    int N, M; scanf("%d%d", &N, &M);
    if(N==0) break;
    static int h[1501], w[1501];
    h[0] = 0;
    for(int i = 0; i < N; i++) {
      scanf("%d", h+i+1);
      h[i+1] += h[i];
    }
    w[0] = 0;
    for(int i = 0; i < M; i++) {
      scanf("%d", w+i+1);
      w[i+1] += w[i];
    }
    static int a[1501*1501+1];
    int asz = 0;
    for(int i = 0; i <= N; i++) {
      for(int j = 0; j <= M; j++) {
        a[asz++] = h[i]+w[j];
      }
    }
    sort(a, a+asz);
    a[asz] = -1;
    long long cnt = 0;
    int subcnt = 0;
    for(int i = 0; i < asz; i++) {
      subcnt++;
      if(a[i] != a[i+1]) {
        cnt += (long long)subcnt*(subcnt-1)/2;
        subcnt = 0;
      }
    }
    printf("%lld\n", cnt);
  }
  return 0;
}