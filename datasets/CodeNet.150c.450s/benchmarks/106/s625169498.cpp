#include <stdio.h>

int main(){
  int min, max, input, i = 0;
  int ans = 0;
  scanf("%d %d %d", &min, &max, &input);

  for(i=min;i<=max;i++){
    if(input%i ==0) {ans++;}
  }

  printf("%d\n", ans);

  return 0;

}