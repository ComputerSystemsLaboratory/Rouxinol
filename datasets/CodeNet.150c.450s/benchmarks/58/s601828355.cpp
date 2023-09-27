#include<iostream>
#include<cstdio>
#include<cstdlib>

#define MAX 1000

using namespace std;

bool isEmpty();
bool isFull();
void push(int x);
int pop();

int top = 0;
int S[MAX];

int main(void)
{
	int a, b;
	char s;
	while(scanf("%s", &s) != EOF){
		switch(s){
		case '+':
			a = pop();
			b = pop();
			push(a + b);
			break;
		case '-':
			b = pop();
			a = pop();
			push(a - b);
			break;
		case '*':
			a = pop();
			b = pop();
			push(a * b);
			break;
		default:
			push(atoi(&s));
			break;
		}
	}
	cout << pop() << endl;
	return 0;
}

bool isEmpty(){
	if(top) return false;
	else return true;
}

bool isFull(){
	if(top >= MAX - 1) return true;
	else return false;
}

void push(int x){
	if(isFull()) cout << "?????????????????????" << endl;
	++top;
	S[top] = x;
	
}

int pop(){
	if(isEmpty()) cout << "??¢??????????????????" << endl;
	--top;
	return S[top + 1];
}