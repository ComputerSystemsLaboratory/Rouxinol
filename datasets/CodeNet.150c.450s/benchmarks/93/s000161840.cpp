#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct card {
	string mark;
	int number;
};

int partition(card A[], int p, int r) {

	int x = A[r].number;
	int i = p - 1;
	for (int j = p; j < r; ++j) {
		if (A[j].number <= x) {
			++i;
			card tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}
	card tmp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = tmp;
	return i + 1;
}

void quicksort(card A[], int p, int r) {
	if (p < r) {
		int q = partition(A, p, r);
		quicksort(A, p, q - 1);
		quicksort(A, q + 1, r);
	}
}

int main() {
	int n;
	scanf("%d", &n);

	card A[n];
	vector<card> B;

	for (int i = 0; i < n; ++i) {
		cin >> A[i].mark >> A[i].number;
	}
	for (int i = 0; i < n; ++i) {
		B.push_back(A[i]);
	}

	quicksort(A, 0, n - 1);

	for (int i = 0; i < n; ++i) {
		vector<card>::iterator it = B.begin();
		while (it != B.end()) {
			card c = *it;
			if (A[i].number == c.number) {
				if (A[i].mark != c.mark) {
					cout << "Not stable" << endl;
					goto OUTPUT;
				} else {
					B.erase(it);
				}
				break;
			}
			++it;
		}

	}
	cout << "Stable" << endl;

	OUTPUT:

	for (int i = 0; i < n; ++i) {
		cout << A[i].mark << " " << A[i].number << endl;
	}

	return 0;
}