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
  long long f = 1;
  while (n > 0) {
    f *= n--;
  }
  cout << f << endl;
}