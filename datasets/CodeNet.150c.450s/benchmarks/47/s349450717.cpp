#include <iostream>
using namespace std;

int main()
{
  int w,h,x,y,r;
  cin >> w >> h >> x >> y >> r;
  int xmin = x - r;
  int ymin = y - r;
  int xmax = x + r;
  int ymax = y + r;
  if(xmin < 0 || w < xmax || ymin < 0 || h < ymax) cout << "No" << endl;
  else cout << "Yes" << endl;
  return 0;
}