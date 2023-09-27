#include <iostream>
using namespace std;

int main() {
	int r, c, a[100][100],r_sum[100],c_sum[100],a_sum;
	a_sum = 0;
	for (int i = 0;i < 100;i++) {
		r_sum[i] = 0;
		c_sum[i] = 0;
	}
	cin >> r >> c;

	for (int i = 0;i < r;i++) {
		for (int j = 0;j < c;j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0;i < r;i++) {
		for (int j = 0;j < c;j++) {
			r_sum[i] += a[i][j];
			a_sum += a[i][j];
		}
	}

	for (int i = 0;i < c;i++) {
		for (int j = 0;j < r;j++) {
			c_sum[i] += a[j][i];
		}
	}

	for (int i = 0;i < r;i++) {
		for (int j = 0;j < c;j++) {
			cout << a[i][j] << " ";
		}
		cout << r_sum[i] << endl;
	}

	for (int i = 0;i < c;i++)
		cout << c_sum[i]<<" ";

	cout << a_sum << endl;

	return 0;
}