#include <iostream>
#include <map>
#include <queue>

using namespace std;

int main() {
  string max_word;
  map<string, int> m;
  string str;
  while (cin >> str) {
    m[str]++;
    if (str.size() > max_word.size()) max_word = str;
  }
  priority_queue<pair<int, string> > que;
  for (map<string, int>::iterator it = m.begin() ; it != m.end(); it++) {
    que.push(pair<int, string>(it->second, it->first));
  }
  cout << que.top().second << ' ' << max_word << endl;

  return 0;
}