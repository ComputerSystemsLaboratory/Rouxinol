#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef pair<int, int> PII;

#define FOR(i, a, n) for (int i = (int)a; i < (int)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
#define MOD 1000000007
#define INF 1000000000
#define PI 3.14159265359
#define EPS 1e-12

int main(void) {
  int n;
  cin >> n;
  REP(i, n) {
    string s, t;
    cin >> s >> t;

    int ss = 0, tt = 0, num = 1;
    REP(j, s.size()) {
      if(s[j] - '0' >= 2 && s[j] - '0' <= 9) {
        num = s[j] - '0';
      } else {
        if(s[j] == 'm') ss += num*1000;
        else if(s[j] == 'c') ss += num*100;
        else if(s[j] == 'x') ss += num*10;
        else if(s[j] == 'i') ss += num*1;
        num = 1;
      }
    }
    REP(j, t.size()) {
      if(t[j] - '0' >= 2 && t[j] - '0' <= 9) {
        num = t[j] - '0';
      } else {
        if(t[j] == 'm') tt += num*1000;
        else if(t[j] == 'c') tt += num*100;
        else if(t[j] == 'x') tt += num*10;
        else if(t[j] == 'i') tt += num*1;
        num = 1;
      }
    }

    int st = ss + tt;
    //cout << "ss:" << ss << " tt:" << tt << " st:" << st << endl;
    string ans, sts = to_string(st);
    REP(j, sts.size()) {
      if(sts[j] - '0' >= 2) ans += sts[j];
      if(sts[j] - '0' >= 1) {
        if(sts.size()-j == 4) ans += 'm';
        else if(sts.size()-j == 3) ans += 'c';
        else if(sts.size()-j == 2) ans += 'x';
        else if(sts.size()-j == 1) ans += 'i';
      }
    }

    cout << ans << endl;
  }

  return 0;
}