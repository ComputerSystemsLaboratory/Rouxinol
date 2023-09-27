#include<iostream>
#include<climits>
#define MAX 500001
using namespace std;
void merge(int*, int, int, int);
void mergeSort(int*, int, int);
int count = 0;
int main() {
	int n, A[MAX];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	//cout << INT_MAX<<endl;
	mergeSort(A, 0, n);
	for (int i = 0; i < n; i++) {
		cout << A[i];
		if (i != n - 1) {
			cout << " ";
		}
		else {
			cout << endl;
		}
	}
	cout << count << endl;
}

void merge(int *A, int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	int L[n1+1], R[n2+1];
	//cerr << "L: ";
	for (int i = 0; i < n1; i++) {
		L[i] = A[left + i];
		//cerr << L[i] << " ";
	}
	//cerr << endl << "R: ";
	for (int i = 0; i < n2; i++) {
		R[i] = A[mid + i];
		//cerr << R[i] << " ";
	}
	//cerr << endl;
	L[n1] = INT_MAX;
	R[n2] = INT_MAX;
	int i = 0, j = 0;
	for (int k = left; k < right; k++) {
		count++;
		if (L[i] <= R[j]) {
			A[k] = L[i];
			i++;
		}
		else {
			A[k] = R[j];
			j++;
		}
	}
}


void mergeSort(int *A,int left,int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}