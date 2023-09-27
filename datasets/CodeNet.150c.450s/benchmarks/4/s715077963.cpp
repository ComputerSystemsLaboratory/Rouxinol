#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a[50], b[50], c[50],i;
	i = 1;
	while (1) {
		cin >> a[i] >> b[i] >> c[i];
		if (a[i] == -1&&b[i]== -1&&c[i]==-1) { break; }
		i++;
	}
	for (int m = 1;m <= i - 1;m++) {
		if (a[m] == -1 || b[m] == -1) { cout << "F" << endl; }
		else if (a[m] + b[m] >= 80) { cout << "A" << endl; }
		else if (a[m] + b[m] >= 65) { cout << "B" << endl; }
		else if (a[m] + b[m] >= 50) { cout << "C" << endl; }
		else if (a[m] + b[m] >= 30) {
			if (c[m] >= 50) { cout << "C" << endl; }
			else { cout << "D" << endl; }
		}
		else { cout << "F" << endl; }
	}
	return 0;
}
