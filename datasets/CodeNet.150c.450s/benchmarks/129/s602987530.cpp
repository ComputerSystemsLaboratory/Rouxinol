#include <iostream>
using namespace std;

int main()
{
		int r, c, i, j;
		cin >> r >> c;
		int X[r+1][c+1];
		for (i=0; i<r+1; i++) for (j=0; j<c+1; j++) X[i][j] = 0;
		for (i=0; i<r; i++) for (j=0; j<c; j++) cin >> X[i][j];
		for (i=0; i<r; i++) {
				for (j=0; j<c; j++) X[i][c] += X[i][j];
				for (j=0; j<c+1; j++) X[r][j] += X[i][j];
		}
		for (i=0; i<r+1; i++) {
				for (j=0; j<c+1; j++) {
						if (j==c) cout << X[i][j];
						else cout << X[i][j] << " ";
				}
				cout << endl;
		}
}