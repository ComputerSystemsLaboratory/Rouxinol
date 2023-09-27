#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define rep(i, n) FOR(i, 0, n)
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define UNIQUE(v) v.erase(unique(all(v)), v.end());
#define fill(a, x) memset(a, x, sizeof(a))
#define zero(a) fill(a, 0)
#define minus(a) fill(a, -1)
#define dbg(x) cout << #x "=" << x << endl

// naming rules
// array starts with "ar". for example ar_a
// stack starts with "st". for example st_a
// queue starts with "qu". for example qu_a
// vector starts with "vc". for example vc_a

int main() {
  stack<int> st1;
  stack<pair<int, int> > st2;
  char ch;
  int sum = 0;
  int i = 0;
  while (cin >> ch) {
    // escapeしている?
    // escapeとは?
    if (ch == '\\') st1.push(i);
    else if (ch == '/' && st1.size() > 0) {
      int j = st1.top(); st1.pop();
      int a = i - j;
      sum += a;
      // firstとは?
      while (st2.size() > 0 && st2.top().first > j) {
        // secondとは?
        a += st2.top().second; st2.pop();
      }
      st2.push(make_pair(j, a));
    }
    i++;
  }

  // 以下は結果の出力用
  vi ans;
  while (st2.size() > 0) {
    ans.pb(st2.top().second);
    st2.pop();
  }
  reverse(ans.begin(), ans.end());
  cout << sum << endl;
  cout << ans.size();
  rep(k, ans.size()) {
    cout << " ";
    cout << ans[k];
  }
  cout << endl;
  return 0;
}

