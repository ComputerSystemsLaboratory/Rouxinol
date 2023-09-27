#include <iostream>
#include <stdio.h>

using namespace std;

bool cards[52];

void addCard(char c, int i) {
	int n;
	if (c == 'S')
		n = 0;
	else if (c == 'H')
		n = 13;
	else if (c == 'C')
		n = 26;
	else if (c == 'D')
		n = 39;
	n += i - 1;
	cards[n] = true;
}

bool isCardThere(int i) {
	return cards[i];
}

int main() {
	int n;
	cin >> n;
	char c;
	int i;
	for (int j = 0; j < n; j++) {
		cin >> c;
		cin >> i;
		addCard(c, i);
	}
	for(int j = 0; j < 52; j++) {
		if (!isCardThere(j)) {
			char c;
			if(j / 13 == 0)
				c = 'S';
			else if(j / 13 == 1)
				c = 'H';
			else if(j / 13 == 2)
				c = 'C';
			else if(j / 13 == 3)
				c = 'D';
			int i = j % 13 + 1;
			cout << c << " " << i << endl;
		}
	}
}