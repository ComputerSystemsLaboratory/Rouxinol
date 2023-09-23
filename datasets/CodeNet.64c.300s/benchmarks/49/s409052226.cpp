#include<stdio.h>

int main() {

	int keta = 0;
	int input = 0, input2 = 0;
	int a = 0;

	while(scanf("%d %d", &input, &input2) != EOF) {

		a = input + input2;

		if(a == 0) {
			keta = 1;
		}

		while( a != 0 ) {

			a = a / 10;
			keta++;
		}

		printf("%d\n", keta);

		keta = 0;
	}

	return 0;
}