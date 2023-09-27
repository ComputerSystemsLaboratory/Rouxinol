#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define outl(x) cout<< (x) << '\n'
#define fi first
#define se second
using pii = pair<int,int>;
using ll = long long;

int main()
{
   cin.tie(0), ios::sync_with_stdio(false);
   ll fib[45] = {1, 1};

   int n;
   cin >> n;
   for (int i=2; i <= n; ++i) {
       fib[i] = fib[i-1] + fib[i-2];
   }

   outl(fib[n]);
}


