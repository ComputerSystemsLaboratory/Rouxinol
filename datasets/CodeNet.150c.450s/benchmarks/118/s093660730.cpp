#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int Y, M, D;
		cin >> Y >> M >> D;
		int resdays = 0;

		for (int y = Y; y < 1000; y++) {
			//cout << y << "??´" << endl;
			if (y % 3 == 0) {
				//cout << "3????????°" << endl;
				for (int m = M; m <= 10; m++) {
					for (int d = D; d <= 20; d++)resdays++;
					D = 1;
				}
			}
			else {
				for (int m = M; m <= 10; m++) {
					if (m % 2 == 0 && m!=1) {
						for (int d = D; d < 20; d++)resdays++;
						D = 1;
					}
					else {
						for (int d = D; d <= 20; d++)resdays++;
						D = 1;
					}
				}
			}

			M = 1; D = 1;
		}
		cout << resdays << endl;
	}
}