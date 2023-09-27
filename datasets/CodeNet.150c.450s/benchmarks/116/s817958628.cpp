#include <iostream>
using namespace std;

#define INT_MIN -2147483648
#define MAX_N 100010
int N, K;
int S[MAX_N];

int main() {
  while (true) {
  cin >> N >> K;
  if (N == 0 && K == 0) break;
  int ans = INT_MIN;
  for (int i=0; i<N; i++) cin >> S[i];

  for (int i=0; i<=N-K; i++) {
    int t = 0;
    for (int j=0; j<K; j++) t += S[i+j];
    ans = max(ans, t);
  }
  cout << ans << "\n";
  }
  return 0;
}