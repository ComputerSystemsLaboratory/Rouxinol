#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  typedef pair<string, int> P;
  int n, q;
  queue<P> p;

  cin >> n >> q;

  for (int i = 0; i < n; i++) {
    string s;
    int t;
    cin >> s >> t;
    p.push(make_pair(s,t));
  }

  int et = 0;
  while(p.size()) {
    P f = p.front(); p.pop();
    if(f.second > q) {
      f.second -= q;
      p.push(f);
      et += q;
    }
    else {
      et += f.second;
      cout << f.first << ' ' << et << endl;
    }
  }
}