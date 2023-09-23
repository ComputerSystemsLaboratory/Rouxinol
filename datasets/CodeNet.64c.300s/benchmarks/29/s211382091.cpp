#include <iostream>
using namespace std;
int E;
int solve(int E);

int solve(int E) {
  int x,y,z;
  int min = E;
  for (z=0;z*z*z<=E;z++) {
    for (y=0;y*y<=E-z*z*z;y++) {
      x = E-z*z*z-y*y;
      if (x>=0 && x+y+z<min) {
	min = x+y+z;
      }
    }
  }
  return min;
}
int main() {
  while (cin >> E && E>0) {
    cout << solve(E) << endl;
  }
}