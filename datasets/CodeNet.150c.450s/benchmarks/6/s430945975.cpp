#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
typedef long long llong;
const int inf = 1 << 20;
const int mod = 1e9 + 7;
int main() {
   int a, b, c;
   cin >> a >> b >> c;
   if (a < b && b < c)
      printf("Yes\n");
   else
      printf("No\n");
   return 0;
}
