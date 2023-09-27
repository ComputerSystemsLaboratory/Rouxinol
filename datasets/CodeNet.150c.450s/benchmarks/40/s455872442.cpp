#include <string>
#include <iostream>
using namespace std;

int main() {
	int dice[6];
	for (int i = 0;i != 6;++i) {
		cin >> dice[i];
	}
	string cmd;
	cin >> cmd;
	for (char c : cmd) {
		int temp = dice[0];
		switch (c) {
		case 'S':
			dice[0] = dice[4];
			dice[4] = dice[5];
			dice[5] = dice[1];
			dice[1] = temp;
			break;
		case 'N':
			dice[0] = dice[1];
			dice[1] = dice[5];
			dice[5] = dice[4];
			dice[4] = temp;
			break;
		case 'E':
			dice[0] = dice[3];
			dice[3] = dice[5];
			dice[5] = dice[2];
			dice[2] = temp;
			break;
		default: // 'W'
			dice[0] = dice[2];
			dice[2] = dice[5];
			dice[5] = dice[3];
			dice[3] = temp;
		}
	}
	cout << dice[0] << endl;
}