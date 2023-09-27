#include<stdio.h>
 
int main(){
  int x, h, m, s;

  scanf("%d %d %d", &x,&h,&m);

if(x<h && h<m){ 
  printf("Yes\n");
} else { 
  printf("No\n");
} 
 
  return 0;
}
