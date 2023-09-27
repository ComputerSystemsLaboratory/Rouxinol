#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int i = 1;

  for(;i <= n;i++){
    if(i%3 == 0){
      printf(" %d", i);
    }else{
      int temp = i;
      for(;temp >= 3;){
        if(temp%10 == 3){printf(" %d", i); break;}
        else{temp /= 10;}
      }
    }
  }
  printf("\n");
}