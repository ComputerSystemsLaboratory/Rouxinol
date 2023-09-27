#include<iostream>

using namespace std;


class DICE {
	void Roll_E() {
		int tmpTop = Top;

		Top = Left;
		Left = Bottom;
		Bottom = Right;
		Right = tmpTop;
	}

	void Roll_N() {
		int tmpTop = Top;

		Top = Rear;
		Rear = Bottom;
		Bottom = Front;
		Front = tmpTop;
	}

	void Roll_S() {
		int tmpTop = Top;

		Top = Front;
		Front = Bottom;
		Bottom = Rear;
		Rear = tmpTop;
	}

	void Roll_W() {
		int tmpTop = Top;

		Top = Right;
		Right = Bottom;
		Bottom = Left;
		Left = tmpTop;
	}

public:
	int Top;
	int Bottom;
	int Left;
	int Right;
	int Front;
	int Rear;


	void Roll(const char Direction) {
		switch (Direction) {
		case'E':
			Roll_E();
			break;
		case'N':
			Roll_N();
			break;
		case'S':
			Roll_S();
			break;
		case'W':
			Roll_W();
			break;
		}
	}
};

int main() {
	DICE Dice;
	char Input[101];

	cin >> Dice.Top >> Dice.Rear >> Dice.Right >> Dice.Left >> Dice.Front >> Dice.Bottom;
	cin >> Input;

	for (int i = 0; Input[i] != '\0'; i++) {
		Dice.Roll(Input[i]);
	}

	cout << Dice.Top << endl;

	return 0;
}