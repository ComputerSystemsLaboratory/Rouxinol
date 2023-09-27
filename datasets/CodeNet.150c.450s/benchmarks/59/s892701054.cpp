#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
	int A[100], N;
	int i = 0, j = 0, v = 0;
	cin >> N;
	for (i = 0; i < N; i++) { cin >> A[i]; }
	for (i = 0; i < N; i++) {
		v = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > v) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
		for (j = 0; j < N; j++) {
			if (j != 0) { printf(" "); }
			cout << A[j];
			if(j == N - 1) { printf("\n"); }
		}
	}
}