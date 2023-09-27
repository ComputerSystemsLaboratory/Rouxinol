#include <bits/stdc++.h>
using namespace std;

long long d;
const long long t = 26;
vector<long long> c, res;
vector<vector<long long>> s;

void solve();
long long calc();

int main() {
  cin >> d;
  c.resize(t);
  res.resize(d);
  for (auto &p : c) cin >> p;
  s.resize(d, vector<long long>(t, 0));
  for (auto &v : s)
    for (auto &p : v) cin >> p;
  for (auto &p : res) {
    cin >> p;
    --p;
  }
  solve();
  calc();
  return 0;
}

void solve() {}

long long calc() {
  long long sum = 0;
  vector<long long> memo(t, 0);
  for (int i = 0; i < d; ++i) {
    int num = res[i];
    sum += s[i][num];
    for (int j = 0; j < t; ++j)
      if (j != num)
        sum -= (memo[j] += c[j]);
      else
        memo[j] = 0;
    cout << sum << endl;
  }
  return sum;
}