#include <iostream>
#include <string>

using namespace std;

class Dice {
public:
	int top, face[6];
	void East() {
		top = face[0];
		face[0] = face[3];
		face[3] = face[5];
		face[5] = face[2];
		face[2] = top;
	}
	void West() {
		top = face[0];
		face[0] = face[2];
		face[2] = face[5];
		face[5] = face[3];
		face[3] = top;
	}
	void North() {
		top = face[0];
		face[0] = face[1];
		face[1] = face[5];
		face[5] = face[4];
		face[4] = top;
	}
	void South() {
		top = face[0];
		face[0] = face[4];
		face[4] = face[5];
		face[5] = face[1];
		face[1] = top;
	}
};

int main() {
	int i;
	string o;
	Dice dice;
	for (i = 0; i<6; i++)
		cin >> dice.face[i];
	cin >> o;
	for (i = 0; i < o.length();i++){
		switch (o[i]) {
		case 'E':
			dice.East();
			break;
		case 'W':
			dice.West();
			break;
		case 'N':
			dice.North();
			break;
		case 'S':
			dice.South();
			break;
		}
	}
	cout << dice.face[0] << endl;
}