#include <iostream>
#include <algorithm>
using namespace std;

typedef struct {
	int value;
	char symbol;
}Card;

void selectionSort(Card A[], int N) {
	for (int i = 0;i < N;i++) {
		int minj = i;
		for (int j = i + 1;j < N;j++) {
			if (A[j].value < A[minj].value)
				minj = j;
		}
		if (i != minj) {
			swap(A[i], A[minj]);      //??\??? : ??¢??°swap???????????¶??????????????§????????¨???
		}
	}
}

void bubbleSort(Card A[], int N) {
	for (int i = 0;i<N;i++) {
		for (int j = N - 1;j >= i + 1;j--) {
			if (A[j].value<A[j - 1].value)
				swap(A[j], A[j - 1]);
		}
	}
}

int main() {
	Card A[36], B[36];
	int N;
	cin >> N;

	for (int i = 0;i<N;i++) {
		cin >> A[i].symbol >> A[i].value;
		B[i].value = A[i].value;
		B[i].symbol = A[i].symbol;
	}

	bubbleSort(A, N);
	selectionSort(B, N);

	bool flagS = 1;

	for (int i = 0;i<N;i++) {
		if (i) cout << " ";
		cout << A[i].symbol << A[i].value;
	}

	cout << endl << "Stable" << endl;

	for (int i = 0;i<N;i++) {
		if (i) cout << " ";
		cout << B[i].symbol << B[i].value;
		if (B[i].symbol != A[i].symbol) flagS = 0;
	}

	cout << endl << (flagS ? "Stable" : "Not stable") << endl;

	return 0;
}