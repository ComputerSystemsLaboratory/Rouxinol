#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int debt = 100000, n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    debt *= 1.05;
    debt = (int)ceil(debt/1000.0)*1000;
  }
  cout << debt << endl;
}