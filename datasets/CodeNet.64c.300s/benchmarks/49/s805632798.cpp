#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>

int digit(int v){
	int cnt = 1;
	while ((v /= 10) != 0)
		cnt++;
	return cnt;
}

int main(){
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF)
		printf("%d\n", digit(a + b));

	return 0;
}