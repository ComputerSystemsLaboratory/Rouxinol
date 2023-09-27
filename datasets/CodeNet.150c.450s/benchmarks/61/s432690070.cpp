#include <bits/stdc++.h>
using namespace std;

int N, A, B, C, X;
vector<int> Y;

int solve() {
  int cnt = 0;
  for (int i = 0; i <= 10000; ++i) {
    if (Y[cnt] == X) ++cnt;
    if (cnt == N) return i;
    X = (A * X + B) % C;
  }
  return -1;
}

int main() {
  while (cin >> N >> A >> B >> C >> X, N) {
    Y = vector<int>(N);
    for (int i = 0; i < N; ++i) cin >> Y[i];
    cout << solve() << endl;

  }
  return 0;
}

