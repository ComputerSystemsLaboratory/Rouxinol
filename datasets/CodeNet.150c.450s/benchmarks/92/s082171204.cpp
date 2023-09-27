#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

#define str to_string
#define rep(i, n) for (int i=0; i<int(n); i++)
#define all(c) (c).begin(), (c).end()


int main() {
  int a, b;
  while (cin >> a >> b) {
    cout << (to_string(a+b)).length() << "\n";
  }
  return 0;
}