#include<iostream>
#include<vector>

using namespace std;

int main() {

	int table[3][10][4];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 4; k++) {

				table[i][j][k] = 0;
			}
		}
	}

	int n;

	cin >> n;

	int b, f, r, v;

	for (int m = 0; m < n; m++) {
		cin >> b >> f >> r >> v;

		table[f-1][r-1][b-1] += v;

	}
	
	for (int k = 0; k < 3; k++) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 10; j++) {
				cout <<" "<< table[i][j][k];
			}
			cout << endl;
			}

		cout << "####################" << endl;
		}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			cout << " " << table[i][j][3] ;
		}
		cout << endl;
	}

	return 0;
}