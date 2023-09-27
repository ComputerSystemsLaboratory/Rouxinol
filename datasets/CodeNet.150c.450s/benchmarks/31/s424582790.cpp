#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int* R = new int[n];

	for (int i = 0; i < n; ++i) {
		cin >> R[i];
	}

	int max = R[1] - R[0];
	int min = R[0];

	for (int i = 1; i < n; ++i) {
		if (max < R[i] - min) {
			max = R[i] - min;
		}

		if (min > R[i]) {
			min = R[i];
		}
	}

	cout << max << endl;
	delete[] R;

}
