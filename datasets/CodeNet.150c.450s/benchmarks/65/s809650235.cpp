#include <iostream>

using namespace std;

struct Card
{
	char suit, number;
};

void BubbleSort(struct Card C[], int N)
{
	for (int i = 0; i < N; i++) {
		for (int j = N - 1; j >= i; j--) {
			if (C[j].number < C[j - 1].number) {
				Card t = C[j];
				C[j] = C[j - 1];
				C[j - 1] = t;
			}
		}
	}
}

void SelectSort(struct Card C[], int N)
{
	for (int i = 0; i < N; i++) {
		int minj = i;
		for (int j = i; j < N; j++) {
			if (C[j].number < C[minj].number)
				minj = j;
		}
		Card t = C[i];
		C[i] = C[minj];
		C[minj] = t;
	}
}

bool isStable(struct Card C1[], struct Card C2[], int N)
{
	for (int i = 0; i < N; i++) {
		if (C1[i].suit != C2[i].suit)
			return false;
	}
	return true;
}

int main()
{
	const int MAX = 36;
	int N;
	Card C1[MAX], C2[MAX];

	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> C1[i].suit >> C1[i].number;

	for (int i = 0; i < N; i++) C2[i] = C1[i];

	BubbleSort(C1, N);
	SelectSort(C2, N);

	for (int i = 0; i < N; i++) {
		if (i) cout << ' ';
		cout << C1[i].suit << C1[i].number;
	}
	cout << '\n';
	cout << "Stable" << endl;

	for (int i = 0; i < N; i++) {
		if (i) cout << ' ';
		cout << C2[i].suit << C2[i].number;
	}
	cout << '\n';

	if (isStable(C1, C2, N)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
}