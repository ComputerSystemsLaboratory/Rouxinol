#include <bits/stdc++.h>
using namespace std;

int main() {
  for(int N; cin >> N && N; ) {
    int res = 0;
    for(int i = 1; i <= N; ++i) {
      int sum = i + i + 1;
      for(int j = i + 1; sum < N; sum += ++j);
      res += sum == N;
    }
    cout << res << endl;
  }
  return 0;
}