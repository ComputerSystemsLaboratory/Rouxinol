#include <bits/stdc++.h>

#define REP(i, x) REPI(i, 0, x)
#define REPI(i, a, b) for (int i = int(a); i < int(b); ++i)
#define ALL(x) (x).begin(), (x).end()

typedef long long ll;
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int D;
  cin >> D;
  vector<int> c(26);
  REP(i, 26) { cin >> c.at(i); }
  vector<vector<int>> s(D);
  int d;
  REP(i, D) {
    REP(j, 26) {
      cin >> d;
      s.at(i).push_back(d);
    }
  }

  vector<int> t(D);
  REP(i, D) { cin >> t.at(i); --t.at(i); }

  vector<vector<int>> last(D, vector<int>(26, 0));
  ll S = 0ll;

  REP(i, D) {
    last.at(i).at(t.at(i)) = i + 1;

    REPI(j, i+1, D) { last.at(j).at(t.at(i)) = i + 1; }
  }

  REP(i, D) {
    S += s.at(i).at(t.at(i));

    ll minus = 0;
    REP(j, 26) {
      minus += c.at(j) * (i+1 - last.at(i).at(j));
    }
    S -= minus;
    cout << S << endl;
  }

  return 0;
}
