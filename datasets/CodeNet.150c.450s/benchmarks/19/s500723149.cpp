#include <stdio.h>
   
int main(){

  int val[2] = {0};

  while (1){

    scanf("%d %d", &val[0], &val[1]);

    if (val[0] == 0 && val[1] == 0){
      break;
    }

    if (val[0] < val[1]){
        printf("%d %d\n", val[0], val[1]);
    }else{
        printf("%d %d\n", val[1], val[0]);
    }
  }

  return 0;

}