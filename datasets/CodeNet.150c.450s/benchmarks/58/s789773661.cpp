#include <cstdio>
#include <cstdlib>

int stack[101];
int cur = 0;

void push(int i){
	stack[cur] = i;
	cur++;
}

int pop(){
	cur--;
	return stack[cur];
}
int main(){
	char op[100];
	int a, b;
	
	while(scanf("%s", op) != EOF){
		switch(op[0]){
		case '+':
			b = pop();
			a = pop();
			push(a + b);
			break;
		case '-':
			b = pop();
			a = pop();
			push(a - b);
			break;
		case '*':
			b = pop();
			a = pop();
			push(a * b);
			break;
		case '/':
			b = pop();
			a = pop();
			push(a / b);
			break;
		default:
			push(atoi(op));
			break;
		}
	}
	
	printf("%d\n", pop());
	return 0;
}