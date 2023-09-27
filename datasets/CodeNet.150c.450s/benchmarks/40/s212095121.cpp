#include <iostream>
#include <cmath>
#include <iomanip>

#define NUM_S 6

class Dice {
public:
	Dice(const int n[NUM_S]);
	int roll(char);
	void show();

private:
	int top, south, east, west, north, bottom;
};
using namespace std;


int main(void){
	int surface[NUM_S];
	char ch;
	
	for (int i = 0; i < NUM_S; i++) {
		cin >> surface[i];
	}

	Dice dice(surface);
	while (cin >> ch) {
		dice.roll(ch);
	}
	dice.show();

	return 0;
}


Dice::Dice(const int n[NUM_S]) {
	top = n[0];
	south = n[1];
	east = n[2];
	west = n[3];
	north = n[4];
	bottom = n[5];
}

int Dice::roll(char c) {
	int buf;
	if (c == 'S') {
		buf = top;
		top = north;
		north = bottom;
		bottom = south;
		south = buf;
		return top;
	}
	else if (c == 'E') {
		buf = top;
		top = west;
		west = bottom;
		bottom = east;
		east = buf;
		return top;
	}
	else if (c == 'W') {
		buf = top;
		top = east;
		east = bottom;
		bottom = west;
		west = buf;
		return top;
	}
	else if (c == 'N') {
		buf = top;
		top = south;
		south = bottom;
		bottom = north;
		north = buf;
		return top;
	}
}

void Dice::show() {
	cout << top << "\n";
}