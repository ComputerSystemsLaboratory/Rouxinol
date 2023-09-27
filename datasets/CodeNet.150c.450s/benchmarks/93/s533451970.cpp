// ALDS1_6_C.cpp
// Sort II - Quick Sort

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Card
{
//	Card(char ch, int num) : ch(ch), num(num) { }
	char ch;
	int num;
};

bool operator<(const Card & c1, const Card &c2) {
	return c1.num < c2.num;
}

void bubblesort(vector<Card>& cards, int l, int r)
{
	for (int i = l; i <= r; i++) {
		for (int j = r; j > i; j--) {
			if (cards[j].num < cards[j-1].num)
				swap(cards[j], cards[j-1]);
		}
	}
}

int Partition(vector<Card>& cards, int l, int r)
{
	int tmp = cards[r].num;
	int i = l - 1;
	for (int j = l; j < r; j++) {
		if (cards[j].num <= tmp) {
			i++;
			swap(cards[i], cards[j]);
		}
	}
	swap(cards[++i], cards[r]);
	return i;
}

void qsort(vector<Card>& cards, int l, int r)
{
	if (l >= r) return;
	int pivot = Partition(cards, l, r);
	qsort(cards, l, pivot - 1);
	qsort(cards, pivot + 1, r);
}

void show(vector<Card>& cards)
{
	for (int i = 0; i < cards.size(); i++) {
		cout << cards[i].ch << " " << cards[i].num << endl;
	}
}

bool isSame(vector<Card>& c1, vector<Card>& c2)
{
	if (c1.size() != c2.size()) return false;
	for (int i = 0; i < c1.size(); i++) {
		if (c1[i].ch != c2[i].ch || c1[i].num != c2[i].num)
			return false;
	}
	return true;
}



int main()
{
	int n;
	cin >> n;
	vector<Card> cards(n);
	for (int i = 0; i < n; i++) {
		cin >> cards[i].ch >> cards[i].num;
	}
	vector<Card> cards2(cards);
	qsort(cards, 0, n - 1);
	// bubblesort(cards2, 0, n - 1);
	stable_sort(cards2.begin(), cards2.end());
	if (isSame(cards, cards2))
		cout << "Stable" << endl;
	else
		cout << "Not stable" << endl;
	show(cards);
	return 0;
}