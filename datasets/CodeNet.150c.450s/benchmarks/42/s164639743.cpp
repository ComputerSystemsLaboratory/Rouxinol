#include <iostream>
#include <string>
#include <queue>
using namespace std;

typedef pair<string, int> P;

int main(void){
  int n, qtm, elps = 0;
  queue<P> que;
  
  cin >> n >> qtm;
  string name;
  int val;
  for (auto i = 0; i < n; i++) {
    cin >> name >> val;
    que.push(P(name, val));
  }
  
  while (!que.empty()) {
    auto p = que.front(); que.pop();
    if (p.second <= qtm) {
      elps += p.second;
      cout << p.first << " " << elps << endl;
    } else {
      elps += qtm;
      que.push(P(p.first, p.second - qtm));
    }
  }
  
  return 0;
}