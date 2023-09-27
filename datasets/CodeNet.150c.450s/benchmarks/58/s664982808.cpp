#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int top,S[1000];

void push(int x);
int pop();

int main(){
	top = 0;
	int a,b;
	char c;
	
	while(scanf("%s",&c) != EOF){
		switch(c){
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
			default:
				push(atoi(&c));
				break;
			}
		}
		
		cout << pop() << endl;
}

void push(int x){
	++top;
	S[top] = x;
}

int pop(){
	--top;
	return S[top + 1];
}