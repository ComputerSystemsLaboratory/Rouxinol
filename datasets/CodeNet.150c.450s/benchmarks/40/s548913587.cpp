#include <iostream>
#include <vector>
#include <string>

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

  std::string commands;
  std::cin >> commands;

  for(int i = 0; commands[i] != '\0'; ++i) {
    if(commands[i] == 'N') di.rollNorth();
    if(commands[i] == 'E') di.rollEast();
    if(commands[i] == 'W') di.rollWest();
    if(commands[i] == 'S') di.rollSouth();
  }
  d = di.getSpot(TOP);
  std::cout << d << std::endl;

  return 0;
}