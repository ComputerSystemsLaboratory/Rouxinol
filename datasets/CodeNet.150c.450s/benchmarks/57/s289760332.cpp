#include<cstdio>

int main(){
	int a, b, n;
	char op;
	while(1){
		scanf("%d %c %d", &a, &op, &b);
		if(op == '?') break;
		if(op == '+'){
			n=a+b;
		}else if(op == '-'){
			n=a-b;
		}else if(op == '*'){
			n=a*b;
		}else if(op == '/'){
			n=a/b;
		}
		printf("%d\n", n);
	}

	return 0;
}