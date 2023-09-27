#include <bits/stdc++.h>
using namespace std;

#define int long long
const int sqrtN = 512;
struct SqrtDecomposition {
  int N, K;
  vector<int> data;
  vector<int> bucketSum;
  SqrtDecomposition(int n) : N(n) {
    K = (N + sqrtN - 1) / sqrtN;
    data.assign(K * sqrtN, 0);
    bucketSum.assign(K, 0);
  }
  void add(int x, int y) {
    int k = x / sqrtN;
    data[x] += y;
    int sum = 0;
    for(int i = k * sqrtN; i < (k + 1) * sqrtN; ++i) {
      sum += data[i];
    }
    bucketSum[k] = sum;
  }
  // [x, y)
  int getSum(int x, int y) {
    int sum = 0;
    for (int k = 0; k < K; ++k) {
      int l = k * sqrtN, r = (k + 1) * sqrtN;
      if (r <= x || y <= l)
        continue;
      if (x <= l && r <= y) {
        sum += bucketSum[k];
      } else {
        for (int i = max(x, l); i < min(y, r); ++i) {
          sum += data[i];
        }
      }
    }
    return sum;
  }
};

signed main() {
  ios::sync_with_stdio(false);
  int N, Q; cin >> N >> Q;
  SqrtDecomposition decomp(N);
  while(Q--) {
    int c, x, y; cin >> c >> x >> y;
    if(c == 0) {
      decomp.add(x, y);
    }
    else {
      cout << decomp.getSum(x, y + 1) << endl;
    }
  }
}