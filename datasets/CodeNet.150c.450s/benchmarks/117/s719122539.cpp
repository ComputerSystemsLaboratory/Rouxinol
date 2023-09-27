#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#define INF 2000000000
#define MAX 500000
//#define SIZE 40
//#define PI 3.14159265359
using namespace std;

int L[MAX / 2 + 2];
int R[MAX / 2 + 2];
int cnt;

void merge(int *A, int n, int left,int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	for (int i = 0; i < n1; i++) L[i] = A[left + i];
	for (int i = 0; i < n2; i++) R[i] = A[mid + i];
	L[n1] = INF;
	R[n2] = INF;
	int i = 0, j = 0;
	for (int k = left; k < right; k++) {
		cnt++;
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

void mergeSort(int *A, int n, int left, int right) {
	if (left + 1 < right) {
		int mid = (right + left) / 2;
		mergeSort(A, n,left, mid);
		mergeSort(A, n, mid, right);
		merge(A, n, left, mid, right);
	}
}

int main() {
	int n;
	cnt = 0;
	scanf("%d", &n);
	int A[MAX];
	for (int i = 0; i < n; i++) scanf("%d", &A[i]);
	mergeSort(A, n, 0, n);
	for (int i = 0; i < n; i++)
	{
		if (i > 0) printf(" ");
		printf("%d", A[i]);
	}
	printf("\n%d\n", cnt);
	return 0;
}