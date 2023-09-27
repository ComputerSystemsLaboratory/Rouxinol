#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;
int n, a[21];
int solve(int i, int m) {
	if (m == 0)
		return 1;
	else if (i >= n)
		return 0;
	else if (solve(i + 1, m) || solve(i + 1, m - a[i]))
		return 1;
	return 0;
}

int main() {
	int  q, num;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &q);
	for (int i = 0; i < q; i++) {
		scanf("%d", &num);
		if (solve(0, num))
			printf("yes\n");
		else printf("no\n");
	}
	return 0;
}