#include <iostream>
using namespace std;

int main() {
  int a1,a2,a3,a4,b1,b2,b3,b4,atot,btot;
  cin >> a1 >> a2 >> a3 >> a4 >> b1 >> b2 >> b3 >> b4;
  atot = a1 + a2 + a3 + a4;
  btot = b1 + b2 + b3 + b4;
  if( atot > btot)
    cout << atot << endl;
  else
    cout << btot << endl;
}