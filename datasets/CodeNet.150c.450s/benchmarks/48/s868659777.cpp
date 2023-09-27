#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = 99999999;

int main(void) {

  int e, t;
  vector<int> y2, z3;
  for (t = 0; t*t <= 1000000; t++) y2.push_back(t*t);
  for (t = 0; t*t*t <= 1000000; t++) z3.push_back(t*t*t);

  while (cin >> e, e) {
    int m = INF;
    for (int i = 0; i < y2.size(); i++) {
      for (int j = 0; j < z3.size(); j++) {
        if (y2[i]+z3[j] <= e) {
          m = min(m, (e-y2[i]-z3[j])+i+j);
        }
      }
    }
    cout << m << endl;
  }

  return 0;
}