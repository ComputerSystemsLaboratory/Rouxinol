#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <functional>
#include <queue>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
  const char *ws[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  int ms[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
  for (int i = 2; i <= 12; i++)
    ms[i] += ms[i-1];
  for (;;) {
    int m, d;
    cin >> m >> d;
    if (!m && !d) return 0;
    cout << ws[(2+ms[m-1]+d)%7] << endl;
  }
  return 0;
}