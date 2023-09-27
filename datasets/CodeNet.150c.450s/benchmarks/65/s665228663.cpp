#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Card
{
	string val;
	size_t order;
};

bool is_smaller(Card a, Card b)
{
	if (stoi(a.val.substr(1,1)) < stoi(b.val.substr(1,1)))
		return true;
	else
		return false;
}

void bubble_sort(vector<Card> *cards, size_t n)
{
	for (size_t i=0; i<n; i++) {
		for (size_t j=n-1; j>i; j--) {
			if (is_smaller((*cards)[j], (*cards)[j-1]))
				swap((*cards)[j], (*cards)[j-1]);
		}
	}
}

void selection_sort(vector<Card> *cards, size_t n)
{
	for (size_t i=0; i<n; i++) {
		size_t minj = i;
		for (size_t j=i; j<n; j++) {
			if (is_smaller((*cards)[j], (*cards)[minj]))
				minj = j;
		}
		swap((*cards)[i], (*cards)[minj]);
	}
}

bool is_stable(vector<Card> cards, size_t n)
{
	for (size_t i=0; i<n-1; i++) {
		if (cards[i].val[1] == cards[i+1].val[1]) {
			if (cards[i].order > cards[i+1].order)
				return false;
		}
	}
	return true;
}

void print_cards(vector<Card> cards, size_t n)
{
	for (size_t i=0; i<n-1; i++)
		cout << cards[i].val << " ";
	cout << cards[n-1].val << endl;
}

int main(void)
{
	size_t n, order = 0;
	vector<Card> cards1, cards2;
	string buf;
	cin >> n;
	for (size_t i=0; i<n; i++) {
		cin >> buf;
		Card card;
		card.val = buf;
		card.order = order++;
		cards1.push_back(card);
		cards2.push_back(card);
	}

	bubble_sort(&cards1, n);
	print_cards(cards1, n);
	cout << (is_stable(cards1, n) ? "Stable" : "Not stable") << endl;

	selection_sort(&cards2, n);
	print_cards(cards2, n);
	cout << (is_stable(cards2, n) ? "Stable" : "Not stable") << endl;

	return 0;
}