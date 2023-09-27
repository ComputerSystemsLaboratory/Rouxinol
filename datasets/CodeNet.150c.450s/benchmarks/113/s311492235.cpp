#include <stdio.h>
   
int main(){

  int index = 1;
  int val = 0;

  while (1){

    scanf("%d", &val);

    if (val == 0){
      break;
    }

    printf("Case %d: %d\n", index, val);
    index++;
  }

  return 0;

}