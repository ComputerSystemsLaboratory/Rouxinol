#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int f(int x) {
  return x * x;
}

int main() {
  int d;
  int D = 600;
  while (cin >> d) {
    int s = 0;
    for (int i = 1; i * d < D; i++)
      s += f(i * d) * d;

    cout << s << endl;
  }
}