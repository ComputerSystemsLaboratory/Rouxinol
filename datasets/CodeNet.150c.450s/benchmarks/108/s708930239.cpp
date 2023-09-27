#include <stdio.h>
#include <vector>
#define rep(i, n) for(int i = 0; i < n; ++i)
using namespace std;
 
int main(void) {
  int n, ans = 0, inf = 10000;
  scanf("%d", &n);
  int dis[n];
  rep(i, n) dis[i] = inf;
  dis[0] = 0;
  vector< int > vec[n];
  rep(i, n) {
    int u, k;
    scanf("%d%d", &u, &k);
    u--;
    rep(j, k) {
      int v;
      scanf("%d", &v);
      v--;
      vec[u].push_back(v);
    }
  }
  rep(i, n - 1) {
    rep(j, n) {
      vector< int >::iterator it;
      for(it = vec[j].begin(); it != vec[j].end(); ++it) {
        if(dis[*it] > dis[j] + 1) dis[*it] = dis[j] + 1;
      }
    }
    /*rep(j, n) printf("%d ", dis[j]);
    printf("\n");*/
  }
  rep(i, n) {
    if(dis[i] != inf) printf("%d %d\n", i + 1, dis[i]);
    else printf("%d -1\n", i + 1);
  }
  return 0;
}

