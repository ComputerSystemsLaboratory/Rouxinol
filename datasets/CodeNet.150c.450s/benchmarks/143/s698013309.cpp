#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N;
  int A[N];
  map<int, int> m;
  long long res = 0;
  for (int i = 0; i < N; i++){
    cin >> A[i];
    m[A[i]]++;
    res += A[i];
  }
  cin >> Q;
  while (Q > 0) {
    int B, C;
    cin >> B >> C;
    res += (C-B)*m[B];
    m[C] += m[B];
    m[B] = 0;
    Q--;
    cout << res << endl;
  }
  return 0;
}
