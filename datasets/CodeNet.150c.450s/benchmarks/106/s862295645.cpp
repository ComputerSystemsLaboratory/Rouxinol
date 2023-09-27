#include<stdio.h>
 
int main(){
  int a,b,c,i,z=0;
  scanf("%d %d %d",&a,&b,&c);
  for(i=a;i<=b;i++)
    if(c%i==0)
      z+=1;
  printf("%d\n",z);
    return 0;
}