#include <iostream>
#include <algorithm>

using namespace std;

class Card {
public:
	int suffix;

	char design;
	int value;
} card[2][36];

void bubble_sort(Card a[], int n) {
	bool flag = true;

	while (flag) {
		flag = false;
		for (int i = 0; i < n - 1; i++) {
			if (a[i].value > a[i + 1].value) {
				swap(a[i].suffix, a[i + 1].suffix);
				swap(a[i].value, a[i + 1].value);
				swap(a[i].design, a[i + 1].design);
				flag = true;
			}
		}
	}
}

void selection_sort(Card a[], int n) {
	for (int i = 0; i < n; i++) {
		int minj = i;
		for (int j = i; j < n; j++) {
			if (a[minj].value > a[j].value) {
				minj = j;
			}
		}
		swap(a[i].suffix, a[minj].suffix);
		swap(a[i].value, a[minj].value);
		swap(a[i].design, a[minj].design);
	}
}

bool stable(Card a[], int n) {
	for (int i = 0; i < n - 1; i++){
		if (a[i].value == a[i + 1].value) {
			if (a[i].suffix > a[i + 1].suffix) {
				return false;
			}
		}
	}
	return true;
}

void print_array(Card a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i].design << a[i].value;
		if (i < n - 1) {
			cout << ' ';
		}
	}
	cout << endl;
}

int main() {
	int n, value;
	char design;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> design >> value;
		for (int j = 0; j < 2; j++) {
			card[j][i].value = value;
			card[j][i].design = design;
			card[j][i].suffix = i;
		}
	}

	bubble_sort(card[0], n);
	print_array(card[0], n);
	if (stable(card[0], n) == true) {
		cout << "Stable" << endl;
	}
	else {
		cout << "Not stable" << endl;
	}

	selection_sort(card[1], n);
	print_array(card[1], n);
	if (stable(card[1], n) == true) {
		cout << "Stable" << endl;
	}
	else {
		cout << "Not stable" << endl;
	}

	return 0;
}