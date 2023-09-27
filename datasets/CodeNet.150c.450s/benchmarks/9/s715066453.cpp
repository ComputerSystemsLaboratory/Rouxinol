#include<iostream>
#include<string>
using namespace std;

int main() {
	string cards, stock_cards1, stock_cards2;
	int h, m;
	while (1) {
		cin >> cards;
		if (cards == "-") break;
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> h;
			stock_cards1 = cards.substr(0, h);
			stock_cards2 = cards.substr(h);
			cards = stock_cards2 + stock_cards1;
		}
		cout << cards << "\n";
	}
	return 0;
}