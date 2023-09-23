#include<stdio.h>
int main()
{
  int j,k,l;
  scanf("%d %d %d",&j,&k,&l);
  if(j < k && k < l)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}