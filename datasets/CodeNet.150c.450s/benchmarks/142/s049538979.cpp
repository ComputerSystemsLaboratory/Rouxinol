#include <bits/stdc++.h>
#define F first
#define S second
using namespace std;
using ll = long long;
typedef pair<int, int> P;
ll Mod = 1000000007;
int main() {
  int N,K;
  cin >> N >> K;
  ll A[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < N-K; i++) {
    if (A[i] < A[i+K]) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}