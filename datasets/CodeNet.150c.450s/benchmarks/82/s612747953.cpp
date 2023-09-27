#include <iostream>
using namespace std;
class Dice {
private:
  int dice[6];
  int tmp;
 public:
  Dice(int a, int b, int c, int d, int e, int f) {
	dice[0] = a;
	dice[1] = b;
	dice[2] = c;
	dice[3] = d;
	dice[4] = e;
	dice[5] = f;
  }
  void roll(char ch) {
	if(ch == 'N') {
	  rollN();
	}
	else if(ch == 'E') {
	  rollE();
	}
	else if(ch == 'S') {
	  rollS();
	}
	else {
	  rollW();
	}
  }
  void rollN() {
	swap(dice[0], dice[1]);
	swap(dice[1], dice[5]);
	swap(dice[5], dice[4]);
  }
  void rollS() {
	swap(dice[0], dice[4]);
	swap(dice[4], dice[5]);
	swap(dice[5], dice[1]);
  }
  void rollE() {
	swap(dice[0], dice[3]);
	swap(dice[3], dice[5]);
	swap(dice[5], dice[2]);
  }
  void rollW() {
	swap(dice[0], dice[2]);
	swap(dice[2], dice[5]);
	swap(dice[5], dice[3]);
  }
  void spinL() {
	swap(dice[1], dice[2]);
	swap(dice[2], dice[4]);
	swap(dice[4], dice[3]);
  }
  int top() {
	return dice[0];
  }
  int front() {
	return dice[1];
  }
  int right() {
	return dice[2];
  }
};
void solve(Dice d1, int top, int front) {
	for(int i = 0; i < 4; ++i) {
	  if(d1.top() == top) break;
	  d1.rollE();
	}
	for(int i = 0; i < 4; ++i) {
	  if(d1.top() == top) break;
	  d1.rollN();
	}
	for(int i = 0; i < 4; ++i) {
	  if(d1.front() == front) break;
	  d1.spinL();
	}
	cout <<  d1.right() << endl;
}
int main() {
  int a, b, c, d, e, f;
  int q;
  int top, front;
  
  cin >> a >> b >> c >> d >> e >> f;
  cin >> q;
  for(int i = 0; i < q; ++i) {
	Dice d1(a, b, c, d, e, f);
	cin >> top >> front;
	solve(d1, top, front);
  }
  return 0;
}