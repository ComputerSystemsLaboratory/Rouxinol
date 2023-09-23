#include<iostream>
using namespace std;

struct Card {
	char suit;
	int num;
	bool flag;
};

int main() {
	Card c[52], tmp;
	int i, n, j;
	for (i = 0; i < 52; i++) {
		c[i].num = i % 13 + 1;
		c[i].flag = false;
		if (i < 13) {
			c[i].suit = 'S';
		} else if (i < 26) {
			c[i].suit = 'H';
		} else if (i < 39) {
			c[i].suit = 'C';
		} else {
			c[i].suit = 'D';
		}
	}
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> tmp.suit >> tmp.num;
		for (j = 0; j < 52; j++) {
			if (c[j].suit == tmp.suit && c[j].num == tmp.num)c[j].flag = true;
		}
	}
	for (i = 0; i < 52; i++) {
		if (c[i].flag == false)cout << c[i].suit << " " << c[i].num << endl;
	}
	return 0;
}