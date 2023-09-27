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
  for (int i=0; i<N; i++) cin >> S[i];

  int pre = 0;
  for (int i=0; i<K; i++) pre += S[i];
  int ans = pre;

  for (int i=1; i<=N-K; i++) {
    pre = pre - S[i-1] + S[i+K-1];
    ans = max(ans, pre);
  }
  cout << ans << "\n";
  }
  return 0;
}