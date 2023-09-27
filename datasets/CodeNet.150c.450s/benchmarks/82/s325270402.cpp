#include<iostream>
using namespace std;
int main() {
	int siz[7],time,pro1,pro2;
	for (int abc = 1; abc < 7; abc++) {
		cin >> siz[abc];
	}
	cin >> time;
	int whele1, whele2;
	for (int abc = 0; abc < time; abc++) {
		cin >> pro1>>pro2;
		for (whele1 = 1; pro1 != siz[whele1]; whele1++);
		for (whele2 = 1; pro2 != siz[whele2]; whele2++);
		switch (whele1) {
		case 1:
			switch (whele2) {
			case 2:
				cout << siz[3] << endl;
				break;
			case 3:
				cout << siz[5] << endl;
				break;
			case 5:
				cout << siz[4] << endl;
				break;
			case 4:
				cout << siz[2] << endl;
				break;
			}
			break;
		case 2:
			switch (whele2) {
			case 3:
				cout << siz[1] << endl;
				break;
			case 1:
				cout << siz[4] << endl;
				break;
			case 4:
				cout << siz[6] << endl;
				break;
			case 6:
				cout << siz[3] << endl;
				break;
			}
			break;
		case 3:
			switch(whele2) {
			case 5:
				cout << siz[1] << endl;
				break;
			case 1:
				cout << siz[2] << endl;
				break;
			case 2:
				cout << siz[6] << endl;
				break;
			case 6:
				cout << siz[5] << endl;
				break;
			}
			break;
		case 4:
			switch (whele2) {
			case 1:
				cout << siz[5] << endl;
				break;
			case 5:
				cout << siz[6] << endl;
				break;
			case 6:
				cout << siz[2] << endl;
				break;
			case 2:
				cout << siz[1] << endl;
				break;
			}
			break;
		case 5:
			switch (whele2) {
			case 1:
				cout << siz[3] << endl;
				break;
			case 3:
				cout << siz[6] << endl;
				break;
			case 6:
				cout << siz[4] << endl;
				break;
			case 4:
				cout << siz[1] << endl;
				break;
			}
			break;
		case 6:
			switch (whele2) {
			case 2:
				cout << siz[4] << endl;
				break;
			case 4:
				cout << siz[5] << endl;
				break;
			case 5:
				cout << siz[3] << endl;
				break;
			case 3:
				cout << siz[2] << endl;
				break;
			}
			break;
		}
	}
	cin >> pro2;
	return 0;
}