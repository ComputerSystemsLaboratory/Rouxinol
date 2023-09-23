#include <bits/stdc++.h>
using namespace std;

typedef long long lli;

bool isPrime(lli x) {
  if(x <= 1) return false;
  for(lli i = 2; i*i <= x; ++i) {
    if(x % i == 0) return false; 
  }
  return true;
}

int main() {
  for(lli a, d, n; cin >> a >> d >> n && (a|d|n);) {
    for(int x = a, k = 0; ; x += d) {
      if(isPrime(x)) {
        if(++k == n) {
          cout << x << endl;
          break;
        }
      }
    }
  }
  return 0;
}