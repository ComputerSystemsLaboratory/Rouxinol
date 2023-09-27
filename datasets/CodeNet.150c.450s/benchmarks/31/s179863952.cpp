#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* R = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> R[i];
	}

	int maxv = R[1] - R[0], minv = R[0];
	for (int j = 1; j <= n - 1; j++) {
		maxv = maxv > (R[j] - minv) ? maxv : R[j] - minv;
		minv = minv < R[j] ? minv : R[j];
	}

	cout << maxv << endl;

	delete[] R;
}