#include <iostream>
using namespace std;

int main() {
  int debt, n;
  debt = 100000;
  cin >> n;

  while(n-- > 0) {
    debt += debt*0.05;
    if(debt%1000 != 0)
      debt += 1000 - debt%1000;
  }

  cout << debt << endl;

  return 0;
}