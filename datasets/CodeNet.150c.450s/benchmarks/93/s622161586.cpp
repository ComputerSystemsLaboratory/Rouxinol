#include<iostream>
using namespace std;
static const int MAX = 100000;
static const int INFTY = 2000000000;


int n;
struct Card { char str; int num; };
int check;

int partition(Card A[], int p, int r) {
	int x = A[r].num;
	int i = p - 1;
	Card tmp;
	for (int j = p; j < r; j++) {
		if (A[j].num == x) {
			check = 1;
		}
		if (A[j].num <= x) {
			i += 1;
			tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}
	
	tmp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = tmp;
	return i + 1;
}

void quickSort(Card A[], int p, int r) {
	if (p < r) {
		int q = partition(A, p, r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}


Card L[MAX / 2 + 2], R[MAX / 2 + 2];

void merge(Card S[], int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	for (int i = 0; i < n1; i++) {
		L[i] = S[left + i];
	}
	for (int i = 0; i < n2; i++) {
		R[i] = S[mid + i];
	}
	L[n1].num = INFTY;
	R[n2].num = INFTY;
	int i = 0, j = 0;
	for (int k = left; k < right; k++) {
		if (L[i].num <= R[j].num) {
			S[k] = L[i];
			i++;
		}
		else {
			S[k] = R[j];
			j++;
		}
	}
}

void mergeSort(Card S[], int left, int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(S, left, mid);
		mergeSort(S, mid, right);
		merge(S, left, mid, right);
	}
}



int main() {
	Card A[MAX];
	Card B[MAX];
	check = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i].str >> A[i].num;
		B[i] = A[i];
	}
	mergeSort(B, 0, n);
	quickSort(A, 0, n - 1);
	
	for (int i = 0; i < n; i++) {
		if (A[i].str != B[i].str) {
			cout << "Not stable" << endl;
			break;
		}
		if (i == n - 1) {
			cout << "Stable" << endl;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << A[i].str << " " << A[i].num << endl;
	}
	return 0;

}
