#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
	int n;
	int set[52] = {};
	cin >> n;
	for (int i = 0; i < n; i++){
		char suit;
		int rank;
		cin >> suit >> rank;
		int suit2Num;
		switch (suit) {
			case 'S':
				suit2Num = 0;
				break;
			case 'H':
				suit2Num = 1;
				break;
			case 'C':
				suit2Num = 2;
				break;
			case 'D':
				suit2Num = 3;
				break;
			default:
				break;
		}
		set[13 * suit2Num + (rank - 1)] = 1;
	}
	char num2Suit[4] = {'S', 'H', 'C', 'D'};
	for (int i = 0; i < 52; i++){
		if (!set[i]){
			char suitAns = num2Suit[i / 13];
			int rankAns = i % 13 + 1;
			cout << suitAns << " " << rankAns << endl;
		}
	}
	return 0;
}

