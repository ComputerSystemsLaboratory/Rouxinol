#include <iostream>
#include <map>
#include <queue>
#include <string>
using namespace std;
int main() {
  int n, q, time, t = 0;
  string name;
  queue<pair<string, int> > p;
  cin >> n >> q;
  for (int i = 0; i < n; i++) {
    cin >> name >> time;
    p.push(pair<string, int>(name, time));
  }
  while (!p.empty()) {
    pair<string, int> a = p.front();
    p.pop();
    a.second -= q;
    t += q;
    if (a.second <= 0) {
      t += a.second;
      cout << a.first << " " << t << endl;
    } else {
      p.push(a);
    }
  }
  return 0;
}