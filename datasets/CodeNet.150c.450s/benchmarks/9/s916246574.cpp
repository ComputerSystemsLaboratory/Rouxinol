#include <iostream>
#include <string>
using namespace std;

int main()
{
	string deck;
	int m = 0;
	int d = 0;
	int h_sum = 0;
	int h;

	while (true) {
		cin >> deck;

		if (deck == "-")
			break;
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> h;
			h_sum += h;
		}
		d = h_sum % ((int)deck.size());

	
		/*
		cout << "+++" << d << "+++\n";
		cout << "---" << deck.size() << "---\n";
		cout << "***" << h_sum << "***\n";
		*/

		for (int i = 0; i < d; i++) {
			deck.push_back(deck[i]);
		}

		deck.erase(deck.begin() + 0, deck.begin() + d);

		cout << deck << '\n';

		h_sum = 0;
		d = 0;
	}
	return 0;
}
