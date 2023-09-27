#include <iostream>
#include <string>

using namespace std;

struct Dise
{
  int top;
  int bottom;
  int north;
  int east;
  int south;
  int west;
  void toNorth()
  {
    int t = top, b = bottom, n = north, s = south;
    top = s, bottom = n, north = t, south = b;
  }
  void toEast()
  {
    int t = top, b = bottom, e = east, w = west;
    top = w, bottom = e, east = t, west = b;
  }
  void toSouth()
  {
    int t = top, b = bottom, n = north, s = south;
    top = n, bottom = s, north = b, south = t;
  }
  void toWest()
  {
    int t = top, b = bottom, e = east, w = west;
    top = e, bottom = w, west = t, east = b;
  }
  void spin()
  {
    int n = north, e = east, s = south, w = west;
    north = w, east = n, south = e, west = s;
  }
  void toTop(int a)
  {
    if (a == north)
      toSouth();
    else if (a == east)
      toWest();
    else if (a == south)
      toNorth();
    else if (a == west)
      toEast();
    else if (a == bottom)
    {
      toNorth();
      toNorth();
    }
  }
} d;

int main()
{
  cin >> d.top >> d.south >> d.east >> d.west >> d.north >> d.bottom;
  int q, a, b;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    cin >> a >> b;
    d.toTop(a);
    while (b != d.south)
      d.spin();
    cout << d.east << endl;
  }
}