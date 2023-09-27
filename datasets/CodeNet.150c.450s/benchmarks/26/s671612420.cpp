#include<stdio.h>
 
int main(){
  int x, h, m, s;

  scanf("%d %d", &x,&h);

if(x>h){ 
  printf("a > b\n");
} else if(x<h){ 
  printf("a < b\n");
} else { 
  printf("a == b\n");
} 
 
  return 0;
}
