#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
using namespace std;
int a[50];
signed main() {
  int N, P;
  while (cin>>N>>P, N+P!=0) {
    for (int i = 0; i < N; i++) a[i] = 0;
    int q = P;
    int i = -1;
    while (a[i] != P) { 
      i++;
      if (i >= N) i=0;
      if (q == 0) {
        q += a[i];
        a[i] = 0;
      } else {
        q--;
        a[i]++;
      }
    }
    cout << i << endl;
  }
}

