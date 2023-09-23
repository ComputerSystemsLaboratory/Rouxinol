#include<stdio.h>
int main(){
 int a,b,c;
 int j = 0;
 scanf("%d%d%d",&a,&b,&c);
 for (int i=a;i<=b;i++){
   int d = c/i;
   if (c-d*i){}
   else{
     j++;
   }
 }
 printf("%d\n",j);
 return 0;
}

