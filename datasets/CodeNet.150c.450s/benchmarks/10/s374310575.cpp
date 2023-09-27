#include <iostream>
using namespace std;

int main() {
	int n[5][4][11] = { {{0}} };
	int a = 0, b = 0, f = 0, r = 0, v = 0;

	cin >> a;
	for (int i = 0;i < a;i++) {
		cin >> b >> f >> r >> v;
		n[b][f][r] += v;
	}

	for (b = 1; b <= 4;b++) {
		for (f = 1;f <= 3;f++) {
			for (r = 1;r <= 10;r++) {
				cout << " " << n[b][f][r];
			}
			cout << endl;
		}
		if(b != 4)
			cout << "####################" << endl;
	}
}