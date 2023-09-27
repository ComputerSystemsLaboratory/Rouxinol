#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int r, c;
	cin >> r >> c;

	vector< vector<int> > x(r, vector<int>(c));
	vector<int> sumr(c, 0);
	vector<int> sumc(r, 0);
	int temp, sumall = 0;

	for (vector<int>::size_type i = 0; i < r; i++) {
		for (vector<int>::size_type j = 0; j < c; j++) {
			cin >> x[i][j];
			sumall += x[i][j];
		}
	}

	for (vector<int>::size_type i = 0; i < r; i++) {
		for (vector<int>::size_type j = 0; j < c; j++) {
			sumc[i] += x[i][j];
		}
	}

	for (vector<int>::size_type i = 0; i < c; i++) {
		for (vector<int>::size_type j = 0; j < r; j++) {
			sumr[i] += x[j][i];
		}
	}

	for (vector<int>::size_type i = 0; i < r; i++) {
		for (vector<int>::size_type j = 0; j < c; j++) {
			cout << x[i][j] << " ";
			if (j == c - 1) {
				cout << sumc[i];
			}
		}
		cout << "\n";
		if (i == r - 1) {
			for (int i = 0; i < c; i++) {
				cout << sumr[i] << " ";
			}
			cout << sumall << "\n";
		}
	}
}