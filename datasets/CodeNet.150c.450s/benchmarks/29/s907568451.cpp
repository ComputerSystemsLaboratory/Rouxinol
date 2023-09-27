#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;

constexpr int INF = 1 << 30;
constexpr int MOD = 1000000007;

int main() {
 // std::ios::sync_with_stdio(false);
 // std::cin.tie(0);
  
  int n, x;
  string cmd;
  cin >> n;
  list<int> lst;
  REP(i, n) {
    cin >> cmd;
    if (cmd == "insert") {
      cin >> x;
      lst.push_front(x);
    } else if (cmd == "delete") {
      cin >> x;
      auto it = find(ALL(lst), x);
      if (it != lst.end()) lst.erase(it);
    } else if (cmd == "deleteFirst") {
      lst.pop_front();
    } else if (cmd == "deleteLast") {
      lst.pop_back();
    }
  }
  for (auto it = lst.begin(); it != lst.end(); ++it) {
    if (it != lst.begin()) cout << " ";
    cout << *it;
  }
  cout << endl;
}

