#include <iostream>
using namespace std;

void show_ret(int cards[], char suit) {
	int i;
	for (i = 1; i < 14; i++) {
		if (cards[i] == 0) cout << suit << " " << i << endl;
	}
}

int main() {
	int spades[14] = {0};
	int hearts[14] = {0};
	int clubs[14] = {0};
	int diamonds[14] = {0};
	int n, num = 0;
	char suit;
	int i;

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> suit >> num;
		switch (suit) {
			case 'S':
				spades[num] = 1;
				break;
			case 'H':
				hearts[num] = 1;
				break;
			case 'C':
				clubs[num] = 1;
				break;
			case 'D':
				diamonds[num] = 1;
				break;
			default:
				break;
		}
	}
	show_ret(spades, 'S');
	show_ret(hearts, 'H');
	show_ret(clubs, 'C');
	show_ret(diamonds, 'D');
	return 0;
}