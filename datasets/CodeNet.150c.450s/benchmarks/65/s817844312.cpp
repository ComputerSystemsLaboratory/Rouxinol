#include <iostream>
using namespace std;

struct Card
{
	int value;
	char mark;
};

//????????????????????????????????¨
void BubbleSort(Card A[], int n)
{
	bool flag = 1;
	for (int i = 0; flag; i++) {
		flag = 0;
		for (int j = n - 1; j > i; j--) {
			if (A[j].value < A[j - 1].value) {
				Card c = A[j];
				A[j] = A[j - 1];
				A[j - 1] = c;
				flag = 1;
			}
		}
	}
}

void SelectionSort(Card A[], int n)
{
	int i, j, minj;
	for (i = 0; i < n; i++) {
		minj = i;
		for (j = i; j < n; j++) {
			if (A[minj].value > A[j].value) minj = j;
		}
		if (minj != i) {
			Card c = A[i];
			A[i] = A[minj];
			A[minj] = c;
		}		
	}
}

void show(Card A[], int n)
{
	for (int i = 0; i < n; i++) {
		if (i > 0) cout << " ";
		cout << A[i].mark << A[i].value;
	}
	cout << endl;
}

int main()
{
	int n;
	Card c1[100], c2[100];
	bool isStable = 1;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c1[i].mark >> c1[i].value;
		c2[i] = c1[i];
	}
	BubbleSort(c1, n);
	SelectionSort(c2, n);

	show(c1, n);
	cout << "Stable" << endl;
	show(c2, n);
	for (int i = 0; i < n; i++) {
		if (c1[i].mark != c2[i].mark) {
			cout << "Not stable";
			isStable = 0;
			break;
		}
	}
	if (isStable) cout << "Stable";
	cout << endl;
	return 0;
}