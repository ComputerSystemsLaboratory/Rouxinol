#include <stdio.h>

int main(void) {
	int i,n,mon = 100000;
	scanf("%d",&n);
	for(i = 0; n > i; i++){
		mon *= 1.05;
		mon += 999;
		mon = (int)(mon/1000)*1000;
	}
	printf("%d\n",mon);
	return 0;
}