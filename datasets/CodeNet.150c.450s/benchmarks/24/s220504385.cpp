#include <cstdio>
#include <algorithm>
using namespace std;
 
int main() {
  for(int tci = 0;; tci++) {
    int N,M; scanf("%d%d", &N, &M); if(!N) break;
    pair<int,int> *pd = new pair<int,int>[N];
    int ept = 0;
    for(int i = 0; i < N; i++) {
      scanf("%d%d", &pd[i].second, &pd[i].first);
      ept += pd[i].second * pd[i].first;
    }
    sort(pd, pd+N);
    reverse(pd, pd+N);
    int x = M;
    for(int i = 0; i < N && x > 0; i++) {
      ept -= min(pd[i].second, x) * pd[i].first;
      x -= pd[i].second;
    }
    printf("%d\n", ept);
  }
  return 0;
}