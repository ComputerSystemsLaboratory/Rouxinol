#include <iostream>

using namespace std;

struct Card {
	char suit;
	char value;
};

void trace(Card C[], int N) {
	for (int i = 0; i < N; i++) {
		if (i > 0) cout << " ";
		cout << C[i].suit << C[i].value;
	}
	cout << endl;
}

int selectionSort(Card C[], int N) {
	int minj;
	Card tmp;
	int count = 0;

	for (int i = 0; i < N; i++) {
		minj = i;
		for (int j = i; j < N; j++) {
			if (C[j].value < C[minj].value) {
				minj = j;	
			}
		}
		
		if (minj != i) {
			tmp = C[i];
			C[i] = C[minj];
			C[minj] = tmp;

			count++;
		}
	}

	return count;
}

int bubbleSort(Card C[], int N) {
	int flag = 1;
	int count = 0;
	Card tmp;

	while (flag) {
		flag = 0;

		for (int i = N - 1; i > 0; i--) {
			if (C[i].value < C[i - 1].value) {
				tmp = C[i];
				C[i] = C[i - 1];
				C[i - 1] = tmp;
				
				flag = 1;
				count++;
			}
		}

	}
	
	return count;
}

bool isStable (Card C1[], Card C2[], int N) {
	for (int i = 0; i < N; i++) {
		if (C1[i].suit != C2[i].suit) {
			return false;
		}
	}

	return true;
}

int main() {
	Card C1[36];
	Card C2[36];
	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> C1[i].suit >> C1[i].value;
		C2[i] = C1[i];
	}

	bubbleSort(C1, N);
	selectionSort(C2, N);

	trace(C1, N);
	cout << "Stable" << endl;

	trace(C2, N);
	if (isStable(C1, C2, N)) {
		cout << "Stable" << endl;
	} else {
		cout << "Not stable" << endl;
	}
	
	return 0;
}