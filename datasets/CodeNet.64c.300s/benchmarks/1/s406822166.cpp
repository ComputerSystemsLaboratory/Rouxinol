#include <cstdio>
#include <iostream>
#include <algorithm>
#define rep(i,n) for(int i=0; i<(n); ++i)
#define reps(i, s, n) for(int i=(s); i<=(n); ++i)
#define outl(x) cout<< (x) << '\n'
using namespace std;

int* const partition(int *a, int *r)
{
   const int x = *(--r);
   int* lt = a - 1;

   for(int *i = a; i != r; ++i)
      if( *i <= x ){
         ++lt;
         swap( *lt, *i );
      }

   ++lt;
   swap( *lt, *r );
   return (lt);
}

int N;
int a[100002];

signed main()
{
   scanf("%d", &N);
   rep(i, N)scanf("%d", a+i);

   int* q = partition(a, a+N);

   rep(i, N){
      printf( a+i == q ? "[%d]" : "%d", a[i] );
      putchar_unlocked( i+1 < N ? ' ' : '\n' );
   }
}


