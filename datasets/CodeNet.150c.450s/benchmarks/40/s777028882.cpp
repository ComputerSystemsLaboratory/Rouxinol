#include <iostream>
#include <string>
using namespace std;

class Dice {
private:
	int d[6];
public:
	Dice(int d1, int d2, int d3, int d4, int d5, int d6) {
		d[0] = d1;
		d[1] = d2;
		d[2] = d3;
		d[3] = d4;
		d[4] = d5;
		d[5] = d6;
	}

	int get(void) {
		return d[0];
	}

	void move(char a) {
		int nextd[6];
		switch (a) {
		case 'W':
			nextd[0] = d[2];
			nextd[1] = d[1];
			nextd[2] = d[5];
			nextd[3] = d[0];
			nextd[4] = d[4];
			nextd[5] = d[3];
			break;
		case 'S':
			nextd[0] = d[4];
			nextd[1] = d[0];
			nextd[2] = d[2];
			nextd[3] = d[3];
			nextd[4] = d[5];
			nextd[5] = d[1];
			break;
		case 'E':
			nextd[0] = d[3];
			nextd[1] = d[1];
			nextd[2] = d[0];
			nextd[3] = d[5];
			nextd[4] = d[4];
			nextd[5] = d[2];
			break;
		case'N':
			nextd[0] = d[1];
			nextd[1] = d[5];
			nextd[2] = d[2];
			nextd[3] = d[3];
			nextd[4] = d[0];
			nextd[5] = d[4];
			break;
		}
		for (int i = 0;i < 6;i++) {
			d[i] = nextd[i];
		}
	}
};

int main() {
	int a[6];
	string command;
	for (int i = 0;i < 6;i++) cin >> a[i];
	Dice dice(a[0], a[1], a[2], a[3], a[4], a[5]);

	cin >> command;

	for (int i = 0;i < command.size();i++) dice.move(command[i]);
	cout << dice.get() << endl;
}