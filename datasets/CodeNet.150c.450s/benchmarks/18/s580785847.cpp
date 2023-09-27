#include <iostream>
#include <math.h>
using namespace std;

int main() {
  unsigned int week;
  cin >> week;
  float debt = 100;  // in unit of 1000.

  for(int i=0; i<week; i++) {
    debt *= 1.05;
    debt = ceil(debt);
  }

  cout << (int)debt*1000 << endl;

  return 0;
}