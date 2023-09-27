#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, j, k;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  // calc
  for (int i = 0; i < n - 1; i++) {
    cout << a[i] << " ";
  }
  cout << a[n - 1] << endl;
  
  for (int i = 1; i < n; i++) {
    j = i - 1;
    k = a[i];
    while (j >= 0 && a[j] > k) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = k;
    for (int l = 0; l < n - 1; l++) {
      cout << a[l] << " ";
    }
    cout << a[n - 1] << endl;
  }
  return 0;
}
