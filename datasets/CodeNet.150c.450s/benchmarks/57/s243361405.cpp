#include<stdio.h>
int main(void){
	int a, b,k;
	char op='a',q=' ',w=' ';
	while (op != '?'){
		a = 0;
		b = 0;
		k = 0;
		op = 'a';
		scanf("%d", &a);
		scanf("%c", &q);
		scanf("%c", &op);
		scanf("%c", &w);
		scanf("%d", &b);
		if (op == '+'){
			k = a+b;
		}
		else if (op == '-') {
			k = a-b;
		}
		else if (op == '*'){
			k = a*b;
		}
		else if (op == '/'){
			k = a/b;
		}
		 if (op != '?'){
			printf("%d\n", k);
		}
	}
	return 0;
}