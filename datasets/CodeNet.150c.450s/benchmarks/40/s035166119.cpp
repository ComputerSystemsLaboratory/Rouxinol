#include<iostream>
#include<string>

using namespace std;

enum eRoll{
	W,
	S,
	N,
	E
};

class Dice {
private:
	int _dice[6];
public:
	void roll(eRoll er) {
		int _diceinfo[6];
		for (int i = 0; i < 6; ++i) {
			_diceinfo[i] = _dice[i];
		}
		switch (er) {
		case W:
			_dice[0] = _diceinfo[2];
			_dice[1] = _diceinfo[1];
			_dice[2] = _diceinfo[5];
			_dice[3] = _diceinfo[0];
			_dice[4] = _diceinfo[4];
			_dice[5] = _diceinfo[3];
			break;
		case S:
			_dice[0] = _diceinfo[4];
			_dice[1] = _diceinfo[0];
			_dice[2] = _diceinfo[2];
			_dice[3] = _diceinfo[3];
			_dice[4] = _diceinfo[5];
			_dice[5] = _diceinfo[1];
			break;
		case N:
			_dice[0] = _diceinfo[1];
			_dice[1] = _diceinfo[5];
			_dice[2] = _diceinfo[2];
			_dice[3] = _diceinfo[3];
			_dice[4] = _diceinfo[0];
			_dice[5] = _diceinfo[4];
			break;
		case E:
			_dice[0] = _diceinfo[3];
			_dice[1] = _diceinfo[1];
			_dice[2] = _diceinfo[0];
			_dice[3] = _diceinfo[5];
			_dice[4] = _diceinfo[4];
			_dice[5] = _diceinfo[2];
			break;
		}
	}

	int getTopNum() {
		return _dice[0];
	}

	void setNum() {
		for (int i = 0; i < 6; ++i) {
			cin >> _dice[i];
		}
	}
};

int main() {
	Dice dice;

	dice.setNum();

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'S') {
			dice.roll(eRoll::S);
		}
		else if (s[i] == 'W') {
			dice.roll(eRoll::W);
		}
		else if (s[i] == 'E') {
			dice.roll(eRoll::E);
		}
		else if (s[i] == 'N') {
			dice.roll(eRoll::N);
		}
	}

	cout << dice.getTopNum() << endl;


	return 0;
}

