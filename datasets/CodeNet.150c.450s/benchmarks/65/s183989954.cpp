#include <iostream>
using namespace std;

struct Card {
	char suit, value;
};

void bubble(struct Card a[], int n) {
	Card hoge;
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			if (a[j].value < a[j - 1].value) {
				hoge = a[j];
				a[j] = a[j - 1];
				a[j - 1] = hoge;
			}
		}
	}
}

void selection(struct Card a[], int n) {
	int minj;
	Card hoge;
	for (int i = 0; i < n; i++) {
		minj = i;
		for (int j = i; j < n; j++) {
			if (a[j].value < a[minj].value) minj = j;
		}
		hoge = a[i];
		a[i] = a[minj];
		a[minj] = hoge;
	}
}
void print(struct Card a[], int n) {
	for (int i = 0; i < n; i++) {
		if (i > 0)cout << " ";
		cout << a[i].suit << a[i].value;
	}
	cout << endl;
}
bool stable(struct Card c1[], struct Card c2[], int n) {
	for (int i = 0; i < n; i++) {
		if (c1[i].suit != c2[i].suit)return false;
	}
	return true;
}

int main() {
	Card c1[40], c2[40];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c1[i].suit >> c1[i].value;
		c2[i] = c1[i];
	}
	bubble(c1, n);
	selection(c2, n);
	print(c1, n);
	cout << "Stable" << endl;
	print(c2, n);
	if (stable(c1, c2, n))cout << "Stable" << endl;
	else cout << "Not stable" << endl;

	return 0;
}
