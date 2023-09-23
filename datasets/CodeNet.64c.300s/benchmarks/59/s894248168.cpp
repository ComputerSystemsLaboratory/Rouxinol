#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

#define MAX 256

int f(int x){
	if (x == 2)return 1;
	if (x % 2 == 0)return 0;
	for (int i = 3; i <= (int)sqrt(x); i += 2){
		if (x%i == 0)return 0;
	}
	return 1;
}

int main(void){

	int a;
	scanf("%d", &a);
	int count = 0, b;

	for (int i = 0; i < a; i++){
		scanf("%d", &b);
		count += f(b);
	}

	printf("%d\n", count);

	return 0;
}