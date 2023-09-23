#include<iostream>
using namespace std;

int main()
{
	int n, m, a[100][100], b[100], N[100] = {};
	cin >> n >> m;


	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++)
			cin >> a[i][j];
	}
	for (int  k= 0; k< m;k++)
		cin >> b[k];

	for (int x = 0;x < n;x++) {
		for (int y = 0;y < m;y++) {
			N[x] = a[x][y] * b[y] + N[x];
		}
		cout << N[x] << endl;
	}

    return 0;
}
