#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  int a, b, g;
  long long l;
  while (cin >> a >> b) {
    g = gcd(a, b);
    l = a / g * b / g * g;
    cout << g << " " << l << endl;
  }
}