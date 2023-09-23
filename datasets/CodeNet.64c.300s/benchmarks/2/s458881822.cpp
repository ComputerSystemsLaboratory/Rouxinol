#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main() {
	int m = 0;
	int f = 0;
	int r = 0;
	while (1) {
		cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1)
			break;
		if (m == -1 && f != 0) {
			cout << "F" << endl;
		}
		else if (m != 0 && f == -1) {
			cout << "F" << endl;
		}
		else if (m + f >= 80) {
			cout << "A" << endl;
		}
		else if (m + f < 80 && m + f >= 65) {
			cout << "B" << endl;
		}
		else if (m + f < 65 && m + f >= 50) {
			cout << "C" << endl;
		}
		else if (m + f < 50 && m + f >= 30) {
			if (r >= 50) {
				cout << "C" << endl;
			}
			else
				cout << "D" << endl;
		}
		else if (m + f < 30 && m != -1) {
			cout << "F" << endl;
		}
	}
}
