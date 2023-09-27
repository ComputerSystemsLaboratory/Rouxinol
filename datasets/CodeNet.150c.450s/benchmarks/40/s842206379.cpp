#include <iostream>
#include <cstring>
using namespace std;

class Dice {

public:

  int a1, a2, a3, a4, a5, a6;

  string D;

  Dice(int x) {

    a1 = a2 = a3 = a4 = a5 = a6 = x;

  }

  void rotateFront() {

    int newa1 = a5;
    
    a5 = a6;

    a6 = a2;

    a2 = a1;

    a1 = newa1;

  }

  void rotateRight() {

    int newa1 = a3;

    a3 = a6;

    a6 = a4;

    a4 = a1;

    a1 = newa1;

  }

};

int main(void) {

  Dice d1(0);

  int i;

  cin >> d1.a1 >> d1.a2 >> d1.a3 >> d1.a4 >> d1.a5 >> d1.a6;

  cin >> d1.D;

  for(i = 0; i < d1.D.size(); i++) {

    if(d1.D[i] == 'S') {

      d1.rotateFront();

    } else if (d1.D[i] == 'N') {

      d1.rotateFront();
      d1.rotateFront();
      d1.rotateFront();

    } else if (d1.D[i] == 'W') {

      d1.rotateRight();

    } else if (d1.D[i] == 'E') {

      d1.rotateRight();
      d1.rotateRight();
      d1.rotateRight();

    }

  }

  cout << d1.a1 << endl;

  return 0;

}