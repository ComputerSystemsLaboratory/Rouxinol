#include <stdio.h>
#include <vector>
#include <utility>
#define rep(i, n) for(int i = 0; i < n; ++i)
using namespace std;

int main(void) {
  int n, ans = 0;
  scanf("%d", &n);
  int dis[n];
  rep(i, n) dis[i] = 10e7;
  dis[0] = 0;
  vector< pair<int, int> > vec[n];
  rep(i, n) {
    int u, k;
    scanf("%d%d", &u, &k);
    rep(j, k) {
      int c, v;
      scanf("%d%d", &v, &c);
      pair<int, int> p = make_pair(v, c);
      vec[u].push_back(p);
    }
  }
  /*rep(i, n) {
    vector< pair<int, int> >::iterator it;
    for(it = vec[i].begin(); it != vec[i].end(); ++it) printf("%d:%d ", (*it).first, (*it).second);
    printf("\n");
  }*/
  rep(i, n - 1) {
    rep(j, n) {
      vector< pair<int, int> >::iterator it;
      for(it = vec[j].begin(); it != vec[j].end(); ++it) {
        if(dis[(*it).first] > dis[j] + (*it).second) dis[(*it).first] = dis[j] + (*it).second;
      }
    }
    /*rep(j, n) printf("%d ", dis[j]);
    printf("\n");*/
  }
  rep(i, n) printf("%d %d\n", i, dis[i]);
  return 0;
}
