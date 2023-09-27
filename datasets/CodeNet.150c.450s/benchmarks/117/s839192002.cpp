#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#define rep(i,n) for(int i=0; i<(n); ++i)
#define outl(x) cout<< (x) << '\n'
#define FAST() cin.tie(0), ios::sync_with_stdio(false)

#define LEN 500010
#define INF 0x3f3f3f3f
using namespace std;

void merge(int*, int, int, int);
void merge_sort(int*, int, int);

int cnt = 0;

signed main()
{
   int N;
   int a[LEN];
   cin.tie(0), ios::sync_with_stdio(false);

   cin >> N;
   rep(i, N)cin >> a[i];

   merge_sort(a, 0, N);
   rep(i, N){
      cout << a[i] << (i+1 < N ? ' ' : '\n') ;
   }
   outl( cnt );
}

void merge(int* a, int left, int mid, int right)
{
   const int hl = mid - left;
   const int hr = right - mid;
   int L[hl+1], R[hr+1];

   rep(i, hl) L[i] = a[left+i];
   rep(i, hr) R[i] = a[mid +i];
   L[hl] = R[hr] = INF;

   int i=0, j = 0;
   for(int k = left; k < right; ++k){
      if(L[i] <= R[j])
         a[k] = L[i++];
      else
         a[k] = R[j++];
      ++cnt;
   }
   return;
}

void merge_sort(int *a, int left, int right)
{
   if( left + 1 < right ){
      const int mid = (left + right) / 2;
      merge_sort(a, left, mid);
      merge_sort(a, mid, right);
      merge(a, left, mid, right);
   }
}


