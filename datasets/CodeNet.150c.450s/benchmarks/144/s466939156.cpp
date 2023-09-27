#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n, m, l;
	int A[100][100], B[100][100];
	long long c;
	
	cin >> n >> m >> l;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			cin >> B[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			c = 0;
			for (int k = 0; k < m; k++) {
				c += A[i][k] * B[k][j];
			}
			cout << c;
			if (j == l - 1)
				cout << endl;
			else
				cout << " ";
		}
	}
	return (0);
}