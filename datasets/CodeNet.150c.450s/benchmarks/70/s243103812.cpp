#include <stdio.h>

int main(void){
  int days[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
  char youbi[7][100] = {"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
  int sum,m,d,i;
  while(1){
    sum = 0;
    scanf("%d %d",&m,&d);
    if (m == 0 || d == 0) break;
    for(i=0;i<m;i++){
      sum += days[i];
    }
    sum += d;
    printf("%s\n",youbi[sum%7]);
  }
  return 0;
}