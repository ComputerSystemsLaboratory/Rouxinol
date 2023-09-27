#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  while (cin >> n, n){
    int ma=0, mi=INT_MAX;
    int sum = 0;
    for (int i = 0; i < n; i++){
      int x; cin >> x;
      sum += x;
      ma = max(ma, x); mi = min(mi, x);
    }
    cout << (sum - mi - ma) / (n - 2) << endl;
  }
}