#include <iostream>
using namespace std;

int changeNum(char c){
	switch (c){
	case 'S':
		return 0;
	case 'H':
		return 1;
	case 'C':
		return 2;
	case 'D':
		return 3;
	}
}

int main(void){
	int n, suit, num;
	bool card[4][13];
	cin >> n;

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 13; j++){
			card[i][j] = false;
		}
	}

	char c;
	for (int i = 0; i < n; i++){
		cin >> c >> num;
		card[changeNum(c)][num-1] = true;
	}

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 13; j++){
			if (!card[i][j]){
				switch (i){
				case 0:
					cout << "S " << j+1;
					break;
				case 1:
					cout << "H " << j+1;
					break;
				case 2:
					cout << "C " << j+1;
					break;
				case 3:
					cout << "D " << j+1;
				}
				cout << endl;
			}
		}
	}

	return 0;
}