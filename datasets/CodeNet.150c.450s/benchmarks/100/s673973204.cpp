#include <stdio.h>
int main()
{
    int n, count;
   unsigned long long int factorial=1;
   while(scanf("%d",&n)==1)
{
     if ( n== 0)
     printf("1\n");
     else
     {
         factorial=1;

         for(count=1;count<=n;++count)
     { factorial*=count;}
      printf("%llu\n",factorial);
      }

      }
      return 0;
       }