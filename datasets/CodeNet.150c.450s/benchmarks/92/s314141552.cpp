#include <stdio.h>

int main(void) {
	int input1, input2;      /* 入力値 */
	int buff;               /* 計算値バッファ */
	int i;                     /* loopcounter */

	while (scanf("%d %d", &input1, &input2) != EOF) {

		buff = input1 + input2;
		i = 1;

		while (buff >= 10) {
			buff /= 10;
			i++;
		}

		printf("%d\n", i);
	}


	return 0;
}
