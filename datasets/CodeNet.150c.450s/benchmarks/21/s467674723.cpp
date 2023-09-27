#include <iostream>
using namespace std;

int main() {
  int x = 0;
  cin >> x;

  if((x >= 1) && (x <= 100)) {
    cout << x * x * x << endl;
  }
}