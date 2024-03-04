#include <stdio.h>
int main()
{
  int a,b;
  while((scanf("%d%d", &a,&b)) != EOF){
    int s = a+b,w=1;
    while(s>=10){
      s /= 10;
      w++;
    }
    printf("%d\n",w);
  }
  return 0;
}