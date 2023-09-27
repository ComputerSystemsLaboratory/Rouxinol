#include <iostream>
#include <string>
using namespace std;

class Dice{
public:
  int r[6];

  Dice(){}
  void roll(int i, int j, int k, int l){
    int t = r[i];
    r[i] = r[j];
    r[j] = r[k];
    r[k] = r[l];
    r[l] = t;
  }
  void roll_x(){roll(0, 1, 5, 4);} // to N
  void roll_y(){roll(0, 3, 5, 2);} // to E
  void roll_z(){roll(4, 2, 1, 3);}
  void move(char ch){
    if (ch == 'N') roll_x();
    if (ch == 'E') roll_y();
    if (ch == 'S') for (int i = 0; i < 3; i++) roll_x();
    if (ch == 'W') for (int i = 0; i < 3; i++) roll_y();
  }
};

int getRight(Dice d, int top, int face){
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 4; j++) {
      if(d.r[0] == top && d.r[1] == face) return d.r[2];
      d.roll_z();
    }
    if (i % 2 == 0) d.roll_y();
    else d.roll_x();
  }

}

int main(int argc, char const *argv[]) {
  Dice d;
  for (int i = 0; i < 6; i++) cin >> d.r[i];

  int q;
  cin >> q;

  int top, face;
  for (int i = 0; i < q; i++) {
    cin >> top >> face;
    cout << getRight(d, top, face) << endl;
  }

  return 0;
}