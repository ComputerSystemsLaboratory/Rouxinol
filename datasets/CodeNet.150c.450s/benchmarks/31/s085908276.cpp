#include<stdio.h>

/*??????????????¢??°*/
long int diff(long int x,long int y) {
	return y - x;
}

int main(void) {
	long int a, b, n, i, d=-9999999999999;
	scanf("%d", &n);/*n???????????\???*/
	scanf("%d", &a);/*R1?????\???*/
	for (i = 0; i < n-1; i++) {
		scanf("%d", &b);/*R2??\????????\???*/
		if (diff(a,b) > d)/*R1??¨Rt??????????????§???*/
			d = diff(a, b);
		if (a > b)/*R1???????????????*/
			a = b;
	}
	printf("%d\n", d);
	return 0;
}