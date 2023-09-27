#include <cstdio>

int main(void){
  int n;
  while(scanf("%d",&n), n){
    int ans = 0, com_cum[1001];
    com_cum[1] = 0;
    for(int i=1; i <= n; i++){
      com_cum[i] = com_cum[i-1] + i;
    }
    for(int i=0; i < n; i++){
      for(int j=i+1; j < n; j++){
	if(n == com_cum[j] - com_cum[i])
	  ans++;
      }
    }
    printf("%d\n", ans);
  }
  return 0;
}