#include<queue>
#include<cstdio>
#include<iostream>
using namespace std;


int main()
{
	int n;
	int b[300], f[300], r[300], v[300];
	int building[4][3][10] = { 0 };
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> b[i] >> f[i] >> r[i] >> v[i];

	for (int i = 0; i < n; i++)
	{
		switch (b[i])
		{
		case 1:
			building[0][f[i] - 1][r[i] - 1] += v[i];
			break;
		case 2:
			building[1][f[i] - 1][r[i] - 1] += v[i];
			break;
		case 3:
			building[2][f[i] - 1][r[i] - 1] += v[i];
			break;
		case 4:
			building[3][f[i] - 1][r[i] - 1] += v[i];
			break;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 10; k++) {
				cout << ' ' << building[i][j][k];
			}
			cout << endl;
		}
		cout << "####################" << endl;
	}

	for (int j = 0; j < 3; j++) {
		for (int k = 0; k < 10; k++) {
			cout << ' ' << building[3][j][k];
		}
		cout << endl;
	}

}