#include <iostream>
using namespace std;
class Dice {
private:
  int dice[6];
  //  int tmp;
 public:
  Dice(int a, int b, int c, int d, int e, int f) {
	dice[0] = a;
	dice[1] = b;
	dice[2] = c;
	dice[3] = d;
	dice[4] = e;
	dice[5] = f;
  }
  void move(char ch) {
	if(ch == 'N') {
	  moveN();
	}
	else if(ch == 'E') {
	  moveE();
	}
	else if(ch == 'S') {
	  moveS();
	}
	else {
	  moveW();
	}
  }
  void moveN() {
	swap(dice[0], dice[1]);
	swap(dice[1], dice[5]);
	swap(dice[5], dice[4]);
  }
  void moveS() {
	swap(dice[0], dice[4]);
	swap(dice[4], dice[5]);
	swap(dice[5], dice[1]);
  }
  void moveE() {
	swap(dice[0], dice[3]);
	swap(dice[3], dice[5]);
	swap(dice[5], dice[2]);
  }
  void moveW() {
	swap(dice[0], dice[2]);
	swap(dice[2], dice[5]);
	swap(dice[5], dice[3]);
  }
  int top() {
	return dice[0];
  }
};
/*
void print(Dice d1) {
    for(int i = 0; i < 6; ++i) {
	  cout << "i:" << i << endl;
	  cout << "\tdice:" << d1.dice[i] << endl;
	}
}
*/
int main() {
  char ch;
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  Dice d1(a, b, c, d, e, f);

  while(cin >> ch) {
	d1.move(ch);
	//	print(d1);
  }
  cout << d1.top() << endl;

  return 0;
}