#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  cin >> m;
  string line;
  for(int i = 0; i < m; i++){
    cin >> line;
    set<string> q;
    for(int j = 1; j < line.size(); j++) {
      string f, l;
      f = line.substr(0, j);
      l = line.substr(j);
      q.insert(f + l);
      q.insert(l + f);
      reverse(f.begin(), f.end());
      q.insert(f + l);
      q.insert(l + f);
      reverse(l.begin(), l.end());
      q.insert(f + l);
      q.insert(l + f);
      reverse(f.begin(), f.end());
      q.insert(f + l);
      q.insert(l + f);
    }
    cout <<  q.size() << endl;
  }
  return 0;
}