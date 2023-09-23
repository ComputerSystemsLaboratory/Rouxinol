#include<stdio.h>
int main(){
  int a,a2,b,b2,c,c2,d,d2;
  int s,t;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  scanf("%d %d %d %d",&a2,&b2,&c2,&d2);
  s=a+b+c+d;
  t=a2+b2+c2+d2;
  if(t>=s)
    printf("%d\n",t);
  else
    printf("%d\n",s);
  return 0;
}