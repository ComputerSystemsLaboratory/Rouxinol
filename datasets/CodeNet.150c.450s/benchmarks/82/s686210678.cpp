#include <iostream>
#include <cstring>
using namespace std;

class Dice {
public:

  int a1, a2, a3, a4, a5, a6, q1, q2;

  Dice(int x) {

    a1 = a2 = a3 = a4 = a5 = a6 = q1 = q2 = x;

  }

  void rotateFront() {
    int newa1 = a5;
    a5 = a6;
    a6 = a2;
    a2 = a1;
    a1 = newa1;

  }

  void rotateLeft() {
    int newa1 = a3;
    a3 = a6;
    a6 = a4;
    a4 = a1;
    a1 = newa1;

  }

  void rotateSpin() {

    int newa2 = a3;
    a3 = a5;
    a5 = a4;
    a4 = a2;
    a2 = newa2;

  }

};

int main(void) {

  Dice d1(0);
  int i , Q;

  cin >> d1.a1 >> d1.a2 >> d1.a3 >> d1.a4 >> d1.a5 >> d1.a6;
  cin >> Q;

  for(i = 0; i < Q; i++) {

    cin >> d1.q1 >> d1.q2;

      if(d1.a3 == d1.q1) {

	d1.rotateLeft();

      } else if(d1.a4 == d1.q1) {

	d1.rotateLeft();
	d1.rotateLeft();
	d1.rotateLeft();

      } else {

	while(1) {

	  if(d1.a1 == d1.q1) break;

	  d1.rotateFront();

	}

      }

    while(1) {

      if(d1.a2 == d1.q2) break;

      d1.rotateSpin();

    }


    cout << d1.a3 << endl;

  }

  return 0;

}