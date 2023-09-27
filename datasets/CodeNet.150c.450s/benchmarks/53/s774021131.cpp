#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
using llong = long long;
using P = pair<int, int>;
const int inf = 1 << 20;
const int mod = 1e9 + 7;

int main() {
   int n;
   cin >> n;
   printf("%d:", n);
   for (int i = 2; i * i <= n; i++) {
      while (n % i == 0) {
         n /= i;
         printf(" %d", i);
      }
   }
   if (n != 1)
      printf(" %d\n", n);
   else
      printf("\n");
   return 0;
}
