#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

typedef long long ll;

int main()
{
	int n, m, l;
	cin >> n >> m >> l;

	int i, j, k;
	ll A[100][100] = {{}};
	ll B[100][100] = {{}};

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}

	for (j = 0; j < m; j++) {
		for (k = 0; k < l; k++) {
			cin >> B[j][k];
		}
	}

	ll temp = 0;

	for (i = 0; i < n; i++) {
		for (k = 0; k < l; k++) {
			temp = 0;
			for (j = 0; j < m; j++) {
				temp += A[i][j] * B[j][k];
				
			}
			if (k == 0) cout << temp;
			else cout << " " << temp;
		}
		cout << endl;
	}
	return 0;
}

