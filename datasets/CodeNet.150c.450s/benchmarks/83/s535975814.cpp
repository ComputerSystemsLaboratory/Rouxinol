#include <iostream>
using namespace std;

int N, W;
int v[100], w[100];
int DP[10001];

int main(void) {
  cin >> N >> W;
  for (int i=0; i<N; i++) {
    cin >> v[i] >> w[i];
  }

  for (int i=0; i<N; i++) {
    for (int j=W; j>=w[i]; j--) {
      DP[j] = max(DP[j], DP[j-w[i]]+v[i]);
    }
  }

  cout << DP[W] << endl;

  return 0;
}