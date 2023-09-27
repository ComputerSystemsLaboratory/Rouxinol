#include <bits/stdc++.h>

using namespace std;

void swap(string& card1, string& card2) {
	string tmp = card1;
	card1 = card2;
	card2 = tmp;
}

int peek_number(string card) {
	return atoi(&card[1]);
}

vector<string> bubble_sort(vector<string> cards) {
	for (int i = 0; i < cards.size(); i++) {
		for (int j = cards.size() - 1; j > i; j--) {
			if (peek_number(cards[j]) < peek_number(cards[j - 1])) swap(cards[j], cards[j - 1]);
		}
	}

	return cards;
}

vector<string> selection_sort(vector<string> cards) {
	for (int i = 0; i < cards.size(); i++) {
		int minj = i;

		for (int j = i; j < cards.size(); j++) {
			if (peek_number(cards[j]) < peek_number(cards[minj])) minj = j;
		}

		swap(cards[i], cards[minj]);
	}

	return cards;
}

bool is_stable(vector<string> stable, vector<string> target) {
	for (int i = 0; i < stable.size(); i++) {
		if (stable[i] != target[i]) return false;
	}

	return true;
}

void print_cards(vector<string> cards) {
	bool first = true;

	for (int i = 0; i < cards.size(); i++) {
		if (!first) cout << " ";
		cout << cards[i];
		first = false;
	}

	cout << endl;
}

int main() {
	int n;
	cin >> n;

	vector<string> unsorted(n);
	for (int i = 0; i < n; i++) cin >> unsorted[i];

	vector<string> bubble_sorted    = bubble_sort(unsorted);
	vector<string> selection_sorted = selection_sort(unsorted);

	print_cards(bubble_sorted);
	cout << "Stable" << endl;

	print_cards(selection_sorted);
	cout << (is_stable(bubble_sorted, selection_sorted) ? "Stable" : "Not stable") << endl;

	return 0;
}

