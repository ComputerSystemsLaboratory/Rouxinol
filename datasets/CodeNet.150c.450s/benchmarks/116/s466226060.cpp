#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  while (cin >> n >> k, n) {

    int a[101010] = {0};

    cin >> a[1];
    for (int i = 2; i < n + 1; i++){
      cin >> a[i];
      a[i] += a[i - 1];
    }

    int max_n = -1e9;
    for (int i = 0; i < n - k; i++){
      max_n = max(max_n, a[k + i] - a[i]);
    }

    cout << max_n << endl;
  }
}