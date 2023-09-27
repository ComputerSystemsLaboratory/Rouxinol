#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n;

  while (cin >> n, n) {
    int m = 1001;  
    int M = -1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      int score;
      cin >> score;
      m = min(m, score);
      M = max(M, score);
      sum += score;
    }
    cout << (sum - m - M) / (n - 2) << endl;
  }
  return 0;
}