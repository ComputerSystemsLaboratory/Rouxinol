#include<iostream>
#include<stack>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main(){
	stack<int> intStack;
	char c[5];
	
	while((scanf("%s",&c))!=EOF){
		
		if(c[0]=='+'||c[0]=='-'||c[0]=='*'){
			int in,a,b;
			b=intStack.top();intStack.pop();
			a=intStack.top();intStack.pop();
			switch (c[0]){
				case '+':	in=a+b;break;
				case '-':	in=a-b;break;
				case '*':	in=a*b;break;
				default: break;
			}
			intStack.push(in);
		}else{
			intStack.push(atoi(c));
		}
		
	}
	cout<<intStack.top()<<endl;
	return 0;
	
}