#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main() {
	int dice[6], x;
	string s;
	for (int i = 0; i < 6; i++) {
		cin >> dice[i];
	}
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		x = dice[0];
		if (s[i] == 'N') {
			dice[0] = dice[1];
			dice[1] = dice[5];
			dice[5] = dice[4];
			dice[4] = x;
		}
		if (s[i] == 'S') {
			dice[0] = dice[4];
			dice[4] = dice[5];
			dice[5] = dice[1];
			dice[1] = x;
		}
		if (s[i] == 'W') {
			dice[0] = dice[2];
			dice[2] = dice[5];
			dice[5] = dice[3];
			dice[3] = x;
		}
		if (s[i] == 'E') {
			dice[0] = dice[3];
			dice[3] = dice[5];
			dice[5] = dice[2];
			dice[2] = x;
		}
	}
	cout << dice[0] << endl;

	return 0;
}