#include <iostream>
using namespace std;

int main(){
	char pattern;
	int n, val;
	bool card[4][13] = {false};
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> pattern >> val;
		if(pattern == 'S') {
			card[0][val - 1] = true;
		} else if(pattern == 'H') {
			card[1][val - 1] = true;
		} else if(pattern == 'C') {
			card[2][val - 1] = true;
		} else if(pattern == 'D') {
			card[3][val - 1] = true;
		}
	}
	for(int j = 0; j < 4; ++j) {
		for(int i = 0; i < 13; ++i) {
			if((j == 0) && (card[j][i] == false)) {
				cout << "S " << i + 1 << endl;
			} else if((j == 1) && (card[j][i] == false)) {
				cout << "H " << i + 1 << endl;
			} else if((j == 2) && (card[j][i] == false)) {
				cout << "C " << i + 1 << endl;
			} else if((j == 3) && (card[j][i] == false)) {
				cout << "D " << i + 1 << endl;
			}
		}
	}
	return 0;
}