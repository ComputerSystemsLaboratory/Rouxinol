#include <iostream>
#include <algorithm>

using namespace std;

struct Card
{
	int num;
	char design;
	int suffix;
};

int partition(Card A[], int p, int r) {
	int x = A[r].num;
	int i = p;

	for (int j = p; j < r; j++) {
		if (A[j].num <= x) {
			swap(A[i++], A[j]);
		}
	}
	swap(A[i], A[r]);

	return i;
}

void quicksort(Card A[], int p, int r) {
	if (p < r) {
		int q = partition(A, p, r);
		quicksort(A, p, q - 1);
		quicksort(A, q + 1, r);
	}
}

bool stable(Card A[], int n) {
	for (int i = 0; i < n - 1; i++) {
		if (A[i].num == A[i + 1].num && A[i].suffix > A[i + 1].suffix) {
			return false;
		}
	}

	return true;
}

int main() {
	int n;
	cin >> n;
	Card A[n];

	for (int i = 0; i < n; i++) {
		cin >> A[i].design >> A[i].num;
		A[i].suffix = i;
	}

	quicksort(A, 0, n - 1);

	if (stable(A, n)) {
		cout << "Stable";
	}
	else {
		cout << "Not stable";
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << A[i].design << " " << A[i].num << endl;
	}

	return 0;
}