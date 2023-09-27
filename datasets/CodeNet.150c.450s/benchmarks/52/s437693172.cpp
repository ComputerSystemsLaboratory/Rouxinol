#include <stdio.h>

int main() {
	int temp[10];
	int input;

	int i = 0;
	
	while(scanf("%d", &input) != EOF) {
		if(input != 0) {
			temp[i] = input;
			i++;
		}

		else {
			i--;
			printf("%d\n", temp[i]);
		}
	}

	return 0;
}