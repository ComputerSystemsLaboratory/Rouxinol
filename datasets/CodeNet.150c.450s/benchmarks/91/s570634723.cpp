#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int num, cnt;
	unsigned int i, j, k, data_num;
	int data[50];
	unsigned int sq_num;
	unsigned int *prime;

	for (data_num = 0; data_num < 50; data_num++) {
		data[data_num] = -1;
		scanf("%d", &data[data_num]);
		if (data[data_num] < 0) {
			break;
		}
	}

	for (k = 0; k < data_num; k++) {
		sq_num = (int)sqrt((double)data[k]);
		prime = (unsigned int*)malloc(sizeof(unsigned int) * data[k]);

		for (i = 0; i < data[k]; i++) {
			prime[i] = 1;
		}

		prime[0] = 0;
		for (i = 1; i < sq_num; i++) {
			if (prime[i] == 1) {
				for (j = (i + 1); (i + 1) * j <= data[k]; j++) {
					prime[(i + 1) * j - 1] = 0;
				}
			}
		}

		cnt = 0;
		for (i = 0; i < data[k]; i++) {
			if (prime[i] == 1) {
				cnt++;
				//printf("%d", i + 1);
			}
		}

		printf("%d\n", cnt);

		free(prime);
	}

	return 0;

}