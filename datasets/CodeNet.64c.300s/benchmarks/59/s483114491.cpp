#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int cnt = 0;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;

    int t = sqrt(a);
    for (int j=2; j<=t; j++) {
      if (a % j == 0) {
        cnt++;
        break;
      }
    }
  }

  cout << n - cnt << endl;

  return 0;
}

