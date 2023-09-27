#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
  while(true) {
    int r,c;
    cin>>r>>c;
    if (!(r||c)) break;
    vector<vector<int>> t(r,vector<int>(c));
    for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c; ++j) {
        cin >> t[i][j];
      }
    }
    vector<vector<int>> v(1<<r, vector<int>(c));
    vector<int> mx(1<<r, 0);
    for (int i = 0; i < c; ++i) {
      for (int j = 0; j < r; ++j) {
        for (int k = 0; k < (1 << r); ++k) {
          if (((k >> j) & 1) ^ t[j][i]) {
            v[k][i]++;
          }
        }
      }
      for (int j = 0; j < (1 << r); ++j) {
        if (v[j][i] > (r >> 1)) {
          mx[j] += v[j][i];
        } else {
          mx[j] += r - v[j][i];
        }
      }
    }
    cout << *max_element(begin(mx), end(mx)) << endl;
  }
  return 0;
}