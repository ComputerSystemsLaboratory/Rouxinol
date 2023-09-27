#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int N;
  cin >> N;

  vector<string> results = {"AC", "WA", "TLE", "RE"};
  map<string,int> count;
  for (string res: results) {
    count[res] = 0;
  }
  rep(_, N) {
    string S;
    cin >> S;
    count[S]++;
  }
  for (string res: results) {
    cout << res << " x " << count[res] << endl;
  }
  return 0;
}