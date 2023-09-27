#include<stdio.h>
int main(){

	int yama[10];
	int a, b,c;
	for (a = 0; a < 10; a++){

		scanf("%d", &yama[a]);

	}
	for (a = 0; a < 9; a++){
        
		for (b = 0; b < 9; b++){

			if (yama[b] < yama[b + 1]){

				c = yama[b];
				yama[b] = yama[b + 1];
				yama[b + 1] = c;
			}

		}

	}

	for (a = 0; a < 3; a++){

		printf("%d\n", yama[a]);

	}

	return 0;
}