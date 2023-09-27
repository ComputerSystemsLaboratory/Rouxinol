
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Dice {
public:
	int n[6];

	Dice() {
		for (int i = 0;i<6;i++) {
			cin >> n[i];
		}
	}
	int N() {
		int x;
		x = n[0];
		n[0] = n[1];
		n[1] = n[5];
		n[5] = n[4];
		n[4] = x;
		return n[0];
	}
	int E() {
		int x;
		x = n[0];
		n[0] = n[3];
		n[3] = n[5];
		n[5] = n[2];
		n[2] = x;
		return n[0];
	}
	int W() {
		int x;
		x = n[0];
		n[0] = n[2];
		n[2] = n[5];
		n[5] = n[3];
		n[3] = x;
		return n[0];
	}
	int S() {
		int x;
		x = n[0];
		n[0] = n[4];
		n[4] = n[5];
		n[5] = n[1];
		n[1] = x;
		return n[0];
	}
};

int main() {

	Dice d;
	int n, a, b;
	string m;
	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> a >> b;
		while (a != d.n[0] || b != d.n[1]) {
			if (rand() % 2 == 1) {
				d.N();
			}
			else {
				d.E();
			}
		}
		cout << d.n[2] << endl;
	}

	return 0;
}
