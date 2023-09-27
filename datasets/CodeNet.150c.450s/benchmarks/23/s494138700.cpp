#include <bits/stdc++.h>

using namespace std;

#define ll long long
typedef complex<double> P;

int main() {
  int n; cin >> n;
  int p=1, fib=1;
  if(n == 1 || n == 0) cout << 1 << endl;
  else {
    for (int i = 1; i < n; i++) {
      int t = p;
      p = fib;
      fib += t;
    }
    cout << fib << endl;
  }
}