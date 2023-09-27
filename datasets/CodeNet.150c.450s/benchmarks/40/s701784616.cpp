#include<iostream>
#include<string>

using namespace std;

const int MAX_DICE_NUMBER = 5;

void moveNorth(int diceRot[3]) {
	int temp = diceRot[2];
	diceRot[2] = diceRot[1];
	diceRot[1] = MAX_DICE_NUMBER - temp;
}

void moveSouth(int diceRot[3]) {
	int temp = diceRot[1];
	diceRot[1] = diceRot[2];
	diceRot[2] = MAX_DICE_NUMBER - temp;
}

void moveEast(int diceRot[3]) {
	int temp = diceRot[1];
	diceRot[1] = diceRot[0];
	diceRot[0] = MAX_DICE_NUMBER - temp;
}

void moveWest (int diceRot[3]) {
	int temp = diceRot[0];
	diceRot[0] = diceRot[1];
	diceRot[1] = MAX_DICE_NUMBER - temp;
}

int main() {
	int diceValue[6];
	int diceRotation[3] = {3,0,4};


	for (int i = 0; i < 6; i++) {
		cin >> diceValue[i];
	}

	string sequence;
	//cin.sync();
	cin >> sequence;
	//cin.sync();
	//cout << sequence << endl;

	for (int i = 0; i < sequence.length(); i++) {
		switch (sequence[i])
		{
		case 'N':
			moveNorth(diceRotation);
			break;
		case 'S':
			moveSouth(diceRotation);
			break;
		case 'E':
			moveEast(diceRotation);
			break;
		case 'W':
			moveWest(diceRotation);
			break;
		default:
			break;
		}
	}

	cout <<  diceValue[diceRotation[1]]<< endl;

	return 0;
}