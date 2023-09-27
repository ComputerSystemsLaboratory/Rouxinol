#include <bits/stdc++.h>
using namespace std;
int N, A[100], res;

void Out() {
	cout << A[0];
	for (int i = 1; i < N; i++)
		cout << ' ' << A[i];
	cout << endl;
}

void SelectionSort() {
	for (int i = 0; i < N; i++) {
		int minj = i;
		for (int j = i; j < N; j++) {
			if (A[j] < A[minj]) {
				minj = j;
			}
		}
		if (i != minj) {
			int tmp = A[i];
			A[i] = A[minj];
			A[minj] = tmp;
			res++;
		}
	}
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	SelectionSort();
	Out();
	cout << res << endl;
	return 0;
}