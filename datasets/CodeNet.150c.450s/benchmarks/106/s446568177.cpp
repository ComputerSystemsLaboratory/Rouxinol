#include <stdio.h>
   
int main(){

  int counter = 0;
  int val[3] = {0};

    scanf("%d %d %d", &val[0], &val[1], &val[2]);

    for (int i=val[0]; i<=val[1]; i++){
        
        if ((val[2] % i) == 0){
          counter++;
        }
    }

    printf("%d\n", counter);

  return 0;

}