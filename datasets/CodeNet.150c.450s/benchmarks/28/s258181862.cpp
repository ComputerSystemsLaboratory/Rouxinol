#include <bits/stdc++.h>
using namespace std;
    
int main() {
  int N, M; cin >> N >> M;
  int a[100000] = {};
  for(int i=0; i<N; i++)
    scanf("%d", a+i);

  int l = 0, r = INT_MAX/4;
  while(r - l > 1) {
    int m = (l+r)/2;
    int num = 0;
    for(int i=0; i<M; i++) {
      int size = m;
      for(;;) {
        if(num == N) break;
        if(size - a[num] < 0) break;
        size -= a[num++];
      }
      if(num == N) break;
    }
    if(num == N) { r = m;}
    else { l = m; }
  }
        
  printf("%d\n", l+1);

  return 0;
}