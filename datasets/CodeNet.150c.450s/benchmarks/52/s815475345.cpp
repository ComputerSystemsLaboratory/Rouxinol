#include<stdio.h>

int main(){
  int i = 0, x;
  int data[100];
  while(scanf("%d", &x) != EOF){
    if(x != 0){
      data[i] = x;
      i++;
    }else{
      printf("%d\n", data[i-1]);
      i--;
    }
  }
  return 0;
}