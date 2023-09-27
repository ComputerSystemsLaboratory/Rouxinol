#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a = 0;
  cin >> n;

  for (int i = 1; i < n + 1; i++) {
    a = i;
    if (a % 3 == 0) {
      printf(" %d", i);
    } else if (a % 10 == 3) {
      printf(" %d", i);
    } else {
      while (a /= 10) {
        if (a % 10 == 3) {
          printf(" %d", i);
          break;
        }
      }
    }
  }
  cout << endl;
  return 0;
}
