#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



int main()
{
   long a[3];
   long i,j,k;
   long f;
   long n;
   long q;
   long cnt = 0;
   long h;
   long left,right,mid;
   long ans = 0;
   char c;
   scanf("%ld %ld %ld",&a[0],&a[1],&a[2]);
   
    for (i = 0; i < 2; i++) {
        for (j = 2; j > i; j--) {
           if(a[j-1] > a[j]) {
              long tmp = a[j];
              a[j] = a[j-1];
              a[j-1] = tmp;
           }
        }
    }
    printf("%ld %ld %ld\n",a[0],a[1],a[2]);


   return 0;
}