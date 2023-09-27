#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  queue<pair<int, string> > ps;
  for(int i = 0; i < n; ++i) {
    string id;
    int size;
    cin >> id >> size;
    ps.push(make_pair(size, id));
  }
  for(int time = 0; !ps.empty();) {
    auto p = ps.front();
    ps.pop();
    time += min(p.first, t);
    p.first -= t;
    if(p.first > 0) {
      ps.push(p);
    } else {
      cout << p.second << ' ' << time << endl;
    }
  }
  return 0;
}