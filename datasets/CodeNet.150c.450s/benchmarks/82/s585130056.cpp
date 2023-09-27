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

	void setDice(int forward, int top) {
		if (_dice[1] != forward) {
			bool work = true;
			while (work) {
				for (int i = 0; i < 4; ++i) {
					roll(eRoll::S);
					if (_dice[1] == forward) {
						work = false;
						break;
					}
				}
				roll(eRoll::W);
			}
		}

		if (_dice[0] != top) {
			while (true) {
				roll(eRoll::W);
				if (getTopNum() == top) {
					break;
				}
			}
		}
	}

	int getTopNum() {
		return _dice[0];
	}

	int getRSideNum() {
		return _dice[2];
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

	int n;
	int a[2];

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> a[0] >> a[1];

		dice.setDice(a[1], a[0]);

		cout << dice.getRSideNum() << endl;

	}


	return 0;
}

