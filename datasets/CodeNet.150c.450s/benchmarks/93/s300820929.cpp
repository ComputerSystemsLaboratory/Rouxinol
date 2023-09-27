#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <vector>
#include <map>
#include <stdio.h>
using namespace std;
#define MAX 100000;
#define SENTINEL 2000000000;
typedef long long int ll;

struct Card {
	char suit;
	int value;
};

struct Card L[100000 / 2 + 2], R[100000 / 2 + 2];

void merge(struct Card A[], ll left, ll mid, ll right) {
	ll n1 = mid - left, n2 = right - mid;
	for (int i = 0; i < n1; i++) {
		L[i] = A[left + i];
	}
	for (int i = 0; i < n2; i++) {
		R[i] = A[mid + i];
	}
	L[n1].value = R[n2].value = SENTINEL;
	ll i = 0, j = 0;
	for (ll k = left; k < right; k++) {
		if (L[i].value <= R[j].value) {
			A[k] = L[i++];
		}
		else {
			A[k] = R[j++];
		}
	}
}
void MergeSort(struct Card A[], ll N, ll left, ll right) {
	int mid;
	if (left + 1 < right) {
		ll mid = (left + right) / 2;
		MergeSort(A, N, left, mid);
		MergeSort(A, N, mid, right);
		merge(A, left, mid, right);
	}
}
int partition(struct Card A[], int N, int P, int R) {
	int i = P - 1, j;
	struct Card X = A[R], t;
	for (int j = P; j < R; j++) {
		if (A[j].value <= X.value) {
			i++;
			t = A[i]; A[i] = A[j]; A[j] = t;
		}
	}
	t = A[i + 1]; A[i + 1] = A[R]; A[R] = t;
	return i + 1;
}
void QuickSort(struct Card A[], int N, int P, int R) {
	int Q;
	if (P < R) {
		Q = partition(A, N, P, R);
		QuickSort(A, N, P, Q - 1);
		QuickSort(A, N, Q + 1, R);
	}
}
int main() {
	int N, V;
	struct Card A[100000], B[100000];
	char S;
	int stable = 1;

	cin >> N;
	for (int i = 0; i < N; i++ ) {
		cin >> S >> V;
		A[i].suit = B[i].suit = S;
		A[i].value = B[i].value = V;
	}

	MergeSort(A, N, 0, N);
	QuickSort(B, N, 0, N - 1);
	for (int i = 0; i < N; i++) {
		if (A[i].suit != B[i].suit)stable = 0;
	}
	if (stable == 1) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	for (int i = 0; i < N; i++) {
		cout << B[i].suit << ' ' << B[i].value << endl;
	}
}

