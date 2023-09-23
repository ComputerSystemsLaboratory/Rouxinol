#include <iostream>

using namespace std;

int main(){
	int n, suit_int;
	char suit;
	bool cards[4][13] = {};
	cin >> n;

	for(int i = 0; i < n; i++){
		int number;
		cin >> suit >> number;
		switch(suit){
		case 'S': suit_int = 0; break;
		case 'H': suit_int = 1; break;
		case 'C': suit_int = 2; break;
		case 'D': suit_int = 3; break;
		}
		cards[suit_int][number-1] = true;
	}

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 13; j++){
			if(cards[i][j] == false){
				switch(i){
				case 0: suit = 'S'; break;
				case 1: suit = 'H'; break;
				case 2: suit = 'C'; break;
				case 3: suit = 'D'; break;
				}
				cout << suit << " " << j + 1 << endl;
			}
		}
	}

	return 0;
}