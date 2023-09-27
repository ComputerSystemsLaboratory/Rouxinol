#include <stdio.h>

int main(void){
  int x, y, z;
  scanf("%d %d %d\n", &x, &y, &z);
  if(x < y && y < z){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
}
