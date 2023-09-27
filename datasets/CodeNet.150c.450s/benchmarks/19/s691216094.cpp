#include <iostream>
using namespace std;

int main()
{
   for (int i = 1; ; i++) {
   int x,y;
   cin >> x >> y;
   if (x == 0 && y == 0)
    break;
   if (x > y) {
   int t = x;
   x = y;
   y = t;
  }
  cout << x << ' ' << y << endl;
  }
}