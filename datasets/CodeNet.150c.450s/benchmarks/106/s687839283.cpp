#include<stdio.h>
int main()
{
  int a, b, c, s,f, d;
  scanf("%d %d %d", &a, &b, &c);
  for (s=a;s <= b;s++){
    f=c%s;
    if(f == 0){
      d = d + 1;
        }
  }
  printf("%d\n", d);
  return 0;
}