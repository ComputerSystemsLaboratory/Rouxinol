#include<iostream>
#include<cstdio>
using namespace std;
const int MAX = 500000;
const int maxnum = 1000000010;

// ???????±???¨??°???
int L[MAX / 2 + 2], R[MAX / 2 + 2];
int A[MAX], n;
int cnt = 0;

// ??????????????¶
void merge(int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	for (int i = 0; i < n1; i++) L[i] = A[left + i];
	for (int i = 0; i < n2; i++) R[i] = A[mid + i];

	// ???????±???¨??°?????????????????????????????§?????°
	L[n1] = R[n2] = maxnum;
	int i = 0, j = 0;
	// ?????¶
	for (int k = left; k < right; k++) {
		cnt++;
		if (L[i] <= R[j])
			A[k] = L[i++];
		else
			A[k] = R[j++];
	}
}
// ??????
void mergeSort(int left, int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(left, mid);
		mergeSort(mid, right);
		merge(left, mid, right);
	}
}
int main() {

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);

	mergeSort(0, n);
	for (int i = 0; i < n; i++)
		printf("%d%c", A[i], i == n - 1 ? '\n' : ' ');
	printf("%d\n", cnt);
	return 0;
}