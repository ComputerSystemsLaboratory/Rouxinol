#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a[1000][1000],b[1000],i, j;
	int c[1000];
	cin >> i >> j;

	for (int m = 1;m <= i;m++) {
		for (int n = 1;n <= j;n++) {
			cin >> a[m][n];
			c[n] = 0;
		}

	}

	for (int o = 1;o <= j;o++) {
		cin >> b[o];
	}
	for (int l = 1;l <= i;l++) {
		for (int k = 1;k <= j;k++) {
			c[l] += b[k] * a[l][k];
		}
	}
	for (int h = 1;h <= i;h++) { cout << c[h] << endl; }
	return 0;
}
