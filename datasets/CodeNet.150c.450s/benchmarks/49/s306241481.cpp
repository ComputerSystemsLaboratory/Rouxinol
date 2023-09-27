#include <iostream>

using namespace std;

int main() {
  int n, s;
  while (true) {
    cin >> n;
    if (n == 0) break;
    int m = 1001, M = -1, sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> s;
      if (s < m) m = s;
      if (s > M) M = s;
      sum += s;
    }
    sum = sum - m - M;
    cout << sum / (n - 2) << endl;
  }
  
  return 0;
}