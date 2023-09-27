#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[3];
  while (n--) {
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    string res;
    if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) {
      res = "YES";
    } else {
      res = "NO";
    }
    cout << res << endl;
  }
}