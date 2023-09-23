#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

#define MAX 256
#define S(x) (x*x)

int f(int z){
	if (z < 10)return 1;
	return 1 + f(z / 10);
}

int main(void){
	
	int ans[MAX];
	for (int i = 0; i < MAX; i++){
		ans[i] = 0;
	}

	int d;
	int i = 0;

	while (scanf("%d", &d) != EOF){
		for (int j = d; j <= 600 - d; j += d){
			ans[i] += S(j)*d;
		}
		i++;
	}

	for (int j = 0; j < i; j++){
		printf("%d\n", ans[j]);
	}

	return 0;
}