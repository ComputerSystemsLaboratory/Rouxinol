#include<iostream>

using namespace std;

int main(void) {
	double x[3] = { 0,0,0 };
	double y[3] = { 0,0,0 };
	double xp = 0, yp = 0;
	int flag[3] = { 0,0,0 };

	while (cin >> x[0]>> y[0]>> x[1]>> y[1]>> x[2]>> y[2]>> xp>> yp) {
		for (int i = 0; i < 3; i++) {
			int temp1 = (i + 1) % 3;
			int temp2 = (i + 2) % 3;
			double checkI = (y[temp1] - y[i]) * (x[temp2] - x[i]) - (x[temp1] - x[i]) * (y[temp2] - y[i]);
			double checkP = (y[temp1] - y[i]) * (xp - x[i]) - (x[temp1] - x[i]) * (yp - y[i]);

			if (checkI * checkP > 0) {
				flag[i] = 1;
			}
		}
		if (flag[0] == 1 && flag[1] == 1 && flag[2] == 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		flag[0] = 0;
		flag[1] = 0;
		flag[2] = 0;
	}
	

	return 0;
}