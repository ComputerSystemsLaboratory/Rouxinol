#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;

  while (cin >> n >> k, n || k){
    int a[100010], num;

    for (int i = 0; i < n; i++){
      cin >> num;
      if (i == 0) a[i] = num;
      else a[i] = a[i - 1] + num;
    }

    int res = 0;
    for (int i = k; i < n; i++){
      res = max(res, a[i] - a[i - k]);
    }
    cout << res << '\n';
  }
}