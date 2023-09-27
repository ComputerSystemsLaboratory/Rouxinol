#if 0

#endif

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int F[100];

int main() {
  F[0] = 1; F[1] = 1;
  for (int i = 2; i < 45; i++) {
    F[i] = F[i-1] + F[i-2];
  }
  int n; cin >> n;
  cout << F[n] << endl;
}

