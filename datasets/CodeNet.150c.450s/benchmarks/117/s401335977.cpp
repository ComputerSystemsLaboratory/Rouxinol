#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <cstdio>
#include <iostream>
using namespace std;
const int num = 500005, INF = 2000000000;
int A[num], l[num / 2 + 1], r[num / 2 + 1], cnt = 0;
void merge(int a[], int left, int mid, int right) {
	int num1 = mid - left;
	int num2 = right - mid;
	for (int i = 0; i < num1; i++) {
		l[i] = a[left + i];
	}
	for (int i = 0; i < num2; i++) {
		r[i] = a[mid + i];
	}
	int t = 0, u = 0;
	l[num1] = INF;
	r[num2] = INF;
	for (int s = left; s < right; s++) {
		cnt++;
		if (l[t] <= r[u]) {
			a[s] = l[t];
			t++;
		}
		else {
			a[s] = r[u];
			u++;
		}
	}
}
void mergeSort(int a[], int left, int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(a, left, mid);
		mergeSort(a, mid, right);
		merge(a, left, mid, right);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);
	mergeSort(A, 0, n);
	for (int i = 0; i < n; i++) {
		printf("%d", A[i]);
		if (i != n -1)cout << " ";
	}
	printf("\n");
	printf("%d\n", cnt);
	return 0;
}