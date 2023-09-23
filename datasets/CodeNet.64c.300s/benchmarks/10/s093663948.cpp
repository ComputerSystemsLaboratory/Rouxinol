#include <iostream>
using namespace std;
int main() {
  bool judge = true;
  int x, y;
  int n	= 0;
  while (judge) {
    cin >> x >> y;
    if ((x == 0) && (y == 0)) {
      judge =	false;
    } else {
      if (x > y) {
	cout <<	y << " " << x << endl;
      }	else {
	cout <<	x << " " << y << endl;
      }
    }
  }
  return 0;
}