#include <iostream>
#include <string>
using namespace std;

class Dice{
public:
  int r[5];
  int bottom, top, north, south, east, west;

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
  void move(char ch){
    if (ch == 'N') roll_x();
    if (ch == 'E') roll_y();
    if (ch == 'S') for (int i = 0; i < 3; i++) roll_x();
    if (ch == 'W') for (int i = 0; i < 3; i++) roll_y();
  }
};

int main(int argc, char const *argv[]) {
  Dice d;
  string orders;

  for (int i = 0; i < 6; i++) cin >> d.r[i];

  cin >> orders;
  for (int i = 0; i < orders.size(); i++) d.move(orders[i]);

  cout << d.r[0] << endl;

  return 0;
}