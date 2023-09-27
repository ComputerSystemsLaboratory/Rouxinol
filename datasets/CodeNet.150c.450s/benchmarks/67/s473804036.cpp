#include <stdio.h>
 
int main() {
 
  int n,i,sum,k;
  int j;
 
  while(1) {
    sum = 0;
    k = 0;
    scanf("%d",&n);
 
    if(n == 0) break;
 
    for(j=1;j<=n;j++) {
      sum = 0;
    for(i=j;i<=n;i++) {
      sum += i;
 
      if(sum == n && i != n) k++;
      else if(sum > n) i = n+1;
 
    }
    }
 
    printf("%d\n",k);
 
  }
 
  return 0;
 
}