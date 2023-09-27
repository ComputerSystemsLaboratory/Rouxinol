#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 205;

ll a[sz], b[69];
char s[sz];

bool gauss(ll x)
{
   for(int i=0; i<61; i++) {
      if(x & 1LL << i) {
         if(b[i]) x ^= b[i];
         else {
            b[i] = x;
            return 0;
         }
      }
   }
   return 1;
}

void solve()
{
   int n;
   scanf("%d", &n);
   for(int i=0; i<n; i++) scanf("%lld", &a[i]);
   scanf("%s", s);

   int ans = 0;
   memset(b, 0, sizeof b);
   for(int i=n-1; i>=0 && !ans; i--) {
      if(!gauss(a[i]) && s[i] == '1') ans = 1;
   }
   printf("%d\n", ans);
}

int main()
{
   int t;
   cin >> t;
   while(t--) solve();
}
