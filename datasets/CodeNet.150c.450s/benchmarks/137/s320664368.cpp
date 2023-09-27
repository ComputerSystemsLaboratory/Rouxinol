#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;

constexpr int INF = 1 << 25;
constexpr int MOD = 1000000007;

int main() {
  int n;
  cin >> n;
  unordered_set<string> dict;
  string cmd, str;
  REP(i, n) {
    cin >> cmd >> str;
    if (cmd == "insert") {
      dict.insert(str);
    } else {
      cout << (dict.find(str) != dict.end() ? "yes" : "no") << endl;
    }
  }
}

