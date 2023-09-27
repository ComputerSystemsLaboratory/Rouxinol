#include <iostream>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	
	int n;
	bool cards[4][13] = {};
	char suitset[] = {'S', 'H', 'C', 'D'};
	
	cin >> n;
	for(int i = 0; i < n; i++){
		char suit;
		int num;
		cin >> suit >> num;
		switch(suit){
			case 'S':
				suit = 0;
				break;
			case 'H':
				suit = 1;
				break;
			case 'C':
				suit = 2;
				break;
			case 'D':
				suit = 3;
		}
		cards[suit][num - 1] = true;
	}
	
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 13; j++){
			if(!cards[i][j]){
				cout << suitset[i] << " " << (j + 1) << endl;
			}
		}
	}
	
	return 0;
}