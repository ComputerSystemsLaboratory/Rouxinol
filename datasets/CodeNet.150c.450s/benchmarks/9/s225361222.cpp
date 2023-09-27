#include <iostream>

using namespace std;

int main(){
	int m, h;

	for(;;){
		string deck;
		cin >> deck;
		if(deck[0] == '-') return 0;

		cin >> m;

		for(int i = 0; i < m; i++){
			cin >> h;
			string bottom = deck.substr(0, h);
			string top = deck.substr(h, deck.size()-h);
			deck = top + bottom;
		}
		cout << deck << endl;
	}

	return 0;
}