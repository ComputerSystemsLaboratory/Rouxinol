#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

void push(int);
int pop(void);

int s[100];
int k=0;

int main(){
	char str[100];
	int a,b;
	while(scanf("%s",str) != EOF){
		switch(str[0]){
			case '+':
				push(pop()+pop());
				break;
			case '-':
				b=pop();
				a=pop();
				push(a-b);
				break;
			case '*':
				push(pop()*pop());
				break;
			default:
				push(atoi(str));
				break;
		}
	}
	cout << pop() << endl;
	return 0;
}

void push(int a){
	s[k++]=a;
}

int pop(void){
	return s[--k];
}