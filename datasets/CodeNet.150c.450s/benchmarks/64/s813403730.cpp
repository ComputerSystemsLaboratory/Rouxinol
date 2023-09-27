#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


typedef int value_type; /* ソートするキーの型 */

value_type med3(value_type x, value_type y, value_type z)
   /* x, y, z の中間値を返す */
{
   if (x < y)
      if (y < z) return y; else if (z < x) return x; else return z; else
         if (z < y) return y; else if (x < z) return x; else return z;
}


void quicksort(int a[], int left, int right)
{
   if (left < right) {
      int i = left, j = right;
      int tmp, pivot = med3(a[i], a[i + (j - i) / 2], a[j]); /* (i+j)/2ではオーバーフローしてしまう */
      while (1) { /* a[] を pivot 以上と以下の集まりに分割する */
         while (a[i] < pivot) i++; /* a[i] >= pivot となる位置を検索 */
         while (pivot < a[j]) j--; /* a[j] <= pivot となる位置を検索 */
         if (i >= j) break;
         tmp = a[i]; a[i] = a[j]; a[j] = tmp; /* a[i],a[j] を交換 */
         i++; j--;
      }
      quicksort(a, left, i - 1);  /* 分割した左を再帰的にソート */
      quicksort(a, j + 1, right); /* 分割した右を再帰的にソート */
   }
}
long powint(int a,int n)
{
   int i;
   long tmp=1;
   for(i=0;i<n;i++)
      tmp *= a;
   return tmp;
}


int main()
{
   static int i,j,k,l;
   int n;
   int f,g;
   static int a[20];
   int q;
   int m[200];
   int sum=0;

   scanf("%d",&n);
   for (i = 0; i < n; i++) {
      scanf("%d",&a[i]);
      sum += a[i];
   }

   scanf("%d",&q);
   for (i = 0; i < q; i++)
      scanf("%d",&m[i]);

   for (i = 0; i < q; i++) {
      if(sum > m[i]) {
         for (j = 1; j < powint(2,n);j++) {
            g = 0;
            f = j;
            for (k = 0; k < n; k++) {
               if(f % 2) g += a[k];
               f /= 2;
            }
            if(g == m[i]) {
               m[i] = 3000;
               break;
            }
         }
      }
      else if(sum == m[i])
         m[i] == 3000;
   }
   for (i = 0; i < q; i++) {
      if (m[i] == 3000)
         printf("yes\n");
      else 
         printf("no\n");
   }





   return 0;
}