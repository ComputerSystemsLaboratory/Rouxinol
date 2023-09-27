#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  int N; cin >> N;
  vector<int> R(N);
  for(int i = 0; i < N; ++i) cin >> R[i];
  vector<int> minVal(N);
  int ans = numeric_limits<int>::min();
  minVal[0] = R[0];
  for(int i = 1; i < N; ++i) {
    ans = max(ans, R[i] - minVal[i - 1]);
    minVal[i] = min(minVal[i - 1], R[i]);
  }
  cout << ans << endl;
}