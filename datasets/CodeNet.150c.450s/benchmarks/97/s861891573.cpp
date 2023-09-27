#include <algorithm>
#include <iostream>
#include <limits.h>
#include <stdlib.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed
#define INF INT_MAX/2-1
#define pb push_back

using namespace std;

class Point
{
private:
  int m_x;
  int m_y;
public:
  void setX(int x);
  void setY(int y);
  int getX();
  int getY();

  Point(int x, int y) {
    setX(x);
    setY(y);
  }
};

void Point::setX(int x) {
  m_x = x;
}

void Point::setY(int y) {
  m_y = y;
}

int Point::getX() {
  return m_x;
}

int Point::getY() {
  return m_y;
}

int main() {
  int N, n, d, max_x, min_x, max_y, min_y;
  while (cin >> N, N) {
    vector<Point> tiles;
    tiles.pb(Point(0, 0));
    while (--N) {
      cin >> n >> d;
      Point t = tiles[n];
      if (d == 0) tiles.pb(Point(t.getX()-1, t.getY()));
      if (d == 1) tiles.pb(Point(t.getX(), t.getY()-1));
      if (d == 2) tiles.pb(Point(t.getX()+1, t.getY()));
      if (d == 3) tiles.pb(Point(t.getX(), t.getY()+1));
    }
    max_x = -INF;
    min_x = INF;
    max_y = -INF;
    min_y = INF;
    for (int i = 0; i < tiles.size(); i++) {
      if (tiles[i].getX() > max_x) max_x = tiles[i].getX();
      if (tiles[i].getX() < min_x) min_x = tiles[i].getX();
      if (tiles[i].getY() > max_y) max_y = tiles[i].getY();
      if (tiles[i].getY() < min_y) min_y = tiles[i].getY();
    }
    cout << max_x-min_x+1 << " " << max_y-min_y+1 << el;
  }
}