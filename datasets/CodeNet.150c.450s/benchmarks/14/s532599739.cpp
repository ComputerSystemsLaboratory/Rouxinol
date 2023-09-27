#include <stdio.h>


int IsConclude3(int in){
	int flag = 1;
	for (int n = in; n > 2; n /= 10) {
		if ( n==3 ) {
			flag = 0;
			break;
		}
		else if (n % 10 == 3) {
			flag = 0;
			break;
		}
	}
	return flag;
}

int main() {
	int n, flag=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if ((i % 3) == 0) { printf(" %d", i); continue; }
		else if (IsConclude3(i) == 0) {
			printf(" %d", i); continue;
		}
	}
	printf("\n");
	return 0;
}
