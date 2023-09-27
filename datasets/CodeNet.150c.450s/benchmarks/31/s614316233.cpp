#define _CRT_SECURE_NO_WARNINGS
#define MAX_DATA 200000
#define MIN_DATA 2

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int NUM;
	scanf( "%d", &NUM );


	int max = -1000000000;
	int min = 0;
	int temp;

	scanf("%d", &min);

	for (int i = 1 ; i < NUM ; i++){
		scanf("%d", &temp);

		int sub = temp - min;

		if (sub > max) {
			max = sub;
		}

		if (temp < min){
			min = temp;
		}
	}



	printf("%d\n", max);

	return 0;
}