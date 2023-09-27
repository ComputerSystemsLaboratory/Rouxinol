#include <iostream>

#define SIZE 100

using namespace std;

struct Card {
	char suit;
	int rank;
};

void bubbleSort(int, Card[]);
void selectionSort(int, Card[]);

int main(void) {
	int n;
	Card list1[SIZE], list2[SIZE];
	bool stable = true;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> list1[i].suit >> list1[i].rank;
		list2[i] = list1[i];
	}

	bubbleSort(n, list1);
	selectionSort(n, list2);

	for (int i = 0; i < n; i++) {
		if (i > 0) {
			cout << " ";
		}
		cout << list1[i].suit << list1[i].rank;
	}
	cout << "\nStable\n";

	for (int i = 0; i < n; i++) {
		if (i > 0) {
			cout << " ";
		}
		cout << list2[i].suit << list2[i].rank;
		if (list1[i].suit != list2[i].suit || list1[i].rank != list2[i].rank) {
			stable = false;
		}
	}
	if (stable) {
		cout << "\nStable\n";
	}
	else {
		cout << "\nNot stable\n";
	}

	cin >> n;

	return 0;
}

void bubbleSort(int n, Card list[]) {
	Card tmp;
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j >= i + 1; j--) {
			if (list[j].rank < list[j - 1].rank) {
				tmp = list[j];
				list[j] = list[j - 1];
				list[j - 1] = tmp;
			}
		}
	}
}

void selectionSort(int n, Card list[]) {
	int min;
	Card tmp;
	for (int i = 0; i < n; i++) {
		min = i;
		for (int j = i; j < n; j++) {
			if (list[j].rank < list[min].rank) {
				min = j;
			}
		}
		tmp = list[i];
		list[i] = list[min];
		list[min] = tmp;
	}
}