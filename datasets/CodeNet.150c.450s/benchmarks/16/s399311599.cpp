#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s; { cin >> s; }

  ll m1{}, m2{}, c{};
  deque<ll> L1, L2; {
    for (ll i{}, now{}, sum{}; i < s.length(); ++i) {
      if (s[i] == '\\') {
        ++now;
      } else if (s[i] == '/') {
        --now;
        if (now == m1) {
          L1.push_back(sum);
          sum = 0;
          c = i;
        }
        m1 = min(m1, now);
      }
      sum += now - m1;
    }
    for (ll i{ static_cast<ll>(s.length() - 1) }, now{}, sum{}; i >= c; --i) {
      if (s[i] == '/') {
        ++now;
      } else if (s[i] == '\\') {
        --now;
        if (now == m2) {
          L2.push_front(sum);
          sum = 0;
        }
        m2 = min(m2, now);
      }
      sum += now - m2;
    }
  }
  vector<int> L; {
    for (auto&& x : L1) L.push_back(x);
    for (auto&& x : L2) L.push_back(x);
    ll A; {
      for (auto&& x : L) A += x;
      cout << A << endl;
    }
    int k = L.size(); {
      cout << k;
      for (int i = 0; i < k; ++i) cout << ' ' << L[i];
    }
  }
  cout << endl;
  return 0;
}

