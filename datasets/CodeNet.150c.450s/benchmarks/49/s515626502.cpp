#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  int n;
  while(cin >> n, n) {
    int max_score = 0;
    int min_score = 1000;
    int s;
    int m = 0;
    for (int i = 0; i < n; i++) {
      cin >> s;
      m += s;
      max_score = max(max_score, s);
      min_score = min(min_score, s);
    }
    cout << (m - max_score - min_score) / (n - 2) << endl;
  }
}