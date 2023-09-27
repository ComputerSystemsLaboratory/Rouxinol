#include <stdio.h>
#include <string.h>


int main(void) {
	char x[1000] = "";
	int sum;
	
	do {
		sum = 0;
		scanf("%s", x);
		for (int i = 0; i < strlen(x); i++) {
			sum += (x[i] - '0');
		}
		if (sum < 1) break;
		printf("%d\n", sum);
		
		
		
	} while (true);
	
	return 0;
}