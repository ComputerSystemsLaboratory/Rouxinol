#include <stdio.h>

#define BUF_SIZE 256

int main(void) {
	char buf[BUF_SIZE];
	int d, sum=0;
	int i;
	
	while (fgets(buf, sizeof(buf), stdin) != NULL) {
		sscanf(buf, "%d", &d);
		
		for (i=1; i*d<=600-d; i++) {
			sum+= i*d*i*d*d;
		}
		
		printf("%d\n", sum);
		sum=0;
	}
	
	return 0;
}