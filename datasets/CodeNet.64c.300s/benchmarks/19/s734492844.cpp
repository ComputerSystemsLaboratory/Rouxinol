#include <iostream>
#include <limits.h>
using namespace std;

int main() {
  int n;
  int a[5000];
  int sum[5001];
  int tmp;
  int max;
  while (cin >> n, n) {
    for (int i=0; i<n; i++) {
      cin >> a[i];
    }
    sum[0] = 0;
    for (int i=0; i<n; i++) {
      sum[i+1] = sum[i] + a[i];
    }

    max = -INT_MAX;
    for (int i=0; i<n; i++) {
      for (int j=i+1; j<=n; j++) {
        tmp = sum[j] - sum[i];
        if (tmp > max) max = tmp;
      }
    }
    cout << max << endl;
  }

  return 0;
}