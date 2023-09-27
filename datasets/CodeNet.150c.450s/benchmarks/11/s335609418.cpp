#include<cmath>
#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;



int main() {
	int n;
	char e;
	int suji;
	int t[4][13] = {};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> e >> suji;
		switch (e) {
		case 'S':t[0][suji - 1] = 1; break;
		case 'H':t[1][suji - 1] = 1; break;
		case 'C':t[2][suji - 1] = 1; break;
		case 'D':t[3][suji - 1] = 1; break;
		}
	}
	for (int j = 0; j < 4; j++) {

		for (int k = 0; k < 13; k++) {

			if (!t[j][k]) {
				switch (j) {
				case 0:cout << "S "; break;
				case 1:cout << "H "; break;
				case 2:cout << "C "; break;
				case 3:cout << "D "; break;
				}
				cout << k + 1 << endl;
			}
		}
	}
	//cout << endl;

	return 0;
}