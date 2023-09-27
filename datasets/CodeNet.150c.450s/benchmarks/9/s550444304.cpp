#include <iostream>
#include <string>
using namespace std;

int main(){
	string card, s;
	int m, h, i;
	cin >> card;
	while(card != "-"){
		cin >> m;
		for(int i = 1; i <= m; i++){
			cin >> h;
			s.assign(card, 0, h);
			card.erase(0, h);
			card += s;
		}
		cout << card << endl;
		cin >> card;
	}

	return 0;
}