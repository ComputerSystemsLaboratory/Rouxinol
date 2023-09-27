#include <iostream>
using namespace std;

int x_cubic(int x, int depth);

int main(void) {
  int x;
  cin >> x;
  cout << x_cubic(x, 3) << endl;

  return 0;
}

int x_cubic(int x, int depth) {
  if(depth == 1) {
    return x;
  } else {
    return x * x_cubic(x, depth - 1);
  }
}