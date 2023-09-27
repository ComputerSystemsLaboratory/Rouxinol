#include <iostream>
#include <string>
using namespace std;

int main(){
	string card, swap;
	int cnt, shu;
	while(1){
		cin >> card;
		if(card == "-") break;
		cin >> cnt;
		for(int i = 0; i < cnt; i++){
			cin >> shu;
			swap = card.substr(0, shu);
			card.erase(card.begin(), card.begin() + shu);
			card += swap;
		}
		cout << card << endl;
	}
	return 0;
}
