#include <bits/stdc++.h>
using namespace std;
#define rep(i, ss, ee) for (int i = ss; i < ee; ++i)

int N;
std::map<string, int> m{{"AC", 0}, {"WA", 0}, {"TLE", 0}, {"RE", 0}};
void input() {
  cin >> N;
  string s;
  rep(i, 0, N) {
    cin >> s;
    m[s]++;
  }
}
void solve() {
  cout << "AC x " << m["AC"] << endl;
  cout << "WA x " << m["WA"] << endl;
  cout << "TLE x " << m["TLE"] << endl;
  cout << "RE x " << m["RE"] << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  input();
  solve();
}