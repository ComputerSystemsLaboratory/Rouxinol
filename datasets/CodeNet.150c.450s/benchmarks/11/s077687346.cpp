#include<iostream>
#include <string>

using namespace std;

int main() {
	int n,num;
	int a[100][100] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		string SHCD;
		cin >> SHCD >> num;
		int x;
		if (SHCD == "S") {
			x = 0;
		}
		else if (SHCD == "H") {
			x = 1;
		}
		else if (SHCD == "C") {
			x = 2;
		}
		else if (SHCD == "D") {
			x = 3;
		}
		a[x][num] = 1;

	}
	for (int j = 0; j < 4; j++) {
		for (int k = 1; k < 14; k++) {
			if (!a[j][k]) {
				string shcd;
				if (j == 0) {
					shcd = "S";
				}
				else if (j == 1) {
					shcd = "H";
				}
				else if (j == 2) {
					shcd = "C";
				}
				else if (j == 3) {
					shcd = "D";
				}
				cout << shcd <<" "<< k << endl;
			}
		}
	}
}