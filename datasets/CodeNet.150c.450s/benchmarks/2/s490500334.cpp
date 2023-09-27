#include <cstdio>
#include <iostream>
#include <algorithm>
#define rep(i,n) for(int i=0; i<(n); ++i)
#define reps(i, s, n) for(int i=(s); i<=(n); ++i)
#define outl(x) cout<< (x) << '\n'
using std::swap;

int a[100005];

int partition(int a[], int head, int r)
{
   const int x = a[--r];
   int i = head - 1;
   rep(j, r){
      if(a[j] <= x){
         ++i;
         swap( a[i], a[j] );
      }
   }
   ++i;
   swap( a[i], a[r] );
   return (i);
}

signed main()
{
   int N;
   scanf("%d", &N);
   rep(i, N)scanf("%d", a+i);

   int pibot = partition(a, 0, N);

   rep(i, N){
      printf( (i == pibot)? "[%d]" : "%d" , a[i]);
      putchar_unlocked( i + 1 < N ? ' ' : '\n' );
   }
}


