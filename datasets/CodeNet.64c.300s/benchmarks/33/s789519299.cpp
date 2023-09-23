#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a[10000], b[10000],i=0,j;
	char op[10000];

	while (1){
		scanf("%d %c %d", &a[i], &op[i], &b[i]);
		if (op[i] == '?'){
			break;
		}
		i++;
	}

	for (j = 0; j < i; j++){
		if (op[j] == '+'){
			printf("%d\n", a[j] + b[j]);
		}
		else if (op[j] == '-'){
			printf("%d\n", a[j] - b[j]);
		}
		else if (op[j] == '*'){
			printf("%d\n", a[j] * b[j]);
		}
		else if (op[j] == '/'){
			printf("%d\n", a[j] / b[j]);
		}
	}

	return 0;
}