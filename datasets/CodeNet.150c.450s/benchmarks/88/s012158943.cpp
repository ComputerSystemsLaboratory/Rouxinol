#include <algorithm>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <set>
#include <stack>
#include <stdlib.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed
#define INF INT_MAX/2-1
#define pb push_back

using namespace std;

class IR
{
private:
  int m_w;
  int m_h;
  int m_diagonal;
public:
  void setW(int w);
  void setH(int h);
  void setDiagonal(int w, int h);
  int getW();
  int getH();
  int getDiagonal();
  IR(int w, int h) {
    setW(w);
    setH(h);
    setDiagonal(w, h);
  }
};

void IR::setW(int w) {
  m_w = w;
}

void IR::setH(int h) {
  m_h = h;
}

void IR::setDiagonal(int w, int h) {
  m_diagonal = w*w + h*h;
}

int IR::getW() {
  return m_w;
}

int IR::getH() {
  return m_h;
}

int IR::getDiagonal() {
  return m_diagonal;
}

int main() {
  int w, h;
  vector<IR> IRs;
  for (int i = 1; i < 150; i++) {
    for (int j = 1; j < i; j++) {
      IRs.pb(IR(i, j));
    }
  }
  for (int i = 0; i < IRs.size(); i++) {
    for (int j = i+1; j < IRs.size(); j++) {
      if (IRs[i].getDiagonal() > IRs[j].getDiagonal() || (IRs[i].getDiagonal() == IRs[j].getDiagonal() && IRs[i].getH() > IRs[j].getH())) {
        swap(IRs[i], IRs[j]);
      }
    }
  }
  while (cin >> h >> w, w | h) {
    for (int i = 0; i < IRs.size(); i++) {
      if (w == IRs[i].getW() && h == IRs[i].getH()) {
        cout << IRs[i+1].getH() << " " << IRs[i+1].getW() << el;
        break;
      }
    }
  }
}