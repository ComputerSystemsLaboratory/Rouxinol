
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>

using namespace std;

int abnumber(int, int);

int main()
{
	int n,temp,dif=1000000;
	int a[1000];

	start:

	scanf("%d", &n);

	if (n == 0) {
		goto finish;
	}

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (a[i] < a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (int i = 0; i < n - 1; i++) {
		if ((a[i] - a[i + 1]) < dif) {
			dif = a[i] - a[i + 1];
		}
	}
	
	cout << dif << endl;

	n = 0;
	dif = 1000000;

	goto start;

	finish:

	return 0;
}

int abnumber(int i, int j) {
	if ((i - j) > 0) {
		return i - j;
	}
	else {
		return j - i;
	}
}
