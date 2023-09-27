#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	bool card[4][13] = { false };
	// 0 S
	// 1 H
	// 2 C
	// 3 D
	
	for (int i = 0; i < n; i++){
		char mark;
		int markN;
		int number;
		cin >> mark >> number;

		if (mark == 'S') markN = 0;
		else if (mark == 'H') markN = 1;
		else if(mark == 'C') markN = 2;
		else if (mark == 'D') markN = 3;
		
		card[markN][number - 1] = true;
	}
	
	char m[4] = { 'S', 'H', 'C', 'D'};
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 13; j++){
			if (card[i][j] == false){
				cout << m[i] << " " << j + 1 << endl;
			}
		}
	}


}