#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int a,b;
	int zellar;

	while (cin >> a >> b) {
		if (a == 0) {
			break;
		}

		if (a < 3) {
			a = a + 12;
			zellar = (2003 + (2003 / 4) + (2003 / 400) - (2003 / 100) + (((13 * a) + 8) / 5) + b) % 7;
		} else {
			zellar = (2004 + (2004 / 4) + (2004 / 400) - (2004 / 100) + (((13 * a) + 8) / 5) + b) % 7;
		}
		switch(zellar) {
		case 0: 
			cout << "Sunday" << endl;
			break;
		case 1: 
			cout << "Monday" << endl;
			break;
		case 2:
			cout << "Tuesday" << endl;
			break;
		case 3:
			cout << "Wednesday" << endl;
			break;
		case 4:
			cout << "Thursday" << endl;
			break;
		case 5:
			cout << "Friday" << endl;
			break;
		case 6:
			cout << "Saturday" << endl;
			break;
		}

	}

	return 0;
}