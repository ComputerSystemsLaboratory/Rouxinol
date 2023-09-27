#include <iostream>
using namespace std;
int main() {
  bool judge = true;
  int x;
  int n	= 0;
  while (judge) {
    cin >> x;
    n++;
    if (x != 0) {
      cout << "Case " << n << ": " << x	<< endl;
    } else {
      judge = false;
    }
  }
  return 0;
}