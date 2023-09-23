#include<iostream>
#include<vector>

using namespace std;

int main() {

	int table[4][13];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			table[i][j] = 0;
		}
	}

	int n;

	cin >> n;

	char gara;
	int garacode;
	int rank;

	for (int k = 0; k < n; k++) {
		cin >> gara >> rank;

		switch (gara) {
		case 'S':
			garacode = 0;
			break;

		case 'H':
			garacode = 1;
			break;

		case 'C':
			garacode = 2;
			break;

		case 'D':
			garacode = 3;
			break;
		}

		table[garacode][rank - 1] = 1;

	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			if (table[i][j] == 0) {
				switch (i) {
				case 0:
					cout << 'S' << ' ' << j+1 << endl;
					break;

				case 1:
					cout << 'H' << ' ' << j+1 << endl;
					break;

				case 2:
					cout << 'C' << ' ' << j+1 << endl;
					break;

				case 3:
					cout << 'D' << ' ' << j+1 << endl;
					break;
				}


			}
			
		}
	}




	return 0;
}