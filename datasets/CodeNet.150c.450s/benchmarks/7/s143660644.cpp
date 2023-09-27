#include<stdio.h>

int main(void) {

	int fnit[10];
	int i = 0;

	int top = 0;
	int second = 0;
	int third = 0;

	for(i = 0; i < 10; i++) {
		scanf("%d", &fnit[i]);
	}

	/* トップを求める処理 */

	top = fnit[0];

	for(i = 1; i <= 9; i++) {

		if( top < fnit[i] ) {
			third = second;
			second = top;
			top = fnit[i];
		}
		else if (second < fnit[i]) {
			third = second;
			second = fnit[i];
		}
		else if(third < fnit[i]) {
			third = fnit[i];
		}
	}

	/* --- */

	printf("%d\n", top);
	printf("%d\n", second);
	printf("%d\n", third);


	return 0;
}