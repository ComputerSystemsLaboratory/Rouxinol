#include<stdlib.h>
#include<stdio.h>

int compare(const void* s,const void *t ){
  return (*((int*)t) - *((int*)s));
}

int main(){
  int height[10];
  int i=0;
  while(~scanf("%d",&height[i++]));
  qsort(height, 10, sizeof(height[0]), compare );
  for( i = 0; i < 3 ; i++ )
    printf("%d\n",height[i]);
  return 0;
}