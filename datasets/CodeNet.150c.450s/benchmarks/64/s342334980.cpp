#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
using namespace std;

bool judge(const int a[], int n, int m, int i, int sum);

int main(void)
{
	int n, a[20];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];

	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int m;
		cin >> m;

		if (judge(a, n, m, 0, 0)) cout << "yes";
		else cout << "no";
		cout << endl;
	}

	return 0;
}

bool judge(const int a[], int n, int m, int i, int sum)
{
	if (i >= n) return false;
	int sum1 = sum;
	int sum2 = sum;

	if (judge(a, n, m, i + 1, sum1)) return true;

	sum2 += a[i];
	if (sum2 == m) return true;
	if (sum2 < m && judge(a, n, m, i + 1, sum2)) return true;
	return false;	
}