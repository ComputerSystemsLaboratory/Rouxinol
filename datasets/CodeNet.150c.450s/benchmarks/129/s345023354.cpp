#include<iostream>
#include<vector>
using namespace std;

int main()
{
	const int max_r = 100, max_c = 100;
	int a[max_r][max_c] = { 0 };
	int r, c;
	int SUM_ = 0;
	//input
	cin >> r >> c;
	for (int y = 0; y < r; y++) {
		for (int x = 0; x < c; x++) {
			cin >> a[y][x];
			SUM_ += a[y][x];
		}
	}

	//output
	for (int i = 0; i < r; i++) {
		int sum_r = 0;
		for (int j = 0; j < c; j++) {
			cout << a[i][j] << " ";
			sum_r += a[i][j];
		}
		cout << sum_r << endl;
	}
	for (int i = 0; i < c; i++) {
		int sum_c = 0;
		for (int j = 0; j < r; j++) {
			sum_c += a[j][i];
		}
		cout << sum_c << " ";
	}
	cout << SUM_ << endl;
    return 0;
}