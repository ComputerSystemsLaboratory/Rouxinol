#include <iostream>

using namespace std;

int main()
{
  int W;
  int H;
  int x;
  int y;
  int r;
  
  cin >> W >> H >> x >> y >> r;
  
  if(W>=(x+r) && (x-r)>=0 && H>=(y+r) && (y-r)>=0)
    cout << "Yes\n";
  else
    cout << "No\n";
}