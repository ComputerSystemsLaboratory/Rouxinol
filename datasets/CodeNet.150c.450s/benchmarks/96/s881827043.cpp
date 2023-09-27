#include <algorithm>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cassert>
#include <iostream>
#include <map>
#include <queue>
#include <sstream>
#include <string>
#include <stack>
#include <set>
#include <vector>

using namespace std;

#define all(c) ((c).begin()), ((c).end())
#define dump(c) cerr << "> " << #c << " = " << (c) << endl;
#define iter(c) __typeof((c).begin())
#define tr(i, c) for (iter(c) i = (c).begin(); i != (c).end(); i++)
#define REP(i, a, b) for (int i = a; i < (int)(b); i++)
#define rep(i, n) REP(i, 0, n)
#define mp make_pair
#define fst first
#define snd second
#define pb push_back

typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef pair<int,int> pii;

const int INF = 1 << 29;
const double EPS = 1e-10;


int main() {
  int n_cases; cin >> n_cases;
  while (n_cases--) {
    string s; cin >> s;
    vi ch, num;
    rep(i, s.size()) {
      int c = s[i] - '0';
      if (ch.size() != 0 && ch.back() == c) {
        num[num.size() - 1]++;
      }
      else {
        ch.pb(c);
        num.pb(0);
      }
    }

    string table[] = {".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    rep(i, ch.size()) {
      if (ch[i] == 0) continue;
      cout << table[ch[i] - 1][num[i] % table[ch[i] - 1].size()];
    }

    cout << endl;
  }
  
  return 0;
}