#include <iostream>
#include <cmath>
#include <iomanip>

#define NUM_S 6

class Dice {
public:
	Dice(const int n[NUM_S]);

	int roll(char);
	int rollF();
	int rollR();
	int rollL();
	int rollB();
	int rollCwise();

	int getTop();
	int getF();
	int getR();
	int getL();
	int getB();
	int getBottom();

	void show();

private:
	int top, front, right, left, back, bottom;
};
using namespace std;


int main(void){
	int surface[NUM_S];
	int q, top, front;
	
	for (int i = 0; i < NUM_S; i++) {
		cin >> surface[i];
	}

	Dice dice(surface);

	cin >> q;

	for (int i = 0; i < q; i++) {
		cin >> top >> front;
		if (dice.getR() == top || dice.getL() == top) {
			dice.rollR();
		}
		while (dice.rollF() != top) {
		}
		while (dice.getF() != front) {
			dice.rollCwise();
		}
		cout << dice.getR() << "\n";
	}

	return 0;
}


Dice::Dice(const int n[NUM_S]) {
	top = n[0];
	front = n[1];
	right = n[2];
	left = n[3];
	back = n[4];
	bottom = n[5];
}

int Dice::roll(char c) {
	if (c == 'S') {
		return rollF();
	}
	else if (c == 'E') {
		return rollR();
	}
	else if (c == 'W') {
		return rollL();
	}
	else if (c == 'N') {
		return rollB();
	}
	else {
		return 0;
	}
}

int Dice::rollF() {
	int buf = top;
	top = back;
	back = bottom;
	bottom = front;
	front = buf;
	return top;
}

int Dice::rollR() {
	int buf = top;
	top = left;
	left = bottom;
	bottom = right;
	right = buf;
	return top;
}

int Dice::rollL() {
	int buf = top;
	top = right;
	right = bottom;
	bottom = left;
	left = buf;
	return top;
}

int Dice::rollB() {
	int buf = top;
	top = front;
	front = bottom;
	bottom = back;
	back = buf;
	return top;
}

int Dice::rollCwise() {
	int buf = left;
	left = front;
	front = right;
	right = back;
	back = buf;
	return top;
}

int Dice::getTop() {
	return top;
}

int Dice::getF() {
	return front;
}

int Dice::getR() {
	return right;
}


int Dice::getL() {
	return left;
}


int Dice::getB() {
	return back;
}


int Dice::getBottom() {
	return bottom;
}


void Dice::show() {
	cout << top << "\n";
}