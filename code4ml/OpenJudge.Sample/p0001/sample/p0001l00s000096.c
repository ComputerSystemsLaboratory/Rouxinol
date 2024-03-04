#include <stdio.h>

int main(void){
  int a[200];
  int b[200];
  int ans[200];
  int num;
  int cnt;
  
  int i=0;
  while(scanf("%d", a+i) != EOF){
    num = 0;
    scanf(" %d", b+i);
    num = a[i] + b[i];
    ans[i] = 0;
    while( num ){
      num /= 10;
      ans[i]++;
    }
    
    i++;
  }
  
  int j;
  for( j = 0; j < i; j++ ){
    printf("%d\n", ans[j]);
  }
    
    
  return 0;
}