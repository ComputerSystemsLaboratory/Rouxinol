#include <iostream>
using namespace std;

int main()
{
	int n, A[4][3][10],a,b,c,d;

	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 3;j++) {
			for (int k = 0;k < 10;k++) {
				A[i][j][k] = 0;
			}
		}
	}

	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a >> b >> c >> d;
		A[a-1][b-1][c-1] += d;
	}

	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 3;j++) {
			for (int k = 0;k < 10;k++) {
				cout << " " << A[i][j][k];
			}
			cout << endl;
		}
		if (i != 3) {
			for (int x = 0;x < 20;x++) {
				cout << "#";
			}
			cout << endl;
		}
	}
}