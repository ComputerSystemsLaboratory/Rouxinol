#include <stdio.h>   
int main(){  int t1;
  scanf("%d",&t1);
  printf("%d:%d:%d\n",(t1/3600),((t1%3600)/60),((t1%3600)%60));
  return 0; } 