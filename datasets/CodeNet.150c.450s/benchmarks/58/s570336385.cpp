#include "bits/stdc++.h"
using namespace std;
int st[100];
int ptr=0;
int pop(void) {
	return st[--ptr];
}
void push(int op) {
	st[ptr++]=op;
}
int main() {
	char s[10];
	while(scanf("%s",s)!=EOF) {
		if(isdigit(s[0])) {
			int op;
			sscanf(s,"%d",&op);
			push(op);
		}else {
			int op2=pop(),op1=pop();
			switch(s[0]) {
			case '+':push(op1+op2);break;
			case '-':push(op1-op2);break;
			case '*':push(op1*op2);break;
			}
		}
	}
	printf("%d\n",pop());
}