#include<iostream>
using namespace std;

struct Dice {
	int top;
	int north;
	int east;
	int south;
	int west;
	int bottom;
};

int main() {
	Dice d;
	int tmp;
	char com;
	cin >> d.top >> d.south >> d.east >> d.west >> d.north >> d.bottom;
	cin.get(com);
	while (1) {
		cin.get(com);
		if (com == '\n')break;
		if (com == 'N') {
			tmp = d.top;
			d.top = d.south;
			d.south = d.bottom;
			d.bottom = d.north;
			d.north = tmp;
		} else if (com == 'E') {
			tmp = d.top;
			d.top = d.west;
			d.west = d.bottom;
			d.bottom = d.east;
			d.east = tmp;
		} else if (com == 'S') {
			tmp = d.top;
			d.top = d.north;
			d.north = d.bottom;
			d.bottom = d.south;
			d.south = tmp;
		} else if (com == 'W') {
			tmp = d.top;
			d.top = d.east;
			d.east = d.bottom;
			d.bottom = d.west;
			d.west = tmp;
		}
	}
	cout << d.top << endl;
	return 0;
}