#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a = 0;
  cin >> a;
  cout << (long long)tgamma((long int)a + 1) << endl;
  return 0;
}