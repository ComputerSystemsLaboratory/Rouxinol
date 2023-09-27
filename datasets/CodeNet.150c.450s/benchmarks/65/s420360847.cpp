#include<iostream>
using namespace std;

struct Card { char suit, value; };

void BubbleSort(struct Card A[], int N) {
	for (int i = 0; i <= N - 1; i++) {
		for (int j = N - 1; j >= i + 1; j--) {
			if (A[j].value < A[j - 1].value) swap(A[j], A[j - 1]);
		}
	}
}

void SelectionSort(struct Card A[], int N) {
	int minj;
	for (int i = 0; i <= N - 1; i++) {
		minj = i;
		for (int j = i; j <= N - 1; j++) {
			if (A[j].value < A[minj].value) minj = j;
		}
		swap(A[i], A[minj]);
	}
}

bool isStable(Card C1[], Card C2[], int N) {
	//C1???stable??????
	for (int i = 0; i <= N - 1; i++) {
		if (C1[i].suit != C2[i].suit) return false;
	}
	return true;
}

void print(Card C[], int N) {
	for (int i = 0; i <= N - 1; i++) {
		if (i > 0) cout << " ";
		cout << C[i].suit << C[i].value;
	}
	cout << endl;
}

int main(void) {
	int N;
	Card C1[36], C2[36];
	cin >> N;
	for (int i = 0; i <= N - 1; i++) {
		cin >> C1[i].suit >> C1[i].value;
	}
	for (int i = 0; i <= N - 1; i++) C2[i] = C1[i];
	BubbleSort(C1, N);
	SelectionSort(C2, N);

	print(C1, N);
	cout << "Stable" << endl;

	print(C2, N);
	if (isStable(C1, C2, N)) {
		cout << "Stable" << endl;
	} else {
		cout << "Not stable" << endl;
	}

	return 0;
}