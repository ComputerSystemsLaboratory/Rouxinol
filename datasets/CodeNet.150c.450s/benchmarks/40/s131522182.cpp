#include <iostream>
#include <string>
using namespace std;

int main() {
	int dice[6];
	for (int i = 0; i < 6; ++i) {
		cin >> dice[i];
	}
	
	string dir;
	cin >> dir;
	for (int j = 0; j < dir.size(); ++j) {
		if (dir[j] == 'E') {
			int a = dice[0];
			dice[0] = dice[3];
			dice[3] = dice[5];
			dice[5] = dice[2];
			dice[2] = a;
		}
		else if (dir[j] == 'N') {
			int b = dice[0];
			dice[0] = dice[1];
			dice[1] = dice[5];
			dice[5] = dice[4];
			dice[4] = b;
		}
		else if (dir[j] == 'S') {
			int c = dice[0];
			dice[0] = dice[4];
			dice[4] = dice[5];
			dice[5] = dice[1];
			dice[1] = c;
		}
		else if (dir[j] == 'W') {
			int d = dice[0];
			dice[0] = dice[2];
			dice[2] = dice[5];
			dice[5] = dice[3];
			dice[3] = d;

		}
	}

	cout << dice[0] << endl;
}

