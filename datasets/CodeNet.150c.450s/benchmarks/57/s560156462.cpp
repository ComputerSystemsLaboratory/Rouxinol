#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, i=0,c=0,aa[100],ba[100];
	char op,opa[100];
	
	while (1){
		scanf("%d %c %d", &a, &op, &b);
		aa[i] = a;
		ba[i] = b;
		opa[i] = op;
		if ('?' == op) {
			break;
		}
		i++;
		c = i;
	}
	
	for (i = 0; i < c; i++) {
		switch (opa[i]){
			case '+':
			printf("%d\n", aa[i] + ba[i]);
			break;
			case '-':
				printf("%d\n", aa[i] - ba[i]);
				break;
			case '*':
				printf("%d\n", aa[i] * ba[i]);
				break;
			case '/':
				printf("%d\n", aa[i] / ba[i]);
				break;
		default:
			break;
		}
	}
}