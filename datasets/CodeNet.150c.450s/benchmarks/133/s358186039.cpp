#include <iostream>
#include <set>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
  ll d, c[26], s[365][26], t[365], ans = 0;
  set<ll> se[26];
  cin >> d;
  for (int i = 0; i < 26; i++) {
    cin >> c[i];
    se[i].insert(0);
  }
  for (int i = 0; i < d; i++) {
    for (int j = 0; j < 26; j++) {
      cin >> s[i][j];
    }
  }
  for (int i = 0; i < d; i++) {
    cin >> t[i];
    t[i]--;
    se[t[i]].insert(i + 1);
    ans += s[i][t[i]];
    for (int j = 0; j < 26; j++) {
      ans -= (i + 1 - *se[j].rbegin()) * c[j];
    }
    cout << ans << endl;
  }
}