#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
static const int NMAX = 100000;
int main() {
	int L[NMAX], A[NMAX];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	int length = 1;
	L[0] = A[0];
	for (int i = 1; i < n; i++) {
		if (L[length-1] < A[i]) {
			L[length++] = A[i];
		}
		else {
			*lower_bound(L, L + length, A[i]) = A[i];
		}
	}
	cout << length << endl;
}