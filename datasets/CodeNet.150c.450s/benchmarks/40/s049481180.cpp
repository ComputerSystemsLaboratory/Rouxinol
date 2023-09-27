#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void rotate_s(int (*dice)[4]){
	swap(dice[0][1], dice[1][1]);
	swap(dice[0][1], dice[2][1]);
	swap(dice[0][1], dice[1][3]);
}

void rotate_n (int (*dice)[4]){
	swap(dice[0][1], dice[1][1]);
	swap(dice[1][1], dice[2][1]);
	swap(dice[2][1], dice[1][3]);
}

void rotate_e (int (*dice)[4]){
	swap(dice[0][1], dice[1][0]);
	swap(dice[1][2], dice[2][1]);
	swap(dice[1][0], dice[1][2]);
}

void rotate_w (int (*dice)[4]){
	swap(dice[0][1], dice[1][2]);
	swap(dice[1][0], dice[2][1]);
	swap(dice[1][0], dice[1][2]);
}


int main() {
	int  face[6];
	int dice[3][4];
	string command;

	cin >> dice[0][1] >> dice[1][1] >> dice[1][2] >> dice[1][0] >> dice[1][3] >> dice[2][1];
	cin >> command;

	for(int i = 0; i < command.size(); i++){
		switch (command[i])
		{
		case 'E':
			rotate_e(dice);
			break;
		case 'W':
			rotate_w(dice);
			break;
		case 'N':
			rotate_n(dice);
			break;
		case 'S':
			rotate_s(dice);
			break;
		default:
			break;
		}
	}

	cout << dice[0][1] << endl;


	return 0;
}
