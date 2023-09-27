#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define fi first
#define se second
#define FOR(i, a, b) for(int i=(a);i<(b);i++)
#define REP(i, n) FOR(i, 0, n)
#define RFOR(i, a, b) for(int i=(a);i>=(b);i--)
#define RREP(i, n) RFOR(i, n, 0)
#define MFOR(i, m) for(auto i=(m).begin();i!=(m).end();i++)
#define ALL(a) (a).begin(), (a).end()
#define SZ(x) ((int)(x).size())

typedef long long int ll;
typedef pair<int, int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;

const double eps = 1e-10;
const int MOD = 1000000007;

template<typename T>
void printv(vector<T> const& s) {
  REP(i, s.size()) {
    cout << s[i] << " ";
  }
  cout << endl;
}

int main () {
  cin.tie(0);
  cout << setprecision(10);

  int n; cin >> n;
  REP(i, n) {
    string s1, s2; cin >> s1 >> s2;
    int i1 = 0, i2 = 0;
    REP(i, SZ(s1)) {
      if(s1[i] == 'm') {
        if(i > 0 && '0' <= s1[i-1] && s1[i-1] <= '9') {
          i1 += 1000 * (s1[i-1] - '0');
        } else {
          i1 += 1000;
        }
      } else if(s1[i] == 'c') {
        if(i > 0 && '0' <= s1[i-1] && s1[i-1] <= '9') {
          i1 += 100 * (s1[i-1] - '0');
        } else {
          i1 += 100;
        }
      } else if(s1[i] == 'x') {
        if(i > 0 && '0' <= s1[i-1] && s1[i-1] <= '9') {
          i1 += 10 * (s1[i-1] - '0');
        } else {
          i1 += 10;
        }
      } else if(s1[i] == 'i') {
        if(i > 0 && '0' <= s1[i-1] && s1[i-1] <= '9') {
          i1 += 1 * (s1[i-1] - '0');
        } else {
          i1 += 1;
        }
      }
    }

    REP(i, SZ(s2)) {
      if(s2[i] == 'm') {
        if(i > 0 && '0' <= s2[i-1] && s2[i-1] <= '9') {
          i2 += 1000 * (s2[i-1] - '0');
        } else {
          i2 += 1000;
        }
      } else if(s2[i] == 'c') {
        if(i > 0 && '0' <= s2[i-1] && s2[i-1] <= '9') {
          i2 += 100 * (s2[i-1] - '0');
        } else {
          i2 += 100;
        }
      } else if(s2[i] == 'x') {
        if(i > 0 && '0' <= s2[i-1] && s2[i-1] <= '9') {
          i2 += 10 * (s2[i-1] - '0');
        } else {
          i2 += 10;
        }
      } else if(s2[i] == 'i') {
        if(i > 0 && '0' <= s2[i-1] && s2[i-1] <= '9') {
          i2 += 1 * (s2[i-1] - '0');
        } else {
          i2 += 1;
        }
      }
    }

    int ans = i1 + i2;
    vi res(4);
    RREP(i, 3) {
      res[i] = ans % 10;
      ans /= 10;
    }

    REP(i, 4) {
      if(res[i] == 0) continue;
      if(res[i] != 1) cout << res[i];
      switch(i) {
      case 0:
        cout << "m";
        break;
      case 1:
        cout << "c";
        break;
      case 2:
        cout << "x";
        break;
      default:
        cout << "i";
        break;
      }
    }
    cout << endl;

  }
}

