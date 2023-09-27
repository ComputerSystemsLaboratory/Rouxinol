#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_ARRAY 100

struct Card {
	char suit,value;
};

void bubbleSort(Card *a, int n) {
	bool flag = true;
	while (flag) {
		flag = false;
		for (int j = n - 1; 0 < j; j--) {
			if (a[j].value < a[j - 1].value) {
				Card tmp = a[j];
				a[j] = a[j-1];
				a[j-1] = tmp;
				flag = true;
			}
		}
	}
	return;
}

void selectSort(Card *a, int n) {
	for (int i = 0; i < n; i++) {
		int min_idx = i;
		for (int j = i+1; j < n; j++) {
			if (a[j].value < a[min_idx].value) {
				min_idx = j;
			}
		}
		if (i != min_idx) {
			Card tmp = a[i];
			a[i] = a[min_idx];
			a[min_idx] = tmp;
		}
	}
	return;
}

void outputArray(Card *a, int n) {
	for (int i = 0; i < n; i++) {
		if (i != 0) {
			cout << ' ';
		}
		cout << a[i].suit << a[i].value;
	}
	cout << endl;
	return;
}

bool isStable(Card *c1, Card *c2, int n) {
	for (int i = 0; i < n; i++) {
		if (c1[i].suit != c2[i].suit) {
			return false;
		}
	}
	return true;
}

int main(void) {
	int n = 0;
	Card c1[MAX_ARRAY],	c2[MAX_ARRAY];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c1[i].suit >> c1[i].value;
	}
	for (int i = 0; i < n; i++) {
		c2[i] = c1[i];
	}
	bubbleSort(c1, n);
	selectSort(c2, n);

	outputArray(c1, n);
	cout << "Stable" << endl;
	outputArray(c2, n);
	if (isStable(c1, c2, n)) {
		cout << "Stable" << endl;
	}
	else {
		cout << "Not stable" << endl;
	}
	return 0;
}