#include <stdio.h>
#define NUMBER 5

int main() {
	int input[NUMBER];
	int temp;
	int last_ch = NUMBER - 1;
	int temp_ch;

	int i;

	for(i = 0; i < NUMBER; i++)
		scanf("%d", &input[i]);

	/* 左の方が小さかった場合には入れ替える。 */
	while(last_ch) {
		temp_ch = 0;
		for(i = 0; i < last_ch; i++) {
			if(input[i] < input[i + 1]) {
				temp = input[i];
				input[i] = input[i + 1];
				input[i + 1] = temp;
				temp_ch = i + 1;
			}
		}
		last_ch = temp_ch;
	}
	
	for(i = 0; i < NUMBER - 1; i++) 
		printf("%d ", input[i]);

	printf("%d\n", input[NUMBER - 1]);

	return 0;
}