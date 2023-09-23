#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int i,j, n, num;
	int Scard[14] = { 0 }, Hcard[14] = { 0 }, Ccard[14] = { 0 }, Dcard[14] = { 0 };
	char mark = '0';

	scanf("%d", &n);
	getchar();

	for (j = 0; j < n;j++){

		scanf("%c %d", &mark, &num);
		getchar();

		if (mark == 'S'){
			Scard[num] = 1;
		}
		else if (mark == 'H'){
			Hcard[num] = 1;		
		}
		else if (mark == 'C'){
			Ccard[num] = 1;	
		}
		else if (mark == 'D'){
			Dcard[num] = 1;
		}
	}

	for (i = 1; i <= 13; i++){
		if (Scard[i] == 0){
			printf("S %d\n", i);
		}
	}
	for (i = 1; i <= 13; i++){
		if (Hcard[i] == 0){
			printf("H %d\n", i);
		}
	}
	for (i = 1; i <= 13; i++){
		if (Ccard[i] == 0){
			printf("C %d\n", i);
		}
	}
	for (i = 1; i <= 13; i++){
		if (Dcard[i] == 0){
			printf("D %d\n", i);
		}
	}

	return 0;
}