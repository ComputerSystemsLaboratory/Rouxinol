#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> x(3001), y(3001);
  int idx = 0;
  while(true) {
    cin >> x.at(idx) >> y.at(idx);
    if (x.at(idx) == 0 && y.at(idx) == 0) break;
    idx++;
  }
  idx = 0;
  while(!(x.at(idx) == 0 && y.at(idx) == 0)) {
    if (x.at(idx) <= y.at(idx)) cout << x.at(idx) << " " << y.at(idx) << endl;
    else cout << y.at(idx) << " " << x.at(idx) << endl;
    idx++;
  }
}
