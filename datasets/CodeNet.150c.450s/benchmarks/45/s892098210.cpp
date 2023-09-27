#include <cstdio>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)

int main() {
  long m, n;
  cin >> m >> n;
  long mod = 1000000007;

  long pows[50];

  pows[0]=1;
  pows[1]=m;
  for (long i=2, p=2; p<=n; p*=2, ++i) {
    pows[i] = pows[i-1] * pows[i-1] % mod;
  }

  long ans=1;
  for (long nn=n; nn>0; ) {
    long i, p;
    for (i=1, p=1; p*2<=nn; ++i, p*=2);
    ans *= pows[i];
    ans %= mod;
    nn -= p;
  }

  cout << ans << endl;
}

