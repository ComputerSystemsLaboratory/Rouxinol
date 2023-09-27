#include<iostream>
using namespace std;

struct Card {
	char moji;
	int value;
};


void print(struct Card A[], int N) {

	int i;
	for (i = 0; i < N; i++) {
		if (i > 0) cout << " ";
		cout << A[i].moji << A[i].value;
	}

	cout << endl;

}


void Bubble_Sort(struct Card A[], int N) {

	int i, j;

	for (i = 0; i < N; i++) {
		for (j = N - 1; j >= i; j--) {
			if (A[j].value < A[j-1].value) {
				Card tmp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = tmp;
			}
		}
	}
}

void Selection_Sort(struct Card A[], int N) {

	int i, j;
	int min;

	for (i = 0; i < N; i++) {
		min = i;
		for (j = i; j < N; j++) {
			if (A[j].value < A[min].value) {
				min = j;
			}
		}

		Card tmp = A[i];
		A[i]= A[min];
		A[min] = tmp;
	}

}


bool Stable(struct Card C1[], struct Card C2[], int N) {
	int i;
	for (i = 0; i < N; i++) {
		if (C1[i].moji != C2[i].moji) return 0;
	}

	return 1;
}

int main() {


	struct Card C1[100],C2[100];
	int N;
	int i;

	cin >> N;

	for (i = 0; i < N; i++) {
		cin >> C1[i].moji >> C1[i].value;
	}

	for (i = 0; i < N; i++) {
		C2[i] = C1[i];
	}

	Bubble_Sort(C1, N);
	Selection_Sort(C2, N);

	print(C1, N);
	cout << "Stable" << endl;
	print(C2, N);
		
	if (Stable(C1, C2, N)) {
		cout << "Stable" << endl;
	}
	else {
		cout << "Not stable" << endl;
	}


	return 0;

}