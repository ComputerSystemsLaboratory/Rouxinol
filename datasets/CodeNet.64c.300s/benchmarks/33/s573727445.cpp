#include<iostream>
#include<stdio.h>
#include<math.h>

#define MAX 256

int main(void){

	int a, b;
	char op;

	int c[MAX], i = 0;

	while (op != '?'){
		scanf("%d %c %d", &a, &op, &b);

		switch(op){
		case '+': c[i] = a + b; break;
		case '-': c[i] = a - b; break;
		case '*': c[i] = a * b; break;
		case '/': c[i] = a / b; break;
		}
		i++;
	}

	for (int j = 0; j < i - 1; j++){
		printf("%d\n", c[j]);
	}

	return 0;
}