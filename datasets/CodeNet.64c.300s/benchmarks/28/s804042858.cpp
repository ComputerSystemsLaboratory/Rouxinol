#include <iostream>
using namespace std;
int main() {
  int x, y, w, h, r;
  cin >> w >> h >> x >> y >> r;
  if (x-r >= 0 && y-r >= 0 && x+r <= w && y+r <= h) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

