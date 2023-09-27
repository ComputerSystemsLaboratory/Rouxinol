#include <iostream>
#include <algorithm>
using namespace std;

struct Card { 
	char suit ,value;
};

void BubbleSort(Card C[], int N) {
	Card temp;
	for (int i = 0; i < N; i++) {
		for (int j = N-1; j >= i; j--) {
			if (C[j - 1].value > C[j].value) {
				temp = C[j - 1];
				C[j - 1] = C[j];
				C[j] = temp;
			}
		}
	}
}


void SelectionSort(Card C[], int N) {
	Card temp;
	int minj;
	for (int i = 0; i < N; i++) {
		minj = i;
		for (int j = i; j < N; j++) {
			if (C[minj].value > C[j].value) {
				minj = j;
			}
		}
		temp = C[i];
		C[i] = C[minj];
		C[minj] = temp;
	}

}

int main(void) {
	int N;
	Card A[101];
	cin >> N;
	char input;
	for (int i = 0; i < N; i++) cin >> A[i].suit >> A[i].value;

	Card B[101];
	for (int i = 0; i < N; i++) B[i] = A[i];
	BubbleSort(B, N);
	for (int i = 0; i < N-1; i++) cout << B[i].suit << B[i].value << " ";
	cout << B[N-1].suit << B[N-1].value << endl;
	cout << "Stable" << endl;

	Card C[101];
	for (int i = 0; i < N; i++) C[i] = A[i];
	SelectionSort(C, N);
	for (int i = 0; i < N-1; i++) cout << C[i].suit << C[i].value << " ";
	cout << C[N-1].suit << C[N-1].value << endl;

	bool check = true;
	for (int i = 0; i < N; i++) {
		if (B[i].suit != C[i].suit) {
			check = false;
			break;
		}
		if (B[i].value != C[i].value) {
			check = false;
			break;
		}
	}
	if (check) {
		cout << "Stable" << endl;
	}
	else {
		cout << "Not stable" << endl;
	}

	return 0;
}
