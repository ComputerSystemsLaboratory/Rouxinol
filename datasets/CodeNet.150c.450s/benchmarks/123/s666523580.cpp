#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<int> prime;
int n;
int z[10000];

bool is_prime(int x) {
  if(x < 2) return false;
  int y = sqrt(x);
  for (int i = 0; i < prime.size(); i++) {
    if(y < prime[i] || x == prime[i]) return true;
    if(x % prime[i] == 0) return false;
  }
  return true;
}

void solve() {
  prime.push_back(2);
  for (int i = 3; i < 10000; i += 2) {
    if(is_prime(i)) prime.push_back(i);
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if(is_prime(z[i])) ans++;
  }
  printf("%d\n", ans);
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> z[i];
  }

  solve();
}