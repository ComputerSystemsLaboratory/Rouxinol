#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string card, card_next;
	int m;
	int h;

	while(1) {
		getline(cin, card);
		if(card == "-") break;
		scanf("%d", &m);
		int i = 0;
		char nl;
		for(i = 0; i < m; i++) {
			scanf("%d%c", &h, &nl);
			card_next = card.substr(h, card.size()) + card.substr(0, h);
			card = card_next;
		}
		cout << card << endl;
	}
		
	return 0;
}