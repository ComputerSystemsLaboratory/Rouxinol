#include <cstdio>

#define rep(i, j) FOR(i, 0, j)
#define FOR(i, j, k) for(int i = j; i < k; ++i)

using namespace std;

int main(){
  int n, m, p, x[101];
  while(scanf("%d%d%d", &n, &m, &p) && (n || m || p)){
    int sum = 0;
    rep(i, n){
      scanf("%d", x+i);
      sum += x[i];
    }

    if(x[m-1] != 0) printf("%d\n", sum *(100-p)/ x[m-1]);
    else printf("0\n");
  }
  return 0;
}