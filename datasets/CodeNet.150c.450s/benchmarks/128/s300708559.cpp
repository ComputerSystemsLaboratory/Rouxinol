#include <stdio.h>
int main()
{
  int i=0;
  char a[20];
  while(1){
    scanf("%c",&a[i]);
    if(a[i]=='\n')break;
    i++;
  }
  for(i-=1;i>=0;i--){
    printf("%c",a[i]);
  }
  printf("\n");
  return 0;
}