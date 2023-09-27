#include<iostream>
#include<algorithm>

using namespace std;
int N, S;
int main() {
  while (cin >> N && N > 0) {
    int sum = 0;
    int m = 1001;
    int M = -1;
    for (int i = 0; i < N; ++i) {
      cin >> S;
      sum += S;
      m = min(m, S);
      M = max(M, S);
    }
    sum = sum - m - M;
    int ans = sum / (N-2);
     cout << ans << endl;
  }
  return 0;
}