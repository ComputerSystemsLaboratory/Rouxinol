#include <iostream>

using namespace std;

int main() {
	int r, c;
	int sum_r, sum_c, sum_rc = 0;
	cin >> r >> c;
	int rc[r][c];

	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			cin >> rc[i][j];
		}
	}
	for(int i=0; i<r; i++) {
		sum_r = 0;
		for(int j=0; j<c; j++) {
			cout << rc[i][j] << " ";
			sum_r += rc[i][j];
		}
		cout << sum_r;
		sum_rc += sum_r;
		cout << endl;
	}
	for(int i=0; i<c; i++) {
		sum_c = 0;
		for(int j=0; j<r; j++) {
			sum_c += rc[j][i];
		}
		cout << sum_c << " ";
	}
	cout << sum_rc << endl;

	return 0;
}
