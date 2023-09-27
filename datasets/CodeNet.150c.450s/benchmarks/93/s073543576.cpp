#include <iostream>
#include <cstdio>
#include <limits.h>

using namespace std;



class Card {
public:
	int number;
	char mark;

	Card& operator=(const int number);

};

Card& Card::operator=(const int number) {
	this->number = number;
	return *this;
}

bool operator<=(const Card c1,const Card c2) {
	return (c1.number <= c2.number) ? true : false;
}


Card A[100000];
Card tmp[100000];

template <typename T>
int partition(T A[], int p, int r)
{
	T x = A[r];
	int i = p - 1;

	for (int j = p; j < r; j++) {
		if (A[j] <= x) {
			i++;
			T tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}

	T tmp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = tmp;

	return i + 1;
}

template <typename T>
void quickSort(T A[], int p, int r) {
	if (p < r) {
		int q = partition(A, p, r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}

template <typename T>
void merge(T A[], int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;

	T *L = new T[n1 + 1];
	T *R = new T[n2 + 1];


	for (int i = 0; i < n1; i++) {
		L[i] = A[left + i];
	}

	for (int i = 0; i < n2; i++) {
		R[i] = A[mid + i];
	}

	L[n1] = R[n2] = INT_MAX;

	int i = 0;
	int j = 0;

	for (int k = left; k < right; k++) {
		if (L[i] <= R[j]) {
			A[k] = L[i];
			i++;
		}
		else {
			A[k] = R[j];
			j++;
		}
	}

	delete[] R;
	delete[] L;

}

template <typename T>
void mergeSort(T A[], int left, int right)
{
	if (left + 1 < right) {
		int mid = (right + left) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

bool isStable(Card A[], Card B[],int n) {
	for (int i = 0; i < n; i++) {
		if (A[i].number != B[i].number || A[i].mark != B[i].mark) {
			return false;
		}
	}
	return true;
}

int main(void)
{

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> A[i].mark >> A[i].number;
		tmp[i] = A[i];
	}

	quickSort(A, 0, n-1);
	mergeSort(tmp, 0, n);

	cout << ((isStable(A, tmp, n)) ? "Stable" : "Not stable") << endl;

	for (int i = 0; i < n; i++) {
		cout << A[i].mark << ' ' << A[i].number << endl;
	}

	return 0;
}