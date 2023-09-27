#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> v(N + 1, 0);
  for (int x = 1; x <= 101; x++) {
    for (int y = 1; y <= 101; y++) {
      for (int z = 1; z <= 101; z++) {
        int num = x * x + y * y + z * z + x * y + y * z + z * x;
        if (num <= N) {
          v.at(num)++;
        }
      }
    }
  }

  for (int i = 1; i <= N; i++) {
    cout << v.at(i) << endl;
  }

  return 0;
}