#include<stdio.h>

int main() {
	int a,b,c,cnt=0;
	scanf("%d %d %d", &a, &b, &c);

	for (int i = 1; i <= c; i++)
		if (c%i == 0)
			if (a <= i&&i <= b)
				cnt++;
	printf("%d\n", cnt);
	return 0;
}