#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;

int S[1000],top;

void push(int x){
	S[++top] = x;
}

int pop(){
	top--;
	return S[top + 1];
}

int main(){
	string st;
	int a, b;
	top = 0;
	while (cin >> st){
		if (st == "+"){
			a = pop();
			b = pop();
			push(a + b);
		}
		else if (st == "-"){
			b = pop();
			a = pop();
			push(a - b);
		}
		else if (st == "*"){
			a = pop();
			b = pop();
			push(a*b);
		}
		else{
			int tmp = atoi(st.c_str());
			push(tmp);
		}
	}
	printf("%d\n", pop());
	return 0;
}