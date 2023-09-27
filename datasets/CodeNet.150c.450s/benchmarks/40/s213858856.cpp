
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Dice {
	int n;
	int s;
	int e;
	int w;
	int top;
	int bottom;
};

Dice control_dice(Dice d, char c) {
	if (c == 'N') {
		int toptmp = d.top;
		d.top = d.s;
		d.s = d.bottom;
		d.bottom = d.n;
		d.n = toptmp;
	} else if (c == 'S') {
		int toptmp = d.top;
		d.top = d.n;
		d.n = d.bottom;
		d.bottom = d.s;
		d.s = toptmp;
	} else if (c == 'E') {
		int toptmp = d.top;
		d.top = d.w;
		d.w = d.bottom;
		d.bottom = d.e;
		d.e = toptmp;
	} else if (c == 'W') {
		int toptmp = d.top;
		d.top = d.e;
		d.e = d.bottom;
		d.bottom = d.w;
		d.w = toptmp;
	}
	return d;
}

Dice default_dice() {
	Dice d;
	d.n = 5;
	d.s = 2;
	d.e = 3;
	d.w = 4;
	d.top = 1;
	d.bottom = 6;
	return d;
}

int main() {
	vector<int> dice(6);
	for (int i = 0; i < 6; i++) {
		cin >> dice[i];
	}

	Dice d = default_dice();

	string control;
	cin >> control;
	for (int i = 0; i < control.size(); i++) {
		d = control_dice(d, control[i]);
	}

	cout << dice[d.top-1] << endl;
}