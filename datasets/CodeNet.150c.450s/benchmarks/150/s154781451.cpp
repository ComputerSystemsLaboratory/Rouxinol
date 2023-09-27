#include <bits/stdc++.h>
#define MAX_N 2000000
#define MAX_A 10000
using namespace std;
int N, A[MAX_N], B[MAX_N], C[MAX_A + 1];

void Out() {
	cout << B[0];
	for (int i = 1; i < N; i++)
		cout << ' ' << B[i];
	cout << endl;
}

void CountingSort() {
	for (int i = 0; i < N; i++) {
		C[A[i]]++;
	}
	for (int i = 1; i <= MAX_A; i++) {
		C[i] += C[i - 1];
	}
	for (int i = N - 1; i >= 0; i--) {
		B[C[A[i]] - 1] = A[i];
		C[A[i]]--;
	}
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	CountingSort();
	Out();
	return 0;
}