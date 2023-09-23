#include<stdio.h>
int main()
{
  int f,d;
  scanf("%d %d",&f,&d);
  if(f>d)
    printf("a > b\n");
  else if(f<d)
    printf("a < b\n");
  else
    printf("a == b\n");
  return 0;
}