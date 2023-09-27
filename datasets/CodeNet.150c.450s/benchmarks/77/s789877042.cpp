#include <algorithm>
#include <iostream>
#include <limits.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed

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
  int N, x, y, M, l, rx, ry;
  string d;
  while (1) {
    cin >> N;
    vector<Point> gems;
    if (N == 0) break;
    for (int i = 0; i < N; i++) {
      cin >> x >> y;
      gems.push_back(Point(x, y));
    }
    cin >> M;
    rx = 10;
    ry = 10;
    while (M--) {
      cin >> d >> l;
      while (l--) {
        if (d == "N") ry++;
        if (d == "E") rx++;
        if (d == "S") ry--;
        if (d == "W") rx--;
        for (int i = 0; i < gems.size(); i++) {
          if (rx == gems[i].getX() && ry == gems[i].getY()) {
            gems.erase(gems.begin()+i);
            break;
          }
        }
      }
    }
    if (gems.empty()) cout << "Yes" << el;
    else cout << "No" << el;
  }
}