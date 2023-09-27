#include <stdio.h>
int main()
{
  int a,b;
  char su,sut,k;
  while(1){
    scanf("%d%c%c%c%d",&a,&su,&k,&su,&b);
    if(k=='?')break;
    if(k=='+')printf("%d\n",a+b);
    else if(k=='-')printf("%d\n",a-b);
    else if(k=='*')printf("%d\n",a*b);
    else if(k=='/')printf("%d\n",a/b);
  }
  return 0;
}