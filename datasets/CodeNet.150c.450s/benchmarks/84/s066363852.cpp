#include <cstdio>
#include <cstring>
#include <iostream>
#define rep(i,n) for(int i=0; i<(n); ++i)
#define reps(i, s, n) for(int i=(s); i<=(n); ++i)
#define outl(x) cout<< (x) << '\n'
const int INF = 0x7f7f7f7f;
using namespace std;

typedef long long ll;
int L[100005], R[100005];

ll merge(int* left, int* mid, int* right)
{
   const int hl = mid - left;
   const int hr = right - mid;
   L[hl] = R[hr] = INF;

   memcpy( L, left, sizeof(int) * hl );
   memcpy( R, mid,  sizeof(int) * hr );

   int i = 0, j = 0;
   ll cnt = 0;
   for(int* k = left; k != right; ++k)
      *k = (L[i] <= R[j])? (L[i++]) : (cnt += hl-i, R[j++] );
   return (cnt);
}

ll inversion(int* a, int* end)
{
   ll ret = 0;
   if ( a + 1 < end ) {
      int* mid = a + (end - a) / 2;
      ret += inversion(a, mid);
      ret += inversion(mid, end);
      ret += merge(a, mid, end);
   }
   return (ret);
}

signed main()
{
   ios::sync_with_stdio(false), cin.tie(0);
   int N;
   static int a[200005];

   cin >> N;
   rep(i, N)cin >> a[i];

   outl( inversion(a, a+N) );
}

