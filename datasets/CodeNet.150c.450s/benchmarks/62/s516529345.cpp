#include <iostream>
using namespace std;

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  if (a > b) {
    int a1,a2;
    a1 = a;
    a2 = b;
    a = a2;
    b = a1;
  }
  if (b > c){
    int a1,a2;
    a1 = b;
    a2 = c;
    b = a2;
    c = a1;
  }
    if (a > b) {
    int a1,a2;
    a1 = a;
    a2 = b;
    a = a2;
    b = a1;
  }

  cout << a << " "<< b << " " << c << endl;
  return 0;
}