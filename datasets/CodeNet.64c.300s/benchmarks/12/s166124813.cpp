#include <stdio.h>
int main () {
	int x,i,result;
	scanf("%d",&x);
	result = x;
	for (i = 0; i < 2; i++) {
		result = result * x;
	}
	printf("%d\n",result);
}