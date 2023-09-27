#include <iostream>
using namespace std;

int main(){
	int n, num, s;
	cin >> n;
	if(n > 52) return -1;
	char suit;
	bool allcards[4][13] = {false};
	//pair<char, int> card[n] = new pair<char, int>[n];
	for(int i = 0; i < n; i++){
		cin >> suit >> num;
		switch(suit){
			case 'S': s = 0; break;
			case 'H': s = 1; break;
			case 'C': s = 2; break;
			case 'D': s = 3; break;
		}
		allcards[s][num - 1] = true;
	}
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 13; j++){
			if(allcards[i][j] == false){
				switch(i){
					case 0: suit = 'S'; break;
					case 1: suit = 'H'; break;
					case 2: suit = 'C'; break;
					case 3: suit = 'D'; break;
				}
				cout << suit << ' ' << j + 1 << endl;
			}
		}
	}
}