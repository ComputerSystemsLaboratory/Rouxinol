#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  while(cin >> n, n) {
    int x[n];
    for (int i=0; i<n; i++)
      cin >> x[i];

    int ans = -(1<<30);
    for (int i=0; i<n; i++) {
      int sum = 0;
      for (int j=i; j<n; j++) {
        sum += x[j];
        ans = max(ans, sum);
      }
    }
    cout << ans << endl;
  }
}