#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <cstdio>
#include <iostream>
using namespace std;
int i, j;
const int num = 100002;
const int numm = 1 + num / 2;
const int INF = 1000000001;
struct Card {
	int numc;
	char pic;
};
Card A[num], B[num];
inline int partition(int p, int r) {
	int base = A[r].numc;
	int q = p - 1;
	for (i = p; i < r; i++) {
		if (A[i].numc <= base)
			swap(A[++q], A[i]);
	}
	swap(A[++q], A[r]);
	return q;
}
inline void quickSort(int p, int r) {
	if (r > p) {
		int a = partition(p, r);
		quickSort(p, a - 1);
		quickSort(a + 1, r);
	}
}
inline void merge(int left, int mid, int right) {
	int n1 = mid - left, n2 = right - mid;
	Card I[numm], J[numm];
	for (i = 0; i < n1; i++)
		I[i] = B[left + i];
	for (i = 0; i < n2; i++)
		J[i] = B[mid + i];
	int a = 0, b = 0;
	I[n1].numc = J[n2].numc = INF;
	for (i = left; i < right; i++) {
		if (I[a].numc <= J[b].numc)
			B[i] = I[a++];
		else B[i] = J[b++];
	}
}
inline void mergeSort(int left, int right) {
	if (right > left + 1) {
		int mid = (left + right) / 2;
		mergeSort(left, mid);
		mergeSort(mid, right);
		merge(left, mid, right);
	}
}
int main() {
	int n, v, sta = 1;
	char c[2];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s%d", c, &v);
		A[i].numc = B[i].numc = v;
		A[i].pic = B[i].pic = c[0];
	}
	quickSort(0, n - 1);
	mergeSort(0, n);
	for (i = 0; i < n - 1; i++) {
		if (A[i].pic != B[i].pic)
			sta = 0;
	}
	if (sta) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	for (i = 0; i < n; i++) {
		printf("%c %d\n", A[i].pic, A[i].numc);

	}
	return 0;
}