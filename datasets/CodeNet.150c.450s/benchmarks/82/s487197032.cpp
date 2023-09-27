#include <iostream>
#include <string>
#include <vector>

enum face {
  TOP,
  FRONT,
  RIGHT,
  LEFT,
  BACK,
  BOTTOM
};

class dice {
  public:
    dice();
    void setDice(int spot, int eye);
    int getSpot(int top);
    void rollNorth();
    void rollSouth();
    void rollEast();
    void rollWest();
    void rollRight();
    void rollLeft();
    std::vector<dice> all_rolls();

    int& operator[] (face f) {return id[f];}
    const int& operator[] (face f) const {return id[f];}
    bool operator==(const dice &b) const {
      const dice &a = *this;
      return a[TOP] == b[TOP] && a[BOTTOM] == b[BOTTOM] &&
             a[FRONT] == b[FRONT] && a[BACK] == b[BACK] &&
             a[LEFT] == b[LEFT] && a[RIGHT] == b[RIGHT];
    }

  private:
    void roll(face a, face b, face c, face d);
    std::vector<int> id;
};

dice::dice() {
  id.resize(6);
}

void dice::setDice(int spot, int eye) {
  switch(eye) {
    case TOP:
      id[TOP] = spot;
      break;
    case BOTTOM:
      id[BOTTOM] = spot;
      break;
    case FRONT:
      id[FRONT] = spot;
      break;
    case BACK:
      id[BACK] = spot;
      break;
    case LEFT:
      id[LEFT] = spot;
      break;
    case RIGHT:
      id[RIGHT] = spot;
      break;
  }
}

int dice::getSpot(int top) {
  return id[top];
}

void dice::rollNorth() {
  roll(TOP, FRONT, BOTTOM, BACK);
}

void dice::rollSouth() {
  roll(TOP, BACK, BOTTOM, FRONT);
}

void dice::rollEast() {
  roll(TOP, LEFT, BOTTOM, RIGHT);
}

void dice::rollWest() {
  roll(TOP, RIGHT, BOTTOM, LEFT);
}

void dice::rollRight() {
  roll(FRONT, LEFT, BACK, RIGHT);
}

void dice::rollLeft() {
  roll(FRONT, RIGHT, BACK, LEFT);
}

std::vector<dice> dice::all_rolls() {
  std::vector<dice> ret;
  for(int k = 0; k < 6; (k&1 ? rollEast(): rollNorth()), ++k) {
    for(int i = 0; i < 4; rollRight(), ++i) {
      ret.push_back(*this);
    }
  }
  return ret;
}

void dice::roll(face a, face b, face c, face d) {
  int tmp = id[a];
  id[a] = id[b];
  id[b] = id[c];
  id[c] = id[d];
  id[d] = tmp;
}

int main() {
  int d;
  dice di;
  for(int i = 0; i < 6; ++i) {
    std::cin >> d;
    di.setDice(d, i);
  }
  std::vector<dice> v = di.all_rolls();

  int n;
  int x, y;
  for(std::cin>>n;  n > 0; --n) {
    std::cin >> x >> y;
    for(int i = 0; i < v.size(); ++i) {
      if(v[i][TOP] == x && v[i][FRONT] == y) {
        std::cout << v[i][RIGHT] << std::endl;
      }
    }
  }

  return 0;
}