#include<stdio.h>

int main(){
 int a1,b1,c1,d1,a2,b2,c2,d2,sum1,sum2;

 scanf("%d %d %d %d",&a1,&b1,&c1,&d1);
 scanf("%d %d %d %d",&a2,&b2,&c2,&d2);
 sum1=a1+b1+c1+d1;
 sum2=a2+b2+c2+d2;
 printf("%d\n",sum1<sum2?sum2:sum1);
 return 0;
}