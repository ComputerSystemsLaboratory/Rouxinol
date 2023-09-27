#include<iostream>
using namespace std;

struct card{
	char suit;
	int num;
};
card A[100000];

int partition(int p, int r) {
	int x = A[r].num;
	int i = p - 1;
	for (int j = p; j < r; j++) {
		if (A[j].num <= x) {
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[i + 1], A[r]);
	return i + 1;
}

void quicksort(int p, int r) {
	if (p < r) {
		int q = partition(p, r);
		quicksort(p, q - 1);
		quicksort(q + 1, r);
	}
}

int isStable(int n, card s[]) {
	for (int i = 0; i < n; i++) {
		int j = 0;
		while (1) {
			while (j < n && s[j].num != A[i].num)j++;
			if (j == n) break;
			if (s[j].suit != A[i].suit) return 0;
			if (A[i].num != A[i + 1].num) break;
			i++;
			j++;
		}
	}
	return 1;
}

int main(void) {
	int n;
	card s[100000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i].suit >> A[i].num;
		s[i] = A[i];
	}
	quicksort(0, n - 1);
	if (isStable(n, s)) {
		cout << "Stable" << endl;
	} else {
		cout << "Not stable" << endl;
	}
	for (int i = 0; i < n; i++) {
		cout << A[i].suit << " " << A[i].num << endl;
	}
	return 0;
}