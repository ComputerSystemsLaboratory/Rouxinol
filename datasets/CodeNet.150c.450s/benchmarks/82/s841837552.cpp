#include<iostream>

using namespace std;


class DICE {
	enum {
		Top,
		Front,
		Right,
		Left,
		Rear,
		Bottom
	};

public:
	int Num[6];

	void Roll(const char*Directions) {
		for (int i = 0; Directions[i] != '\0'; i++) {
			Roll(Directions[i]);
		}
	}

	void Roll(const char Direction) {
		int tmpTop = Num[Top];

		switch (Direction) {
		case'E':
			Num[Top] = Num[Left];
			Num[Left] = Num[Bottom];
			Num[Bottom] = Num[Right];
			Num[Right] = Num[tmpTop];
			break;
		case'N':
			Num[Top] = Num[Front];
			Num[Front] = Num[Bottom];
			Num[Bottom] = Num[Rear];
			Num[Rear] = tmpTop;
			break;
		case'S':
			Num[Top] = Num[Rear];
			Num[Rear] = Num[Bottom];
			Num[Bottom] = Num[Front];
			Num[Front] = tmpTop;
			break;
		case'W':
			Num[Top] = Num[Right];
			Num[Right] = Num[Bottom];
			Num[Bottom] = Num[Left];
			Num[Left] = tmpTop;
			break;
		}
	}

	int TopFrontToRight(const int TopNum, const int FrontNum) {
		const char Directions[][3] = { "N","N","N","NW","WW","\0" };
		DICE Dice;

		for (int i = 0; i < 6; i++)Dice.Num[i] = Num[i];

		for (int i = 0; i < 6; i++) {
			if (TopNum == Dice.Num[Top]) {
				for (int j = 0; j < 4; j++) {
					if (FrontNum == Dice.Num[Front])
						return Dice.Num[Right];

					int tmpFront = Dice.Num[Front];
					Dice.Num[Front] = Dice.Num[Right];
					Dice.Num[Right] = Dice.Num[Rear];
					Dice.Num[Rear] = Dice.Num[Left];
					Dice.Num[Left] = tmpFront;
				}
			}

			Dice.Roll(Directions[i]);
		}

		return 0;
	}
};

int main() {
	DICE Dice;
	int q;

	for (int i = 0; i < 6; i++) {
		cin >> Dice.Num[i];
	}
	cin >> q;

	for (int i = 0; i < q; i++) {
		int Top, Front;
		
		cin >> Top >> Front;

		cout << Dice.TopFrontToRight(Top, Front) << endl;
	}

	return 0;
}