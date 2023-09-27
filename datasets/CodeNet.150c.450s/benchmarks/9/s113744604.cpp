#include <iostream>
#include <string>

using namespace std;

int main(){
	string card, card1;
	int m, h;
	
	while(1){
		int i = 0;
		cin >> card >> m;
		if(card == "-") break;
		
		while(i < m){
			cin >> h;
			i++;
			card1 = card.substr(0, h);
			card.erase(0, h);
			card += card1;
		}
		cout << card << endl;
	}
	
	return 0;
}