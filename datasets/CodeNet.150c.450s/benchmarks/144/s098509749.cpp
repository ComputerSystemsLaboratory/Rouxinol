#include<iostream>
using namespace std;


int main()
{
	long long n, m, l, a[100][100] = {}, b[100][100] = {}, c[100][100] = {};
	cin >> n >> m >> l;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++)
			cin >> a[i][j];
	}
	for (int I = 0;I < m;I++) {
		for (int J = 0;J < l;J++)
			cin >> b[I][J];
	}

	for (int z = 0;z < n;z++) {
		for (int y = 0;y < l;y++) {
			for (int x = 0;x <m ;x++) {
				c[z][y] = c[z][y] + a[z][x] * b[x][y];
			}
		}
	}

	for (int d = 0;d < n;d++) {
		for (int e = 0;e < l;e++) {
			if (e != l - 1)
				cout << c[d][e] << " ";
			else
				cout << c[d][e];
		}
		cout << endl;
	}
    return 0;
}
