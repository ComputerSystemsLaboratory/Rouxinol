#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct Card {
	char suit;
	int  number;
};

void BubbleSort(Card *array, int size);
void SelectionSort(Card *array, int size);
bool isStable(Card *array1, Card *array2, int size);
string JoinWithSpace(Card *array, int size);

int main() {
	int n;
	cin >> n;

	Card array_buble[n];
	Card array_selection[n];
	for (int i = 0; i < n; i++) {
		Card card;
		cin >> card.suit >> card.number;

		array_buble[i] = card;
		array_selection[i] = card;
	}


	BubbleSort(array_buble, n);
	SelectionSort(array_selection, n);

	cout << JoinWithSpace(array_buble, n) << endl;
	cout << "Stable" << endl;

	cout << JoinWithSpace(array_selection, n) << endl;
	if (isStable(array_buble, array_selection, n)) {
		cout << "Stable" << endl;
	} else {
		cout << "Not stable" << endl;
	}

	return 0;
}

void BubbleSort(Card *array, int size) {
	bool exist_adjacent = true;
	while (exist_adjacent) {

		exist_adjacent = false;
		for (int i = size - 1; i > 0; i--) {
			if (array[i].number < array[i -1].number) {
				swap(array[i], array[i - 1]);
				exist_adjacent = true;
			}
		}

	}
}

void SelectionSort(Card *array, int size) {
	for (int i = 0; i < size -1; i++) {

		int min = i;
		for (int j = i; j < size; j++) {
			if (array[j].number < array[min].number) {
				min = j;
			}
		}

		if (i != min) {
			swap(array[i], array[min]);
		}
	}
}

bool isStable(Card *array1, Card *array2, int size) {
	for (int i = 0; i < size; i++) {
		if (array1[i].suit != array2[i].suit) {
			return false;
		}
	}
	return true;
}

string JoinWithSpace(Card *array, int size) {
	ostringstream oss;
	for (int i = 0; i < size - 1; i++) {
		oss << array[i].suit << array[i].number << " ";
	}
	oss << array[size - 1].suit << array[size - 1].number;
	return oss.str();
}