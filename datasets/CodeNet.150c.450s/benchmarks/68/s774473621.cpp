#pragma warning(disable:4996)
#include<stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	while (1) {
		int n;
		int a[1001];

		scanf("%d", &n);
		if (n == 0) break;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		sort(a, a + n);
		int b[1000];
		for (int i = 0; i < n - 1; i++) {
			if (a[i + 1] > a[i]) b[i] = a[i + 1] - a[i];
			else b[i] = a[i] - a[i + 1];
		}
		int min = 10000000;
		for (int i = 0; i < n - 1; i++) {
			if (min > b[i]) min = b[i];
		}
		printf("%d\n", min);
	}
}
