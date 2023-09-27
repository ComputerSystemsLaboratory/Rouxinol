#include<stdio.h>
int main() {
	int a, b, c;
	int i;
	int cnt = 0;

	scanf("%d %d %d", &a, &b, &c);

	if (a > b)return -1;

	for (i = a; i <= b; i++) {
		!(c % i) ? cnt++ :0 ;
	}
	printf("%d\n", cnt);
	return 0;
}