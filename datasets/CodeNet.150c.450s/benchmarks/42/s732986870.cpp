#include <iostream>
#include <string>
#include <queue>
#include <vector>

using namespace std;

int main() {
  int n, q, t = 0, min2;
  cin >> n >> q;
  string s;
  int t2;
  pair<string,int> tmp;
  queue<pair<string,int> > q1;
  for (int i = 0; i < n; i++) {
    cin >> s >> t2;
    q1.push(make_pair(s, t2));
  }
  while (q1.size() > 0) {
    tmp = q1.front();
    min2 = min(tmp.second, q);
    tmp.second -= min2;
    t += min2;
    if (tmp.second <= 0) {
      cout << tmp.first << " " << t << endl;
      q1.pop();
    } else {
      q1.push(tmp);
      q1.pop();
    }
  }
  return 0;
}

