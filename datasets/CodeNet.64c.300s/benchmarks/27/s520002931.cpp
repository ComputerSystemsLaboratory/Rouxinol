#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

#define MAX 256

int main(void){
	
	int n[MAX] = { 0 };
	int x[MAX] = { 0 };
	int k = 0, i = 0;

	while (k == 0){
		scanf("%d%d", &n[i], &x[i]);
		if (n[i] + x[i] == 0)k = 1;
		i++;
	}

	int count = 0;

	for (int j = 0; j < i - 1; j++){
		count = 0;
		for (int k = 1; k <= x[j] / 3; k++){
			for (int l = k + 1; l <= (x[j] - k) / 2; l++){
				if (x[j] - k - l != l && x[j] - k - l <= n[j])count++;
			}
		}
		printf("%d\n", count);
	}

	return 0;
}