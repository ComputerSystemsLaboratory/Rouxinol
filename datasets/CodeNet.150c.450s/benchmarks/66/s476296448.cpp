#include <bits/stdc++.h>
using namespace std;

int N, M, c;
map<string, int> mp;
vector<string> T;

string solve(string s) {
  if (!mp[s]) return "Unknown " + s;
  return ( (++c % 2) ? "Opened by " : "Closed by " ) + s;
}

int main() {
  cin >> N;
  for (int i = 0; i < N; ++i) {
    string U; cin >> U;
    ++mp[U];
  }
  cin >> M;
  T = vector<string>(M);
  for (int i = 0; i < M; ++i) cin >> T[i];

  for (auto&& s : T) cout << solve(s) << endl;
  return 0;
}

