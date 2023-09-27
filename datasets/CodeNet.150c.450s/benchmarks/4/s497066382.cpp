#include <iostream>
using namespace std;

int main()
{
	int test[3];
	int sum = 0;
	int i;

	while (1) {
		for (i = 0; i < 3; i++) {
			cin >> test[i];
		}

		for (i = 0; i < 2; i++) {
			if (test[i] != -1) {
				sum += test[i];
			}
		}

		if (test[0] == -1 && test[1] == -1 && test[2] == -1) {
			break;
		}

		if ((test[0] == -1 || test[1] == -1) || (sum < 30)) {
			cout << "F" << endl;
		} else if (sum < 50) {
			if (test[2] >= 50) {
				cout << "C" << endl;
			} else {
				cout << "D" << endl;
			}
		} else if (sum < 65) {
			cout << "C" << endl;
		} else if (sum < 80) {
			cout << "B" << endl;
		} else {
			cout << "A" << endl;
		}
		sum = 0;
	}

	return 0;
}