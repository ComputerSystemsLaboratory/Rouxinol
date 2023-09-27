#include <iostream>

using namespace std;

int main()
{
  int x, y;
  int foo;
  while(1){
    cin >> x >> y;
    if(x == 0 && y == 0)break;
    if(x > y){
      foo = x;
      x = y;
      y = foo;
    }
    cout << x << " " << y << "\n";
  }
}