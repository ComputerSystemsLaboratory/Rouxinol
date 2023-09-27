#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
  while(true) {
    int ncard1, ncard2;
    cin >> ncard1 >> ncard2;
    if(!ncard1 && !ncard2) break;
    set<int> cards1;
    set<int> cards2;
    int total1 = 0;
    int total2 = 0;
    for(int i = 0; i < ncard1; ++i) {
      int n;
      cin >> n;
      cards1.insert(n);
      total1 += n;
    }
    for(int i = 0; i < ncard2; ++i) {
      int n;
      cin >> n;
      cards2.insert(n);
      total2 += n;
    }
    if((total1 + total2) % 2) {
      cout << -1 << endl;
      continue;
    }
    bool flag = false;
    for(auto i = cards1.begin(); i != cards1.end(); ++i) {
      auto j = cards2.find(((total1 + total2) / 2) - (total1 - *i));
      if(j != cards2.end()) {
        cout << *i << " " << *j << endl;
        flag = true;
        break;
      }
    }
    if(!flag) cout << -1 << endl;
  }
  return 0;
}