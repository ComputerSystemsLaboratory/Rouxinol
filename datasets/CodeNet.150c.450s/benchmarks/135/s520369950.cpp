#include <stdio.h>

int main() {
  int h[1501], w[1501];
  int n, m, i, j;
  
  while(scanf("%d%d", &n, &m) && (n|m)) {
    int dat[1500001] = {};
    n++, m++;
    h[0] = w[0] = 0;
    for(i=1; i<n; i++) { scanf("%d", &h[i]); h[i] += h[i-1]; }
    for(i=1; i<m; i++) { scanf("%d", &w[i]); w[i] += w[i-1]; }
    
    for(i=0; i<m-1; i++)
      for(j=i+1; j<m; j++)
	dat[w[j]-w[i]] ++;
    
    int cnt = 0;
    for(i=0; i<n-1; i++)
      for(j=i+1; j<n; j++)
	cnt += dat[h[j]-h[i]];
    
    printf("%d\n", cnt);
  }
  
  return 0;
}