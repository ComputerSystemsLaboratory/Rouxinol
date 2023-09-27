#include <iostream>
using namespace std;
class Rands {
  public:
    int a, b, c, x, countNext;
    Rands(int _a, int _b, int _c, int _x):
      a(_a),
      b(_b),
      c(_c),
      x(_x),
      countNext(0) {
    }
    int getNext() {
      ++countNext;
      int oldX = x;
      x = (a * x + b) % c;
      return oldX;
    }
    int getLast() {
      return x;
    }
    int getCountOfNext() {
      return countNext - 1;
    }
};

int main() {
  int n, a, b, c, x;
  while(cin >> n >> a >> b >> c >> x, n || a || b || c || x) {
    Rands rands(a, b, c, x);
    for(int i = 0; i < n; ++i) {
      int rand;
      cin >> rand;
      while(rand != rands.getNext() && rands.getCountOfNext() <= 10000);
    }
    cout << ((rands.getCountOfNext() > 10000) ? -1 : rands.getCountOfNext()) << endl;
  }
  return 0;
}