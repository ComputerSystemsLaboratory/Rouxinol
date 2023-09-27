#include <stdio.h>

void Hantei(int a[3])
{
	int max, zako1, zako2;

	if (a[0]>a[1] && a[0]>a[2]) {
		max = a[0];
		zako1 = a[1];
		zako2 = a[2];
	}
	else if (a[1]>a[0] && a[1]>a[2]) {
		max = a[1];
		zako1 = a[0];
		zako2 = a[2];
	}
	else {
		max = a[2];
		zako1 = a[0];
		zako2 = a[1];
	}

	if (max*max == zako1*zako1 + zako2*zako2) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

}

int main(void)
{
	int n;
	scanf("%d", &n);

	int len[n][3];

	for (int i = 0; i<n; i++) {
		scanf("%d %d %d", &len[i][0], &len[i][1], &len[i][2]);
	}

	for (int i = 0; i<n; i++) {
		Hantei(len[i]);
	}



	return 0;

}