#include <iostream>

using namespace std;

int main(void)
{
  int w = 0, h = 0, x = 0, y = 0, r= 0;
  cin >> w >> h >> x >> y >> r;

  bool inRect = false;
  if (0 <= (x-r) && (x+r) <= w
      && 0 <= (y-r) && (y+r) <= h) {
    inRect = true;
  }

  cout << (inRect ? "Yes" : "No") << endl;
  
  return 0;
}