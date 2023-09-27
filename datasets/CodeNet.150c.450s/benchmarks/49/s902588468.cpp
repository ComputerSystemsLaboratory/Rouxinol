#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, a[101];
  while (cin >> n, n){
    int res = 0;
    for (int i = 0; i < n; i++){
      cin >> a[i];
      res += a[i];
    }
    sort(a, a + n);
    res -= (a[0] + a[n - 1]);
    cout << (int)floor(res / (n - 2)) << endl;
  }
}