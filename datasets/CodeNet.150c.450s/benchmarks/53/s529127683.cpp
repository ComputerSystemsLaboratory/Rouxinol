#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

priority_queue<ll, vector<ll>, greater<ll>> ans;

void solve(ll n) {
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      ans.push(i);
      solve(n / i);
      return;
    }
  }
  ans.push(n);
}

int main() {
  ll n;
  cin >> n;

  solve(n);

  cout << n << ":";

  while (!ans.empty()) {
    cout << " " << ans.top();
    ans.pop();
  }

  cout << endl;
}
