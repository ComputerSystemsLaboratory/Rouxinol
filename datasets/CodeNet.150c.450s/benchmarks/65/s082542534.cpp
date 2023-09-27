#include<iostream>
using namespace std;

struct Card { char suit, value; };

void print(Card card[], int size) {
	for (int i = 0; i < size; i++) {
		if (i) cout << ' ';
		cout << card[i].suit << card[i].value;
	}
	cout << endl;
}

void selection(Card cards[], int size) {
	int minj;
	for (int i = 0; i < size; i++) {
		minj = i;
		for (int j = i; j < size; j++) {
			if (cards[minj].value > cards[j].value) minj = j;
		}
		Card c = cards[i]; cards[i] = cards[minj]; cards[minj] = c;
	}
}

void bubble(Card cards[], int size) {
	bool flag = true;
	int i = 0;
	while (flag){
		flag = false;
		for (int j = size - 1; j > i; j--) {
			if (cards[j].value < cards[j - 1].value) {
				Card c = cards[j]; cards[j] = cards[j-1]; cards[j-1] = c;
				flag = true;
			}
		}
		i++;
	}
}

bool isStable(Card unknown[], Card stable[], int size) {
	for (int i = 0; i < size; i++) {
		if (unknown[i].suit != stable[i].suit) return false;
	}
	return true;
}


int main(){
	int N;
	cin >> N;

	Card* bubbleCards = new Card[N];    // Cards for BubbleSort
	Card* selectionCards = new Card[N]; // Cards for SelectionSort

	for (int i = 0; i < N; i++) {
		cin >> bubbleCards[i].suit >> bubbleCards[i].value;
	}

	for (int i = 0; i < N; i++) {
		selectionCards[i] = bubbleCards[i];
	}

	// sort
	bubble(bubbleCards, N);
	selection(selectionCards, N);

	// output
	print(bubbleCards, N);
	cout << "Stable" << endl;

	print(selectionCards, N);
	if (isStable(selectionCards, bubbleCards, N)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
}