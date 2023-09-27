#include <iostream>

using namespace std;

class Dice {
private:
	int number[6];
public:
	void setNumber(int index, int num);
	void move(string d);
	int getTop();
};

void Dice::setNumber(int index, int num) {
	number[index] = num;
}

void Dice::move(string d) {
	for (int i = 0; i < d.size(); i++) {
		int newNumber[6] = {0};
		char c = d[i];
		if (c == 'N') {
			newNumber[0] = number[1];
			newNumber[1] = number[5];
			newNumber[2] = number[2];
			newNumber[3] = number[3];
			newNumber[4] = number[0];
			newNumber[5] = number[4];
		}
		else if (c == 'E') {
			newNumber[0] = number[3];
			newNumber[1] = number[1];
			newNumber[2] = number[0];
			newNumber[3] = number[5];
			newNumber[4] = number[4];
			newNumber[5] = number[2];
		}
		else if (c == 'W') {
			newNumber[0] = number[2];
			newNumber[1] = number[1];
			newNumber[2] = number[5];
			newNumber[3] = number[0];
			newNumber[4] = number[4];
			newNumber[5] = number[3];
		}
		else if (c == 'S') {
			newNumber[0] = number[4];
			newNumber[1] = number[0];
			newNumber[2] = number[2];
			newNumber[3] = number[3];
			newNumber[4] = number[5];
			newNumber[5] = number[1];
		}
		for (int i = 0; i < 6; i++)
			number[i] = newNumber[i];
	}
}

int Dice::getTop() {
	return number[0];
}

int main() {
	Dice dice;
	int n;
	for (int i = 0; i < 6; i++) {
		cin >> n;
		dice.setNumber(i, n);
	}
	string s;
	cin >> s;
	dice.move(s);
	cout << dice.getTop() << endl;
	return 0;
}