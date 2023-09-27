#include <iostream>
using namespace std;
/*
  1
4 2 3 5
  6
*/
class Dice {
private:
  int s[6];
public:
  Dice();
  Dice(int t[6]);
  int get(int pos);
  void set(int pos, int x);
  void move(char dir);
};

Dice::Dice() {
  for (int i = 0; i < 6; i++) {
    s[i] = 0;
  }
}

Dice::Dice(int t[6]) {
  for (int i = 0; i < 6; i++) {
    s[i] = t[i];
  }
}

int Dice::get(int pos) {
  return s[pos];
}

void Dice::set(int pos, int x) {
  s[pos] = x;
}

void Dice::move(char dir) {
  int t;
  switch (dir) {
    case 'N': {
      t = s[0];
      s[0] = s[1];
      s[1] = s[5];
      s[5] = s[4];
      s[4] = t;
      break;
    }
    case 'E': {
      t = s[3];
      s[3] = s[5];
      s[5] = s[2];
      s[2] = s[0];
      s[0] = t;
      break;
    }
    case 'W': {
      t = s[0];
      s[0] = s[2];
      s[2] = s[5];
      s[5] = s[3];
      s[3] = t;
      break;
    }
    case 'S': {
      t = s[4];
      s[4] = s[5];
      s[5] = s[1];
      s[1] = s[0];
      s[0] = t;
      break;
    }
  }
}

int main() {
  int t[6];
  char c;
  Dice *d;

  for (int i = 0; i < 6; i++) {
    cin >> t[i];
  }
  d = new Dice(t);

  while (cin >> c) {
    d->move(c);
  }

  cout << d->get(0) << endl;

  return 0;
}