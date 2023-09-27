#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
  int year[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
  string day[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
  int first = 3;

  int m, d;
  while (true) {
    cin >> m >> d;
    if (!(m|d)) break;
    int n = first;
    for (int i = 0; i < m-1; i++) {
      n += year[i];
    }
    n += d-1;

    n %= 7;
    cout << day[n] << endl;
  }
}