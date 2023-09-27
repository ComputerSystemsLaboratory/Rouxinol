#include<iostream>
#include<string>
using namespace std;

class Dice {
public:
	Dice(int num[6]) {
		t = num[0];
		b = num[5];
		n = num[4];
		s = num[1];
		w = num[3];
		e = num[2];
	}
	void roll_e() {
		int temp = w;
		w = b;
		b = e;
		e = t;
		t = temp;
	}
	void roll_w() {
		for (int i = 0; i < 3; i++)roll_e();
	}
	void roll_n() {
		int temp = s;
		s = b;
		b = n;
		n = t;
		t = temp;
	}
	void roll_s() {
		for (int i = 0; i < 3; i++)roll_n();
	}
	void spin_left() {
		int temp = n;
		n = e;
		e = s;
		s = w;
		w = temp;
	}
	void setTop(int top) {
		for (int i = 0; i < 4; i++) {
			if (t == top)return;
			roll_e();
		}
		for (int i = 0; i < 3; i++) {
			roll_n();
			if (t == top)return;
		}
	}
	void setNum(int top, int front) {
		setTop(top);
		for (int i = 0; i < 4; i++) {
			if (s == front)return;
			spin_left();
		}
	}
	int t, b;
	int n, s, w, e;
};

int main() {
	int d[6];
	int n;
	int top[24];
	int front[24];

	for (int i = 0; i < 6; i++) {
		cin >> d[i];
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> top[i] >> front[i];
	}

	Dice dice(d);
	for (int i = 0; i < n; i++) {
		dice.setNum(top[i], front[i]);
		cout << dice.e << endl;
	}
	return 0;
}