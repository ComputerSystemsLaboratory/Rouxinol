#include <iostream>
#include <string>

#define el endl
#define fd fixed

using namespace std;

class Dice
{
private:
  int top;
  int face;
  int right;
  int left;
  int back;
  int bottom;
public:
  void setTop(int a);
  void setFace(int a);
  void setRight(int a);
  void setLeft(int a);
  void setBack(int a);
  void setBottom(int a);
  int getTop();
  int getFace();
  int getRight();
  int getLeft();
  int getBack();
  int getBottom();
  void roll(string s);
  void rollE();
  void rollN();
  void rollS();
  void rollW();
  void arrangeTop(int a);
  void arrangeFace(int a);
};

void Dice::setTop(int a) {
  top = a;
}

void Dice::setFace(int a) {
  face = a;
}

void Dice::setRight(int a) {
  right = a;
}

void Dice::setLeft(int a) {
  left = a;
}

void Dice::setBack(int a) {
  back = a;
}

void Dice::setBottom(int a) {
  bottom = a;
}

int Dice::getTop() {
  return top;
}

int Dice::getFace() {
  return face;
}

int Dice::getRight() {
  return right;
}

int Dice::getLeft() {
  return left;
}

int Dice::getBack() {
  return back;
}

int Dice::getBottom() {
  return bottom;
}

void Dice::roll(string s) {
  int n = s.length();
  for (int i = 0; i < n; i++) {
    if (s[i] == 'E') rollE();
    if (s[i] == 'N') rollN();
    if (s[i] == 'S') rollS();
    if (s[i] == 'W') rollW();
  }
}

void Dice::rollE() {
  int tmp = top;
  top = left;
  left = bottom;
  bottom = right;
  right = tmp;
}

void Dice::rollN() {
  int tmp = top;
  top = face;
  face = bottom;
  bottom = back;
  back = tmp;
}

void Dice::rollS() {
  int tmp = top;
  top = back;
  back = bottom;
  bottom = face;
  face = tmp;
}

void Dice::rollW() {
  int tmp = top;
  top = right;
  right = bottom;
  bottom = left;
  left = tmp;
}

void Dice::arrangeTop(int a) {
  for (int i = 0; i < 3; i++) {
    if (top == a) break;
    roll("N");
    if (top == a) break;
    roll("E");
  }
}

void Dice::arrangeFace(int a) {
  for (int i = 0; i < 4; i++) {
    if (face == a) break;
    roll("NES");
  }
}

int main() {
  Dice d;
  int a[6], q;
  cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> q;
  d.setTop(a[0]);
  d.setFace(a[1]);
  d.setRight(a[2]);
  d.setLeft(a[3]);
  d.setBack(a[4]);
  d.setBottom(a[5]);
  while (q--) {
    int t, f;
    cin >> t >> f;
    d.arrangeTop(t);
    d.arrangeFace(f);
    cout << d.getRight() << el;
  }
  return 0;
}