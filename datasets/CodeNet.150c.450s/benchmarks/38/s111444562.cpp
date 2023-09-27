#include <iostream>

using namespace std;

int main() {

	int dataNum;
	int hen[1000][3];

	cin >> dataNum;
	for (int i = 0; i < dataNum; i++) {
		cin >> hen[i][0] >> hen[i][1] >> hen[i][2];
	}

	for (int i = 0; i < dataNum; i++) {
		//cout << "for i datanum=" <<dataNum << endl;
		//????????????????????§?????????
		for (int j = 3 - 1; j >0; j--) {
			//cout << "for j" << endl;
			for (int k = 0; k < j; k++) {
				//cout << hen[i][k] << "," << hen[i][k + 1] << endl;
				if (hen[i][k] > hen[i][k + 1]) {
					//cout << "swap" <<endl;
					int dummy = hen[i][k];
					hen[i][k] = hen[i][k + 1];
					hen[i][k + 1] = dummy;
				}
			}
		}

		//??´?§?????????§??????
		if (hen[i][0] * hen[i][0] + hen[i][1] * hen[i][1] == hen[i][2] * hen[i][2]) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO"  << endl;
		}
	}

	return 0;
}