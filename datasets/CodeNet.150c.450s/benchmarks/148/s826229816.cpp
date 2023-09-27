#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P  = pair <int, int>;

#define rep(i, n)     for (int i = 0; i < (int) (n); i++)
#define repr(i, a, b) for (int i = a; i < b; i++)
#define each(i, mp)   for (auto &i : mp)

const int INF = 1001001001;

int main()
{
  int n;
  cin >> n;
  string s[n];
  rep(i, n) cin >> s[i];
  int    counter[4] = { 0, 0, 0, 0 };
  string ans[4]     = { "AC", "WA", "TLE", "RE" };
  rep(i, n) {
    rep(j, 4) {
      if (ans[j] == s[i]) {
        counter[j]++;
      }
    }
  }

  cout << "AC x " << counter[0] << endl;
  cout << "WA x " << counter[1] << endl;
  cout << "TLE x " << counter[2] << endl;
  cout << "RE x " << counter[3] << endl;

  return 0;
}
