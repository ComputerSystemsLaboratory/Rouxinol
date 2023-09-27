#include <bits/stdc++.h> 

#define DICE_SIZE 6

using namespace std;

class Dice {
	private:
		int number[DICE_SIZE];
		int work_space[DICE_SIZE];

		void reset_number(int, int, int, int, int, int);

	public:
		Dice(int *);
		void turn(char);
		int peek_top();
};

Dice::Dice(int *number) {
	for (int i = 0; i < DICE_SIZE; i++) {
		this->number[i] = number[i];
	}
}

void Dice::turn(char direction) {
	for (int i = 0; i < DICE_SIZE; i++) work_space[i] = number[i];

	switch (direction) {
		case 'N':
			reset_number(work_space[1], work_space[5], work_space[2], work_space[3], work_space[0], work_space[4]);
			break;			
		case 'E':
			reset_number(work_space[3], work_space[1], work_space[0], work_space[5], work_space[4], work_space[2]);
			break;
		case 'S':
			reset_number(work_space[4], work_space[0], work_space[2], work_space[3], work_space[5], work_space[1]);
			break;
		case 'W':
			reset_number(work_space[2], work_space[1], work_space[5], work_space[0], work_space[4], work_space[3]);
			break;
	}
}

int Dice::peek_top() {
	return number[0];
}

void Dice::reset_number(int num0, int num1, int num2, int num3, int num4, int num5) {
	number[0] = num0;
	number[1] = num1;
	number[2] = num2;
	number[3] = num3;
	number[4] = num4;
	number[5] = num5;
}

int main() {
	int number[DICE_SIZE];
	for (int i = 0; i < DICE_SIZE; i++) cin >> number[i];

	Dice *dice = new Dice(number);

	string query;
	cin >> query;

	for (int i = 0; i < query.size(); i++) dice->turn(query[i]);

	cout << dice->peek_top() << endl;

	return 0;
}

