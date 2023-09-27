#include <iostream>

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
	int i, j, k, l, q, x, y, w;
	Dice dice;
	for (i = 0; i < 6; i++)
		cin >> dice.face[i];
	cin >> q;
	for (w = 0; w < q; w++){
		cin >> x >> y;
		for (i = 0; i < 6; i++){
			if (i == 4) dice.North();
			else if (i == 5) {
				dice.South();
				dice.South();
			}
			else dice.East();
			for (j = 0; j < 4; j++){
				k = dice.face[1];
				dice.face[1] = dice.face[2];
				dice.face[2] = dice.face[4];
				dice.face[4] = dice.face[3];
				dice.face[3] = k;
				if (dice.face[0] == x&&dice.face[1] == y)
					cout << dice.face[2] << endl;
			}
		}
	}
}