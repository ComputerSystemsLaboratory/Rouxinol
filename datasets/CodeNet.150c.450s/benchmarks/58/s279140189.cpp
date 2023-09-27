#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;

int top,S[101];

void push(int x){
	S[++top] = x;
}

int pop(){
	return S[top--];
}

int main(){
	char str[10];
	int a,b;
	top = 0;
	
	while(scanf("%s",str) != EOF){
		if(str[0]=='+'){
			a=pop();
			b=pop();
			push(a+b);
		}else if(str[0]=='-'){
			a=pop();
			b=pop();
			push(b-a);
		}else if(str[0]=='*'){
			a=pop();
			b=pop();
			push(a*b);
		}else{
			push(atoi(str));
		}
	}
	cout<<pop()<<endl;
}