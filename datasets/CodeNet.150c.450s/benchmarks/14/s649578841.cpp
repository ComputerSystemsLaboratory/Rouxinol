#include <stdio.h>
int main(){
  int n,k;
  scanf("%d",&n);
  for(int i = 3;i <= n;i++){
    int x = i;
    int k = 0;
    if(x%3 == 0){ 
      k = 1;
      printf(" %d",i);
    }   
    while(x > 1 && k == 0){ 
      if(x%10 == 3){ 
        k = 1;
        printf(" %d",i);
      }   
      x /= 10; 
    }   
  }
  printf("\n");
}