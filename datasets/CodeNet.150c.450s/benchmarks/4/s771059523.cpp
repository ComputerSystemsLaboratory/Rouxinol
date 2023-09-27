#include <iostream>
using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  while (x != -1 || y != -1) {
    if ((x == -1) || (y == -1)) cout << "F" << endl;
    if (x + y >= 80) cout << "A" << endl;
    if (x + y < 80 && x + y >= 65) cout << "B" << endl;
    if (x + y < 65 && x + y >= 50) cout << "C" << endl;
    if (x + y < 50 && x + y >= 30 && x != -1 && y != -1) {
      if (z >= 50) cout << "C" << endl;
      else cout << "D" << endl;
    }
    if (x + y < 30) cout << "F" << endl;
    cin >> x >> y >> z;
  }
}
