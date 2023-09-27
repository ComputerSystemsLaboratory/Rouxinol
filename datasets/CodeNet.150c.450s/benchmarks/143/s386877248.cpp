#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  int Q;
  cin >> Q;

  map<int,int> count;
  ll S = 0;
  for (int a: A) {
    count[a]++;
    S += a;
  }
  rep(i,Q) {
    int B, C;
    cin >> B >> C;
    S = S + (-B + C) * count[B];
    cout << S << endl;
    count[C] += count[B];
    count[B] = 0;
  }

  return 0;
}