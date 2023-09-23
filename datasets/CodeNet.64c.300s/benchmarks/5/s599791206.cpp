#include<iostream>
#include<cmath>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main ()
{
   /*int a,b,c,d;
   while(scanf("%d%d",&a,&b)==2)
   {
       c=10-a;
       d=abs(b-10);
        printf("%d %d\n",c,d);
   }*/
   int a[10];
   for(int i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
   }
   sort(a,a+10);
   for(int i=9;i>=7;i--)
   {
       printf("%d\n",a[i]);
   }
   return 0;

}