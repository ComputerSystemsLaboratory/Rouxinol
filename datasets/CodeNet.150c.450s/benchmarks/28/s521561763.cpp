#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
using namespace std;

bool judge(const int w[], int n, int k, int p);

int main(void)
{
	int n, k;
	cin >> n >> k;

	int w[100000], sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> w[i];
		sum += w[i];
	}
	int p = sum / k;

	while (!judge(w, n, k, p)) p++;

	cout << p << endl;

	return 0;
}

bool judge(const int w[], int n, int k, int p)
{
	int t[100000] = { 0 };
	int j = 0;
	for (int i = 0; i < n; i++) {
		while (p - t[j] < w[i]) j++;
		if (j >= k) return false;
		t[j] += w[i];
	}
	return true;
}