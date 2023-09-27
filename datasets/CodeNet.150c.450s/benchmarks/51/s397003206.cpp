#include <bits/stdc++.h>
using namespace std;
int a[31];

int main() {
  int t;
  while (cin >> t) {
    a[t]++;
  }
  for (int i = 1; i < 31; i++) {
    if (a[i] == 0) {
      cout << i << '\n';
    }
  }
}
