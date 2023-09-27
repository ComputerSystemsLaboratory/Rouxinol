#include <iostream>
#include <cstdio>
#include <limits.h>

using namespace std;

#define SENTINEL INT_MAX

int cnt = 0;
int s[500000];


void merge(int A[], int left,int mid,int right)
{
	int n1 = mid - left;
	int n2 = right - mid;

	int *L = new int[n1 + 1];
	int *R = new int[n2 + 1];
	

	for (int i = 0; i < n1; i++) {
		L[i] = A[left + i];
	}

	for (int i = 0; i < n2; i++) {
		R[i] = A[mid + i];
	}

	L[n1] = R[n2] = SENTINEL;

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
		cnt++;
	}

	delete[] R;
	delete[] L;

}

void mergeSort(int A[], int left, int right) 
{
	if (left + 1 < right) {
		int mid = (right + left) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

int main(void)
{
	int n;


	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	mergeSort(s, 0, n);

	for (int i = 0; i < n; i++) {
		if (i != 0) {
			putchar(' ');
		}
		cout << s[i];
	}

	cout << endl << cnt << endl;

	return 0;

}