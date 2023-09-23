#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

#define MAX 256

int main(void){
	
	int k = 0, i = 0;

	int m[MAX] = { 0 };
	int f[MAX] = { 0 };
	int r[MAX] = { 0 };

	while (k == 0){
		scanf("%d%d%d", &m[i], &f[i], &r[i]);
		if (m[i] + f[i] + r[i] == -3)k = 1;
		i++;
	}

	for (int j = 0; j < i - 1; j++){
		if (m[j] == -1 || f[j] == -1){
			printf("F\n");
		}
		else if ((m[j] + f[j]) >= 80){
			printf("A\n");
		}
		else if ((m[j] + f[j]) >= 65){
			printf("B\n");
		}
		else if ((m[j] + f[j]) >= 50){
			printf("C\n");
		}
		else if ((m[j] + f[j]) < 30){
			printf("F\n");
		}
		else{
			if (r[j] >= 50){
				printf("C\n");
			}
			else{
				printf("D\n");
			}
		}
	}

	return 0;
}