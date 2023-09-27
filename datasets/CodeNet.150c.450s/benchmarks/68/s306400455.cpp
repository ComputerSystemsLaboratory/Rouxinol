#include <bits/stdc++.h>
using namespace std;

using VI = vector<long>;

int main() {
  while (1) {
    long n;
    cin >> n;
    if (!n) {
      return 0;
    }
    VI v;
    for (int i = 0; i < n; i++) {
      long a;
      cin >> a;
      v.push_back(a);
    }
    sort(v.begin(), v.end());
    long diff = 1e9;
    for (int i = 1; i < n; i++) {
      diff = min(diff, v[i] - v[i - 1]);
    }
    cout << diff << endl;
  }
}

