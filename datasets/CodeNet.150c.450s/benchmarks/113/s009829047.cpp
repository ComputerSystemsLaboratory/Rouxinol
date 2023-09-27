#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> x(10001);
  int idx = 0;
  while(true) {
    cin >> x.at(idx);
    if (x.at(idx) == 0) break;
    idx++;
  }
  idx = 0;
  while(x.at(idx) != 0) {
    cout << "Case " << idx + 1 << ": " << x.at(idx) << endl;
    idx++;
  }
}
