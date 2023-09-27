#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <cstdio>
#include <complex>
#include <climits>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  a = " " + a;
  b = " " + b;
  vector<vector<int> > v(b.size(), vector<int>(a.size(), INT_MAX));
  for (int i = 0; i < a.size(); i++) {
    v[0][i] = i;
  }
  for (int i = 0; i < b.size(); i++) {
    v[i][0] = i;
  }
  for (int i = 1; i < b.size(); i++) {
    for (int j = 1; j < a.size(); j++) {
      if (b[i] == a[j]) {
        v[i][j] = v[i-1][j-1];
      } else {
        v[i][j] = min(v[i][j-1], min(v[i-1][j], v[i-1][j-1])) + 1;
      }
    }  
  }
  /*
  for (int i = 0; i < b.size(); i++) {
    for (int j = 0; j < a.size(); j++) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }*/

  cout << v[b.size()-1][a.size()-1] << endl;
}