#include <iostream>

using namespace std;

struct Dice {
  int top;
  int bottom;
  int front;
  int back;
  int left;
  int right;
  Dice() : top(1), bottom(6), front(2), back(5), left(4), right(3) {}
  void E() {
    int tmp = right;
    right = top; top = left; left = bottom; bottom = tmp;
  }
  void N() {
    int tmp = back;
    back = top; top = front; front = bottom; bottom = tmp;
  }
  void S() {
    int tmp = front;
    front = top; top = back; back = bottom; bottom = tmp;
  }
  void W() {
    int tmp = left;
    left = top; top = right; right = bottom; bottom = tmp;
  }
  void Fit(int t, int f) {
    for (int i = 0; i < 2; ++i) {
      for (int j = 0; j < 4; ++j) {
        if (f == front) break;
        N();
      }
      E();
    }
    if (f == front) {
      for (int i = 0; i < 4; ++i) {
        if (t == top) break;
        E();
      }
    }
  }
};

int main() {
  Dice d;
  cin >> d.top;
  cin >> d.front;
  cin >> d.right;
  cin >> d.left;
  cin >> d.back;
  cin >> d.bottom;
  
  int q;
  cin >> q;
  for (int i = 0; i < q; ++i) {
    int t, f;
    cin >> t >> f;
    d.Fit(t, f);
    cout << d.right << endl;
  }
  return 0;
}

