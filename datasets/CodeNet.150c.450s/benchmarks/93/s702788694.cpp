#include<iostream>
#include<string>
using namespace std;

static const int SEN = 2000000000;

struct Card {
	char suit;
	int num;
};

void merge(Card A[], int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	Card L[n1 + 1], R[n2 + 1];
	for (int i = 0; i < n1; i++) {
		L[i] = A[left + i];
	}
	for (int i = 0; i < n2; i++) {
		R[i] = A[mid + i];
	}
	L[n1].num = R[n2].num = SEN;
	int i = 0, j= 0;
	for (int k = left; k < right; k++) {
		if (L[i].num <= R[j].num) {
			A[k] = L[i++];
		} else {
			A[k] = R[j++];
		}
	}	
}

void mergeSort(Card A[], int left, int right) {
	if (right - left > 1) {
		int mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

int partition(Card A[], int p, int r) {
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

void quicksort(Card A[], int p, int r) {
	if (p < r) {
		int q = partition(A, p, r);
		quicksort(A, p, q - 1);
		quicksort(A, q + 1, r);
	}
}

bool check(Card A[], Card B[], int n) {
	for (int i = 0; i < n; i++) {
		if (A[i].suit != B[i].suit) return false;  //????????????*???????????????????????????==???????????????????????§??????
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	Card A[n], B[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i].suit >> A[i].num;
		B[i].suit = A[i].suit;
		B[i].num = A[i].num;
	}

	quicksort(A, 0, n - 1);
	mergeSort(B, 0, n);

	if (check(A, B, n)) {
		cout << "Stable" << endl;
	} else {
		cout << "Not stable" << endl;
	}

	for (int i = 0; i < n; i++) {
		cout << A[i].suit << " " << A[i].num << endl;
	}
}