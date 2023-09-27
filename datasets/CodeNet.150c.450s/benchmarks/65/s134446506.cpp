#include <iostream>

using namespace std;

class Card {
public:
	string suit;
	int value;
	int order;
	void setData(string card, int i);
};

void Card::setData(string card, int i) {
	suit = card[0];
	value = card[1] - '0';
	order = i;
}

void printa(Card card[], int len) {
	cout << card[0].suit << card[0].value;
	for (int i = 1; i < len; i++)
		cout << " " << card[i].suit << card[i].value;
	cout << endl;
}

void bsort(Card card[], int len) {
	for (int i = 0; i < len; i++)
		for (int j = len-1; j >= i+1; j--)
			if (card[j].value < card[j-1].value)
				swap(card[j], card[j-1]);
}

void ssort(Card card[], int len) {
	for (int i = 0; i < len; i++) {
		int mini = i;
		for (int j = i; j < len; j++)
			if (card[j].value < card[mini].value)
				mini = j;
		if (mini != i)
			swap(card[i], card[mini]);
	}
}

void isStable(Card sorted[], int len) {
	for (int i = 0; i < len-1; i++)
		if (sorted[i].value == sorted[i+1].value)
			if (sorted[i].order > sorted[i+1].order) {
				cout << "Not stable" << endl;
				return;
			}
	cout << "Stable" << endl;
}

int main() {
	int n;
	string t;
	Card *b, *s;
	cin >> n;
	b = new Card[n];
	s = new Card[n];
	for (int i = 0; i < n; i++) {
		cin >> t;
		b[i].setData(t, i);
		s[i].setData(t, i);
	}
	bsort(b, n);
	printa(b, n);
	isStable(b, n);
	ssort(s, n);
	printa(s, n);
	isStable(s, n);
}