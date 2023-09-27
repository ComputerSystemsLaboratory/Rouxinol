#include <stdio.h>

int main(void) {
	int a[3]={0}, i, n;
		for (i = 1; i <= 10; i++){
			scanf("%d",&n);
			if (a[0] < n){
				a[2] = a[1];
				a[1] = a[0];
				a[0] = n;
			}
			else if (a[1] < n){
				a[2] = a[1];
				a[1] = n;
			}
			else if (a[2] < n){
				a[2] = n;
			}
		}
	printf("%d\n%d\n%d\n", a[0], a[1], a[2]);
	return 0;
}