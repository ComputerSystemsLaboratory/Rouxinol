#include <cstdio>
#include <iostream>
#include <algorithm>
#define rep(i,n) for(int i=0; i<(n); ++i)
#define outl(x) cout<< (x) << '\n'
using namespace std;

int fib[45] = {1, 1};

signed main()
{
   cin.tie(0), ios::sync_with_stdio(false);
   int n;
   cin >> n;
   for(int i=2; i<=n; ++i){
      fib[i] = fib[i-1] + fib[i-2];
   }
   outl( fib[n] );
}


