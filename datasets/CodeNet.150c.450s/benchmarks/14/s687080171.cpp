#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

#define MAX 256

int main(void){
	
	int n;

	scanf("%d", &n);

	int i = 1, k = 0, x;

	while (i <= n){
		k = 0;
		x = i;
		if (i % 3 == 0)k = 1;
		if (x % 10 == 3)k = 1;
		while (x > 10){
			x = x / 10;
			if (x % 10 == 3)k = 1;
		}
		if (k == 1){
			printf(" %d", i);
		}
		i++;
	}

	printf("\n");
	return 0;
}