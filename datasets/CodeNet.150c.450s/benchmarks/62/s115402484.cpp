#include <stdio.h>

int main(){
  int input[10];
  int i;
  for(i =0; i < 3; i++){
    scanf("%d", &input[i]);
  }

  for(int i=0;i<2;i++){
    for(int j = 2;j>i;j--){
      if(input[j]<input[j-1]){
        int temp = input[j];
        input[j]=input[j-1];
        input[j-1] = temp;
      }
    }
  }

  for (i = 0; i < 3; i++) {
    printf("%d", input[i]);
    if (i < 2) {
      printf(" ");
    }else{
      printf("\n");
    }
  }
  return 0;
}