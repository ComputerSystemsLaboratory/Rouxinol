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
    top = s;
    bottom = n;
    north = t;
    south = b;
  }
  void toEast()
  {
    int t = top, b = bottom, e = east, w = west;
    top = w;
    bottom = e;
    east = t;
    west = b;
  }
  void toSouth()
  {
    int t = top, b = bottom, n = north, s = south;
    top = n;
    bottom = s;
    north = b;
    south = t;
  }
  void toWest()
  {
    int t = top, b = bottom, e = east, w = west;
    top = e;
    bottom = w;
    west = t;
    east = b;
  }
} d;

int main()
{
  cin >> d.top >> d.south >> d.east >> d.west >> d.north >> d.bottom;
  string o;
  cin >> o;
  for (auto &s : o)
  {
    switch (s)
    {
    case 'N':
      d.toNorth();
      break;
    case 'E':
      d.toEast();
      break;
    case 'S':
      d.toSouth();
      break;
    case 'W':
      d.toWest();
      break;
    }
  }
  cout << d.top << endl;
}