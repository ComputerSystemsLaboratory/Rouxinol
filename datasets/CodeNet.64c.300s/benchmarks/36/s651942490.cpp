#include <iostream>
using namespace std;

int main() {
  int a1, a2, a3, temp;
  cin >> a1 >> a2 >> a3;

  if (a1 > a2) {
    temp = a1;
    a1 = a2;
    a2 = temp;
  }
  if (a2 > a3) {
    temp = a2;
    a2 = a3;
    a3 = temp;
  }
  if (a1 > a2) {
    temp = a1;
    a1 = a2;
    a2 = temp;
  }

  cout << a1 << " " << a2 << " " << a3 << endl;
}