#include<cstdio>
#include<cstdlib>
#define MAX 100

int S[MAX];
int top;

void initialize(){
	top = 0;
}

bool isEmpty(){
	return top == 0;
}

bool isFull(){
	return top >= MAX - 1;
}

void push(int x){
	top++;
	S[top] = x;
}

int pop(){
	top--;
	return S[top+1];
}

int main(void){
	int op1, op2;
	char input[10];
	initialize();
	while(scanf("%s", input) != EOF){
		if(input[0] == '+'){
			op2 = pop();
			op1 = pop();
			push(op1 + op2);
		}
		else if(input[0] == '-'){
			op2 = pop();
			op1 = pop();
			push(op1 - op2);
		}
		else if(input[0] == '*'){
			op2 = pop();
			op1 = pop();
			push(op1 * op2);
		}
		else{
			push(atoi(input));
		}
	}

	printf("%d\n", pop());
	return 0;
}