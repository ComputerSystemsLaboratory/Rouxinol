#include <stdio.h>
#define rep(i, n) for(int i = 0; i < n; ++i)
 
int main(void) {
  int n, m;
  scanf("%d%d", &n, &m);
  int uf[n];
  rep(i, n) uf[i] = i;
  rep(i, m) {
    int s, t, nows, nowt;
    scanf("%d%d", &s, &t);
    nows = s, nowt = t;
    while(uf[nows] != nows) {
      nows = uf[nows];
    }
    while(uf[nowt] != nowt) {
      nowt = uf[nowt];
    }
    uf[nowt] = nows;
  }
  rep(i, n) {
    int nows = i;
    while(uf[nows] != nows) {
      nows = uf[nows];
    }
    uf[i] = nows;
  }
  /*rep(i, n) printf("%d ", uf[i]);
  printf("\n");*/
  int q;
  scanf("%d", &q);
  rep(i, q) {
    int s, t;
    scanf("%d%d", &s, &t);
    if(uf[s] != uf[t]) printf("no\n");
    else printf("yes\n");
  }
  return 0;
}

