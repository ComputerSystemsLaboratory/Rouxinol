#include <iostream>
using namespace std;

struct Card {
	char suit;
	char value;
};


void bubbleSort(Card A[], int N) {
	bool flag = true;
	int i = 1;
	while (flag) {
		flag = false;
		for (int j = N - 1; j >= i; j--) {
			if (A[j - 1].value > A[j].value) {
				Card temp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = temp;
				flag = true;
			}
		}
		i++;
	}
}


void selectionSort(Card A[], int N) {
	for (int i = 0; i < N; i++) {
		int minj = i;
		for (int j = i; j < N; j++) {
			if (A[j].value < A[minj].value) {
				minj = j;
			}
		}
		if (i != minj) {
			Card temp = A[i];
			A[i] = A[minj];
			A[minj] = temp;
		}
	}
}

void displayA(Card A[], int N) {
	for (int i = 0; i < N - 1; i++) {
		cout << A[i].suit << A[i].value << " ";
	}
	cout << A[N - 1].suit << A[N - 1].value << endl;
}



int main() {
	char table1[10][4], table2[10][4];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 4; j++) {
			table2[i][j] = table1[i][j] = 'X';
		}
	}

	int N;
	Card A1[36], A2[36];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A1[i].suit >> A1[i].value;
		A2[i] = A1[i];
	}

	for (int i = 1; i <= 9; i++) {
		int num = 0;
		for (int j = 0; j < N; j++) {
			if ((int) A2[j].value - (int) '0' == i) {
				table1[i][num++] = A2[j].suit;
			}
		}
	}

	bubbleSort(A1, N);
	selectionSort(A2, N);

	for (int i = 1; i <= 9; i++) {
		int num = 0;
		for (int j = 0; j < N; j++) {
			if ((int)A2[j].value - (int) '0' == i) {
				table2[i][num++] = A2[j].suit;
			}
		}
	}

	bool isStable = true;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 4; j++) {
			if (table2[i][j] != table1[i][j]) {
				isStable = false;
				break;
			}
		}
		if (isStable == false) {
			break;
		}
	}


	displayA(A1, N);
	cout << "Stable" << endl;

	displayA(A2, N);
	if (isStable == true) {
		cout << "Stable" << endl;
	}
	else {
		cout << "Not stable" << endl;
	}

	return 0;
}