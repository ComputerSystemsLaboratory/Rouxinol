#include <iostream>
#include <string>

using namespace std;

int main() {
	while (1) {
		string card;
		int h[100] = { 0 };
		int m;
		
		cin >> card;

		if (card == "-")
			break;

		cin >> m;

		for (int i = 0; i < m; i++)
		{
			cin >> h[i];
			string word(card, 0, h[i]);
			card += word;
			card.erase(0, h[i]);
		}

		cout << card << endl;
	}
}