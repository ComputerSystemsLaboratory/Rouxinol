#include <iostream>
#include <map>
#include <queue>

using namespace std;

int main() {
  map<int, int> m;
  priority_queue<pair<int, int> > que;
  int n;
  while (cin >> n) {
    m[n]++;
  }
  for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
    que.push(pair<int, int>(it->second, it->first));
  }
  priority_queue<int, vector<int>, greater<int> > result;
  pair<int, int> maxi = que.top(); que.pop();
  result.push(maxi.second);
  while (!que.empty()) {
    pair<int, int> n = que.top(); que.pop();
    if (maxi.first == n.first) {
      result.push(n.second);
    } else {
      break;
    }
  }
  while (!result.empty()) {
    cout << result.top() << endl;
    result.pop();
  }

  return 0;
}