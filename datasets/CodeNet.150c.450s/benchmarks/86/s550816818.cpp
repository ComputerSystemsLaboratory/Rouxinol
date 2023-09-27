#include <bits/stdc++.h>
using namespace std;

int main() {
  for(int N, M, P; cin >> N >> M >> P && (N|M|P); ) {
    --M;
    vector<int> X(N);
    for(int i = 0; i < N; ++i) cin >> X[i];
    int pool = accumulate(X.begin(), X.end(), 0);
    if(X[M] == 0) cout << 0 << endl;
    else cout << pool * (100 - P) / X[M] << endl;
  }
  return 0;
}