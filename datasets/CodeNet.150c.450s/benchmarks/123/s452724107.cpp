#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int C = 1000000;
bool isprime[C];
vector<int> V;

bool prime(int x) {
  if (x < C) return isprime[x];
  for (auto y : V) {
    if (x % y == 0) return false;
  }
  return true;
}

int main() {
  fill(isprime, isprime+C, true);
  isprime[0] = isprime[1] = false;
  for (auto i = 2; i < C; i++) {
    if (isprime[i]) {
      V.push_back(i);
      int j = 2;
      while (i*j < C) {
        isprime[i*j] = false;
        j++;
      }
    }
  }
  int n;
  cin >> n;
  int A[10010];
  for (auto i = 0; i < n; i++) {
    cin >> A[i];
  }
  int ans = 0;
  for (auto i = 0; i < n; i++) {
    if (prime(A[i])) ans++;
  }
  cout << ans << endl;
}