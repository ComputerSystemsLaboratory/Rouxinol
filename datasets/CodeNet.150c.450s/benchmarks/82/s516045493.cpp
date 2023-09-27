#include <bits/stdc++.h> 

#define DICE_SIZE 6

#define TOP    0
#define FRONT  1
#define RIGHT  2
#define LEFT   3
#define BACK   4
#define BOTTOM 5

using namespace std;

class Dice {
	private:
		int number[DICE_SIZE];
		int work_space[DICE_SIZE];

		void reset_number(int, int, int, int, int, int);

	public:
		Dice(int *);
		void turn(char);
		void turn_horizon();
		int peek_top();
		int peek_front();
		int peek_right();
		int get_position(int);
};

Dice::Dice(int *number) {
	for (int i = 0; i < DICE_SIZE; i++) this->number[i] = number[i];
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

void Dice::turn_horizon() {
	for (int i = 0; i < DICE_SIZE; i++) work_space[i] = number[i];

	reset_number(work_space[0], work_space[3], work_space[1], work_space[4], work_space[2], work_space[5]);
}

int Dice::peek_top() {
	return number[TOP];
}

int Dice::peek_front() {
	return number[FRONT];
}

int Dice::peek_right() {
	return number[RIGHT];
}

int Dice::get_position(int num) {
	for (int i = 0; i < DICE_SIZE; i++) {
		if (number[i] == num) return i;
	}
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

	int n;
	cin >> n;

	int top, front;
	for (int i = 0; i < n; i++) {
		cin >> top >> front;
	
		int current_position = dice->get_position(top);
		
		if (current_position == LEFT || current_position == RIGHT) {
			while (dice->peek_top() != top) {
				dice->turn('W');
			}
		} else {
			while (dice->peek_top() != top) {
				dice->turn('N');
			}
		}

		while (dice->peek_front() != front) {
			dice->turn_horizon();
		}

		cout << dice->peek_right() << endl;
	}

	return 0;
}

