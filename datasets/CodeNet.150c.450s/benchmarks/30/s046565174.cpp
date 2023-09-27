#include<iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {

	int N, A[100],minj;
	int count = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];

	for (int i = 0; i < N-1 ; i++) {
		minj = i;
		for (int j = i; j < N; j++) {
			if (A[j] < A[minj])
				minj = j;
		}
			swap(A[i], A[minj]);
			if (i != minj) count++;
	}

	for (int i = 0; i < N; i++) {
		if (i != 0) cout << " ";
		cout << A[i];
	}
	putchar('\n');

	cout << count << endl;

	return 0;

}