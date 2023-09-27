#include <iostream>
using namespace std;

int main() {
  struct Line{
    double x1, y1, x2, y2;
  };

  Line l1, l2;
  int n;

  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> l1.x1 >> l1.y1 >> l1.x2 >> l1.y2 >> l2.x1 >> l2.y1 >> l2.x2 >> l2.y2;
    if((l1.y2-l1.y1)/(l1.x2-l1.x1) == (l2.y2-l2.y1)/(l2.x2-l2.x1)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}