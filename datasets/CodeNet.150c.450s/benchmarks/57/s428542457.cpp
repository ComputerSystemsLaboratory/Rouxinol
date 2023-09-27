#include <stdio.h>

int main()
{
  int a,b;
  char c;
  scanf("%d",&a);
  scanf(" %c",&c);
  scanf("%d",&b);
  while (!((c=='?'))){
    if (c=='+'){
      printf("%d\n",a+b);
    }else if(c=='-'){
      printf("%d\n",a-b);
    }else if(c=='*'){
      printf("%d\n",a*b);
    }else if(c=='/'){
      printf("%d\n",a/b);
    }
    scanf("%d",&a);
    scanf(" %c",&c);
    scanf("%d",&b);
  }
 
 
 
  return 0;
}