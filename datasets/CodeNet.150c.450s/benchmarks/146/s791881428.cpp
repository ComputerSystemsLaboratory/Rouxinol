#include <iostream>
using namespace std;
int main(void) {
  int n;
  float x1, y1, x2, y2, x3, y3, x4, y4;
  cin >> n;
  while (n--) {
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if ((y1 - y2) / (x1 - x2) == (y3 - y4) / (x3 - x4)) {
      cout << "YES";
    } else {
      cout << "NO";
    }
    cout << endl;
  }
  return 0;
}