#include <iostream>
using namespace std;

int main(void){
	int n, num;
	bool card[4][13] = {};
	char pattern;

	cin >> n;

	for (int i = 0; i<n; i++){
		cin >> pattern >> num;

		switch (pattern){
		case 'S':card[0][num - 1] = true; break;
		case 'H':card[1][num - 1] = true; break;
		case 'C':card[2][num - 1] = true; break;
		case 'D':card[3][num - 1] = true; break;
		}
	}

	for (int i = 0; i < 4; i++){
		for (int  j = 0; j < 13; j++){
			if (!card[i][j]){
				switch (i){
				case 0:cout << "S " << j + 1 << "\n"; break;
				case 1:cout << "H " << j + 1 << "\n"; break;
				case 2:cout << "C " << j + 1 << "\n"; break;
				case 3:cout << "D " << j + 1 << "\n"; break;
				}
			}
		}
	}

	return 0;
}