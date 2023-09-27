#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double Double;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// chmax, chmin
template <class T> inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long K, std::vector<long long> A) {
    for(int i = K ; i < N ; i++){
        cout << (A[i-K]<A[i]?YES:NO) << endl;
    }
}

int main() {
  long long N;
  scanf("%lld", &N);
  long long K;
  scanf("%lld", &K);
  std::vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &A[i]);
  }
  solve(N, K, std::move(A));
  return 0;
}
