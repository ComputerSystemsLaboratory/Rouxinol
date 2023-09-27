#include<iostream>
using namespace std;

#define MAX 500000
#define INFTY 2000000000

int Left[MAX / 2 + 2], Right[MAX / 2 + 2];
int count_rep;

void merge(int A[], int size, int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	for (int i = 0; i < n1; ++i) {
		Left[i] = A[left + i];
	}
	for (int i = 0; i < n2; ++i) {
		Right[i] = A[mid + i];
	}
	Left[n1] = Right[n2] = INFTY;
	int i = 0, j = 0;
	for (int k = left; k < right; ++k) {
		++count_rep;

		if (Left[i] <= Right[j]) {
			A[k] = Left[i++];
		}
		else {
			A[k] = Right[j++];
		}
	}
}

void merge_sort(int A[], int size, int left, int right) {
	if(left + 1 < right){
	int mid = (left + right) / 2;
	merge_sort(A, size, left, mid);
	merge_sort(A, size, mid, right);
	merge(A, size, left, mid, right);
	}
}

int main() {
	int A[MAX], size;
	count_rep = 0;
	cin >> size;
	for (int i = 0; i < size; ++i) {
		cin >> A[i];
	}
	merge_sort(A, size, 0, size);
	for (int i = 0; i < size; ++i) {
		if (i) cout << " ";
		cout << A[i];
	}
	cout << endl;
	cout << count_rep << endl;
	return 0;
}