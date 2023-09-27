#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;

constexpr int INF = 1 << 30;
constexpr int MOD = 1000000007;

int main() {
  stack<int> sta;
  string s;
  while (cin >> s) {
    int a, b;
    if (s == "+" || s == "-" || s == "*") {
      b = sta.top();
      sta.pop();
      a = sta.top();
      sta.pop();
      if (s == "+") {
        sta.push(a + b);
      } else if (s == "-") {
        sta.push(a - b);
      } else {
        sta.push(a * b);
      }
    } else {
      sta.push(stoi(s));
    }
  }
  cout << sta.top() << endl;
}

