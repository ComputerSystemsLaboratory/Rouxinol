#include <iostream>
#include <unordered_map>
#include <algorithm>
#define REP(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;

int M;

bool unique(string s, unordered_map<string, bool> &v) {
  if(v[s]) return false;
  return v[s] = true;
}

int main(void) {
  cin >> M;
  REP(i, 0, M) {
    string S; cin >> S;
    unordered_map<string, bool> v;
    int cnt = 0;

    REP(i, 1, S.length()) {
      string s1 = S.substr(0, i), s2 = S.substr(i, S.length());
      string r1 = S.substr(0, i), r2 = S.substr(i, S.length());
      reverse(r1.begin(), r1.end());
      reverse(r2.begin(), r2.end());

      if(unique(s1 + s2, v) == 1) cnt++;
      if(unique(s1 + r2, v) == 1) cnt++;
      if(unique(r1 + s2, v) == 1) cnt++;
      if(unique(r1 + r2, v) == 1) cnt++;
      if(unique(s2 + s1, v) == 1) cnt++;
      if(unique(s2 + r1, v) == 1) cnt++;
      if(unique(r2 + s1, v) == 1) cnt++;
      if(unique(r2 + r1, v) == 1) cnt++;
    }

    cout << cnt << endl;
  }

  return 0;
}