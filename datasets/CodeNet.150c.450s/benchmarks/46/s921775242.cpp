#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a[1000], b[1000], i,s[1000];
	i = 1;
	while (1) {
		cin >> a[i] >> b[i];
		if (a[i] == 0 && b[i] == 0) { break; }
		s[i] = 0;
		i++;
	}
	for (int n = 1;n <= i - 1;n++) {
		for (int j = 1;j <= a[n] - 2;j++) {
			for (int k = j+1;k <= a[n] - 1;k++) {
				for (int l = k+1;l <= a[n];l++) {
					if (j + k + l == b[n] ) { s[n] = s[n] + 1; }
				}
			}
		}
	}
	for (int m = 1;m <= i - 1;m++) { cout << s[m] << endl; }
	return 0;
}
