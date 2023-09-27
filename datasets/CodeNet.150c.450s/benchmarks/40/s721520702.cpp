#include <iostream>
#include <string>

using namespace std;

class Dice {
public:
	int num[6];

	void Move(const char &dir) {
		int i = num[0];
		switch (dir){
		case 'N':
			num[0] = num[1];
			num[1] = num[5];
			num[5] = num[4];
			num[4] = i;
			break;
		case 'S':
			num[0] = num[4];
			num[4] = num[5];
			num[5] = num[1];
			num[1] = i;
			break;
		case 'E':
			num[0] = num[3];
			num[3] = num[5];
			num[5] = num[2];
			num[2] = i;
			break;
		case 'W':
			num[0] = num[2];
			num[2] = num[5];
			num[5] = num[3];
			num[3] = i;
			break;
		default:
			break;
		}
	}
};

int main()
{
	Dice dice;
	string dir;

	for (int i = 0; i < 6; i++) {
		cin >> dice.num[i];
	}

	cin >> dir;
	for (unsigned int i = 0; i < dir.length(); i++) {
		dice.Move(dir[i]);
	}

	cout << dice.num[0] << endl;

	return 0;
}