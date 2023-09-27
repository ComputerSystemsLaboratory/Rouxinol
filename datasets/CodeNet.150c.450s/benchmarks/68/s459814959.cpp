#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	int n = 0;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		int A[1000];
		for (int i = 0; i < 1000; i++) {
			A[i] = 0;
		}
		for (int i = 0; i < n; i++) {
			cin >> A[i];
		}
		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++) {
				if (A[i] > A[j]) {
					int tmp = A[i];
					A[i] = A[j];
					A[j] = tmp;
				}
			}
		}
		int min = 1000000;
		for (int i = 0; i < n - 1; i++) {
			if (A[i + 1] - A[i] < min) {
				min = A[i + 1] - A[i];
			}
		}
		cout << min << endl;
	}
	return 0;
}
