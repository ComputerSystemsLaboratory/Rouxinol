#include <iostream>
#include <cstdio>
#include <limits.h>

using namespace std;

#define SENTINEL INT_MAX

long long int cnt = 0;
int s[200000];


void merge(int A[], int left, int mid, int right)
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
			cnt += n1 - i;
			j++;
		}
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
	
	/*/???????????°??¨
	for (int i = 1; i <= 10000; i++) {
		cnt = 0;
		for (int j = 0; j < 10000; j++) {
			s[j] = 0;
		}
		for (int j = 0; j < i; j++) {
			s[j] = i - j;
		}
		mergeSort(s,0,i);
		if (cnt == (1 + i) / 2.0 * i) {
			cout << "i = " << i <<"OK" << endl;
		}
		else {
			cout << "i = " << i << "OUT" << endl;
		}

	}
	*/

	
	mergeSort(s, 0, n);

	cout << cnt << endl;
	

	return 0;

}